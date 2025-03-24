# class Number:
#     def __init__(self,n1 ,n2):
#         self.num1 = n1
#         self.num2 = n2
    
#     def set(self):
#         print(self.num1 + self.num2 )

# n = Number(5,5)
# n.set()

class Person:

    def __init__(self, n, o):
        self.name = n
        self.occ = o

    def info(self):
        print(f"{self.name} is a {self.occ}")

a = Person("Nehal", "Doctor")
a.info()
b = Person("Chinmay", "Enginner")
b.info()

# b = Person() 
# c = Person()

# a.name = "ds"
# a.infro()
    