
class car:
    def __init__(self, model, color):
        self.model = model
        self.color = color

    def carInfo(self):
        print(f"car model: {self.model} and car color: {self.color}")


myCar = car('BMW','Black')
myCar.carInfo()