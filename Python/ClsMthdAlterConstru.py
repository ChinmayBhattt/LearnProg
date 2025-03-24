# Class Methods as Alternative Constructors
class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary

    @classmethod
    def fromStr(cls, string):
        return cls(string.split("-")[0],string.split("-")[1])

# a1 = Employee("Chinmay",1200000 )
# print(a1.name)
# print(a1.salary)

string = "Chinmay-1200000"
a2 = Employee.fromStr(string)
print(a2.name)
print(a2.salary)
