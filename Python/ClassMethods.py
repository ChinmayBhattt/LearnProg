class Employee:
    Company = "Apple"

    def show(self):
        print(f"The Name is {self.name} and Company is {self.Company}")

    @classmethod
    def changeCompany(cls, newCompany):
        cls.Company = newCompany

a1 = Employee()
a1.name = "chinmay"
a1.show()
a1.changeCompany("Tesla")
a1.show()
print(Employee.Company)