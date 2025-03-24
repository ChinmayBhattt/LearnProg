class Vector:
    def __init__(self, i, j, k):
        self.i = i
        self.j = j
        self.k = k

    def __str__(self):
        return f"{self.i}i + {self.j}j + {self.k}k"
    
    def __add__(self, x):
        return Vector(self.i + x.i, self.j + x.j, self.k + x.k)

v1 = Vector(2,3,5)
print(v1)
v2 = Vector(3,4,7)
print(v2)
print("------------")
print(v1 + v2)
# print(type(v1 + v2))


