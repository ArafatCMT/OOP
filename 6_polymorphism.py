from abc import ABC, abstractmethod

class shape(ABC):
    def __init__(self):
        pass
    
    @abstractmethod
    def area(self):
        raise NotImplementedError
    
class Triangle(shape):
    def __init__(self, base, height):
        self.base = base
        self.height = height

    def area(self): 
        area = 0.5 * self.base * self.height
        print("Area of Triangle : ", area)

class Rectangle(shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        area = self.length * self.width
        print("Area of Rectangle : ", area)
        
triangle = Triangle(20, 30)
triangle.area()

rectangle = Rectangle(10, 20)
rectangle.area()

# ek e area method different somoy e different vabe kaj kortaca