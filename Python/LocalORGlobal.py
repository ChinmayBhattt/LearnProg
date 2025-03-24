x = 5
print(x)

def chk():
    global x
    x = 9
    print(x)
    # y = 4
    # print(y)
    print(f"The Local x is {x}")
    

chk()
# print(y) # y is private property of function
print(f"The Global x is {x}")