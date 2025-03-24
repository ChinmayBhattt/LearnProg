# dir, __dict__ and help

# x = [1,2,3]
# x = (1,2,3)
# print(dir(x))
# print(x.__add__)
# print(help(x))

class Person:
    def __init__(self, name, age):x
        self.name = name
        self.age = age
        self.version = 1

a = Person("Chinmay", 17)
print(a.__dict__)
print(help(Person))
print(help(str))