class Shape:

    def __init__(self, x, y):
        self.x = x
        self.y = y

    def area(self):
        return self.x * self.y


class Circle(Shape):

    def __init__(self, radius):
        self.radius = radius
        super().__init__(radius, radius)

    def area(self): # pi r^2
        return 3.14 * super().area()
    
rec = Shape(3,4)
c = Circle(5)
print(rec.area())
print(c.area())