marks = [12,32,99,6,1,44,77]

# index = 0
# for i in marks:
#     print(i)
#     if(index == 2):
#         print("Genius")
#     # index = index + 1
#     index+=1

for index, i in enumerate(marks,start=1):
    print(i)
    if(index == 2):
        print("Genius")
