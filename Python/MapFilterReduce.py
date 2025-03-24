#---------------MAP---------------
# def cube(x):
#     return x*x*x

# print(cube(5))

l = [1,2,3,4,5,6]

# newl = []
# for item in l:
#     newl.append(cube(item))

# newl = list(map(cube,l))
# print(newl)

# newl = list(map(lambda x:  x*x*x,l))
# print(newl)

#---------------Filter---------------

# def filttter_function(a):
#     return a>3

# nl = list(filter(filttter_function, l))
# print(nl)

#---------------Reduce---------------
from functools import reduce

def mysum(x,y):
    return x + y

num = [1,2,3,4,5]
    # [1,2] # 3
    # [3,3] # 6
    # [6,4] # 10
    # [10,5] # 15

# sum = reduce(lambda x,y: x+y, num)
# print(sum)
sum = reduce(mysum, num)
print(sum)
