from abc import ABC, abstractmethod

class User(ABC):
    def __init__(self, name, email, age) -> None:
        self.name = name
        self.email = email 
        self.age = age
    
    @abstractmethod
    def displayData(self): # abstractmethod , ei user class ta jei jei class inherit korbe sei class er moddhe obossoi displayData method ta thakte i hobe
        raise NotImplementedError
    
class Person(User):
    def __init__(self, name, email, age) -> None:
        User.__init__(self, name, email, age)

    def displayData(self):
        print(self.name, self.email, self.age)


obj = Person("rahim", "rahim@gmail.com", 25)
obj.displayData()