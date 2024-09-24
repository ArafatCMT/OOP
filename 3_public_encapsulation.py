# public encapsulation
class Person:
    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age

    def myData(self):
        return f"{self.name} {self.age}"
    
rahim = Person('rahim', 25)
print(rahim.name, rahim.age)
print(rahim.myData())