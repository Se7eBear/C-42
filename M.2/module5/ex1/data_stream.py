import typing
from data_processor import DataProcessor, NumericProcessor, TextProcessor, LogProcessor

class DataStream:
    def __init__(self) -> None:
        self._processors: list[DataProcessor] = []

    def register_processor(self, proc: DataProcessor) -> None:
        self._processors.append(proc)

    def process_stream(self, stream: list[typing.Any]) -> None:
        for item in stream:
            processed = False
            for proc in self._processors:
                if proc.validate(item):
                    proc.ingest(item)
                    processed = True
                    break
            if not processed:
                print(f"DataStream error - Can't process element in stream: {item}")

    def print_processors_stats(self) -> None:
        print("== DataStream statistics ==")
        if not self._processors:
            print("No processor found, no data")
            return
            
        for proc in self._processors:
            name = proc.__class__.__name__.replace("Processor", " Processor")
            total = proc._total_processed
            remaining = len(proc._queue)
            print(f"{name}: total {total} items processed, remaining {remaining} on processor")

if __name__ == "__main__":
    print("=== Code Nexus Data Stream ===")
    print("Initialize Data Stream...")
    stream = DataStream()
    stream.print_processors_stats()
    
    print("\nRegistering Numeric Processor...")
    stream.register_processor(NumericProcessor())
    
    batch = ['Hello world', [3.14, 1, 2.71], [{'log_level': 'WARNING', 'log_message': 'Telnet access! Use ssh instead'}, {'log_level': 'INFO', 'log_message': 'User wil is connected'}], 42, ['Hi', 'five']]
    print(f"Send first batch of data on stream: {batch}")
    stream.process_stream(batch)
    stream.print_processors_stats()
