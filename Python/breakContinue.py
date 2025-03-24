n = int(input("Enter The Table Number: "))

for i in range(1, 12):
    print(n,"X", i, "=",n * i)
    if(i==10):
        break

# i = 0

# while(True):
#     print(i)
#     i = i + 1
#     if(i%100 == 0):
#        break