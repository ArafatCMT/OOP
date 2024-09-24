class A: # base class (grandparent)
    def __init__(self) -> None:
        pass

    def displayA(self):
        print("Capital letter A")

class B(A): # derive class 1 (parent)
    def __init__(self) -> None:
        pass

    def displayB(self):
        print("Capital letter B")

class C(B): # derive class 2 (child)
    def __init__(self) -> None:
        pass

    def displayC(self):
        print("Capital letter C")


obj = C()
obj.displayA()
obj.displayB()
obj.displayC()
# multilevel inheritance: kono derived class jodi base class er derived class thake property inherit kore tokon take multilevel inheritance bola jai.
#  a class is derived from a class that is also derived from another class.