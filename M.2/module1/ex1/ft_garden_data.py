

class Plant:
    def __init__(self, name: str, height: int, age: int):
        self.name = name
        self.height = height
        self.age = age

    def show(self) -> None:
        print(f"{self.name}: {self.height}cm, {self.age} days old")


if __name__ == "__main__":
    print("=== Garden Plant Registry ===")

    plant1 = Plant("Rose", 25, 30)
    plant2 = Plant("Girassol", 45, 720)
    plant3 = Plant("gerbera", 20, 300)

    plant1.show()
    plant2.show()
    plant3.show()
