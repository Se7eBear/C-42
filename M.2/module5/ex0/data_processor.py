import abc
import typing

class DataProcessor(abc.ABC):
    def __init__(self) -> None:
        self._queue: list[tuple[int, str]] = []
        self._total_processed: int = 0

    @abc.abstractmethod
    def validate(self, data: typing.Any) -> bool:
        pass

    @abc.abstractmethod
    def ingest(self, data: typing.Any) -> None:
        pass

    def output(self) -> tuple[int, str]:
        if not self._queue:
            raise IndexError("Nenhum dado disponível no processador.")
        return self._queue.pop(0)

    def _store_item(self, item_str: str) -> None:
        self._queue.append((self._total_processed, item_str))
        self._total_processed += 1


class NumericProcessor(DataProcessor):
    def validate(self, data: typing.Any) -> bool:
        if isinstance(data, (int, float)) and not isinstance(data, bool):
            return True
        if isinstance(data, list):
            return all(isinstance(x, (int, float)) and not isinstance(x, bool) for x in data)
        return False

    def ingest(self, data: typing.Any) -> None:
        if not self.validate(data):
            raise ValueError("Improper numeric data")
        
        if isinstance(data, list):
            for item in data:
                self._store_item(str(item))
        else:
            self._store_item(str(data))


class TextProcessor(DataProcessor):
    def validate(self, data: typing.Any) -> bool:
        if isinstance(data, str):
            return True
        if isinstance(data, list):
            return all(isinstance(x, str) for x in data)
        return False

    def ingest(self, data: typing.Any) -> None:
        if not self.validate(data):
            raise ValueError("Improper text data")
        
        if isinstance(data, list):
            for item in data:
                self._store_item(item)
        else:
            self._store_item(data)


class LogProcessor(DataProcessor):
    def validate(self, data: typing.Any) -> bool:
        def is_valid_log(d: typing.Any) -> bool:
            return (isinstance(d, dict) and 
                    'log_level' in d and 'log_message' in d and
                    isinstance(d['log_level'], str) and 
                    isinstance(d['log_message'], str))

        if is_valid_log(data):
            return True
        if isinstance(data, list):
            return all(is_valid_log(x) for x in data)
        return False

    def ingest(self, data: typing.Any) -> None:
        if not self.validate(data):
            raise ValueError("Improper log data")
        
        if isinstance(data, dict):
            data = [data]
            
        for item in data:
            log_str = f"{item['log_level']}: {item['log_message']}"
            self._store_item(log_str)


if __name__ == "__main__":
    print("=== Code Nexus Data Processor ===")
    
    print("\nTesting Numeric Processor...")
    num_proc = NumericProcessor()
    print(f"Trying to validate input '42': {num_proc.validate(42)}")
    print(f"Trying to validate input 'Hello': {num_proc.validate('Hello')}")
    
    print("\nTest invalid ingestion of string 'foo' without prior validation:")
    try:
        num_proc.ingest('foo')
    except Exception as e:
        print(f"Got exception: {e}")
        
    print("\nProcessing data: [1, 2, 3, 4, 5]")
    num_proc.ingest([1, 2, 3, 4, 5])
    print("Extracting 3 values...")
    for i in range(3):
        rank, val = num_proc.output()
        print(f"Numeric value {rank}:\n{val}")
    