# def dob(x):
#    return x*2
# print(double(5))

def appl(fx, value):
    return 6 + fx(value)



dob = lambda x: x*2
cube = lambda x: x * x * x
avg = lambda x, y, z: (x+y+z)/3
print(dob(5))
print(cube(5))
print(avg(3,5,10))
# print(appl(cube, /2))
print(appl(lambda x: x * x , 2))