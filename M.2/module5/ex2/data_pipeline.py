import typing
from data_processor import DataProcessor, NumericProcessor, TextProcessor, LogProcessor
from data_stream import DataStream

class ExportPlugin(typing.Protocol):
    def process_output(self, data: list[tuple[int, str]]) -> None:
        ...

class CSVExportPlugin:
    def process_output(self, data: list[tuple[int, str]]) -> None:
        if not data:
            return
        print("CSV Output:")
        values = [val for _, val in data]
        print(",".join(values))

class JSONExportPlugin:
    def process_output(self, data: list[tuple[int, str]]) -> None:
        if not data:
            return
        print("JSON Output:")
        json_parts = []
        for rank, val in data:
            clean_val = val.replace('"', '\\"')
            json_parts.append(f'"item_{rank}": "{clean_val}"')
        print("{" + ", ".join(json_parts) + "}")

class PipelineStream(DataStream):
    def output_pipeline(self, nb: int, plugin: ExportPlugin) -> None:
        for proc in self._processors:
            extracted: list[tuple[int, str]] = []
            for _ in range(nb):
                try:
                    extracted.append(proc.output())
                except IndexError:
                    break
            if extracted:
                plugin.process_output(extracted)

if __name__ == "__main__":
    print("=== Code Nexus Data Pipeline ===")
    print("Initialize Data Stream")
    pipeline = PipelineStream()
    pipeline.print_processors_stats()
    
    print("Registering Processors")
    pipeline.register_processor(NumericProcessor())
    pipeline.register_processor(TextProcessor())
    pipeline.register_processor(LogProcessor())
    
    batch = ['Hello world', [3.14, 1, 2.71], [{'log_level': 'WARNING', 'log_message': 'Telnet access! Use ssh instead'}, {'log_level': 'INFO', 'log_message': 'User wil is connected'}], 42, ['Hi', 'five']]
    print(f"Send first batch of data on stream: {batch}")
    pipeline.process_stream(batch)
    pipeline.print_processors_stats()
    
    print("\nSend 3 processed data from each processor to a CSV plugin:")
    csv_plugin = CSVExportPlugin()
    pipeline.output_pipeline(3, csv_plugin)
    pipeline.print_processors_stats()
