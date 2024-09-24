
class A:
    def __init__(self):
        self.value = 10
        print("I am constructor")

    def display(self):
        print("I am Method")

    def __del__(self):
        print("I am destructor")

obj = A()
obj.display()
# print(obj.value)
obj.value_1 = 20
print(obj.__dict__)