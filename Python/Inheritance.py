class Employee:
    def __init__(self, name, id):
        self.name = name
        self.id = id
    
    def show(self):
        print(f"Employee Name is {self.name} and ID is {self.id}")

class Programer(Employee):
    def lang(self):
        print("The Language is Python")

# a = Employee("Chinmay", 26)
# a.show()

b = Programer("Chinmay", 26)
b.show()
b.lang()
