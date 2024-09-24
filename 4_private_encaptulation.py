
class Person:
    def __init__(self, name, age):
        self.name = name # public
        self.age = age   # public
        self.__balance = 0 # private

    def get_banalce(self):
        return self.__balance
    
    def set_balance(self, amount):
        self.__balance += amount

        
rahim = Person("Rahim",25)

print(rahim.name, rahim.age)
print(rahim.get_banalce())
rahim.set_balance(1000)
print(rahim.get_banalce())