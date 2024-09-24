# method overloading : ekoi nam er ekadhik method thakbe kinto taber parameter type ba parameter sonkha alada hobe

class Calculator:
    def add(self, a, b, c=None):
        if c == None:
            return a+b
        return a+b+c
    
    
    
obj = Calculator()
print(obj.add(5,10,15))
print(obj.add(5,10))

