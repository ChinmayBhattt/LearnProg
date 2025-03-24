class Employee:
    CompanyName = "Apple"
    noOfEmployee = 0
    def __init__(self, name):
        self.name = name
        self.raise_amount = 0.02
        Employee.noOfEmployee += 1

    def show(self):
        print(f"The Name of Employee is {self.name} and the raise amount in {self.noOfEmployee} sized {self.CompanyName} is {self.raise_amount}")


# Employee.show(a1)
a1 = Employee("Chinmay")
a1.raise_amount = 0.03
a1.CompanyName = "Apple India"
a1.show()
Employee.CompanyName = "Google"
a2 = Employee("Nehal")
Employee.CompanyName = "Microsoft"
a2.show()
print(Employee.CompanyName)
