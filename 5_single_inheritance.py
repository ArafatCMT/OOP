class Person:
    def __init__(self, name, age, religion, gender, address):
        self.name = name
        self.age = age
        self.religion = religion
        self.gender = gender
        self.address = address
        

class Student(Person): 
    def __init__(self, name, age, religion, gender, address, cls, roll):
        # super().__init__(name, age, religion, gender, address)
        Person.__init__(self, name, age, religion, gender, address)
        self.cls = cls
        self.roll = roll

class Teacher(Person):
    def __init__(self, name, age, religion, gender, address, subject):
        super().__init__(name, age, religion, gender, address)
        self.subject = subject

student = Student('rahim', 15, 'islam', 'male', 'dhaka', 8, 12)
print(student.name, student.age, student.religion, student.gender, student.address, student.cls, student.roll)

teacher = Teacher("Abdul Alim", 45, 'islam', 'male', 'rajshahi', 'Math')
print(teacher.name, teacher.age, teacher.religion, teacher.address, teacher.gender, teacher.subject)
        

