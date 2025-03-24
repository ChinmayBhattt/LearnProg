class GetSet:
    def __init__(self, v1):
        self.value = v1
    
    def show(self):
        print(f"Value is {self.value}")
    
    @property
    def mul(self):
        return 10 * self.value
    @mul.setter
    def mul(self, newValue):
        self.value = newValue/10

a = GetSet(5)
a.mul = 50
print(a.mul)
a.show()