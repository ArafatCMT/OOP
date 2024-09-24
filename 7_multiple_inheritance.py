
class Vehical:
    def __init__(self, brand):
        self.brand = brand

    def vehicalInfo(self):
        print("vehical brand :- ",self.brand)

class Engine:
    def __init__(self, horsepower):
        self.horsepower = horsepower

    def engineInfo(self):
        print("Engine Horsepower :- ", self.horsepower, "HP")


class Car(Vehical, Engine): # multiple inheritance: ek ta class jodi 2 ba tar ceye besi class er property inherite kore tokon take multiple inheritance bole. ei khan e Car (Vehical r Engine) er thake property inherit korca
    def __init__(self, brand, hoursepower):
        Vehical.__init__(self, brand)
        Engine.__init__(self, hoursepower)

car = Car("BMW", 300)
car.vehicalInfo()
car.engineInfo()

print(Car.mro()) # priotity bujar built in method holo : mro() - method resolution order



