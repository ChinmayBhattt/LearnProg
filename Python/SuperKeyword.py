class Employee:
  def __init__(self, name, id):
    self.name = name
    self.id = id

class Programmer(Employee):
  def __init__(self, name, id, lang):
    super().__init__( name, id)
    self.lang = lang

rohan = Employee("Rohan Das", "420")
harry = Programmer("Harry", "2345", "Python")
print(harry.name)
print(harry.id)
print(harry.lang)

# class ParentClass:
#     def parent_method(self):
#         print("This is the Parent Method")

# class ChildClass(ParentClass):
#     def parent_method(self):
#         print("Hello")
#         super().parent_method()

#     def Child_method(self):
#         print("This is the Child Method")
#         super().parent_method()

# childObj = ChildClass()
# childObj.Child_method()
# childObj.parent_method()

