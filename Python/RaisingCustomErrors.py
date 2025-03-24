# a = int(input("Enter The Number: "))

# if (a>5 or a<9):
#    raise ValueError("This is a ValueErr")

q = input("Write a quit Word: ")

if(q=="quit" or q=="Quit" or q=="QUIT" ):
    print("This is Right")
else:
    raise ValueError("You are not enter the quit word, Error(!)")

# a = int(input("Enter Value between 5 and 9 : "))

# if(a<5 or a>9):
#    raise ValueError("Value should be between 5 and 9")

a = int(input("Enter Value between 5 and 9 : "))

if(a>4 and a<8): #5,6,7
    raise ValueError("Value should be between 5 and 9")
else:
    print("no")
  

