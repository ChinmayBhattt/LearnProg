try:
    n = int(input("Enter The Number: "))
    a = [1,2,3]
    print(a[n])
except ValueError:
    print("Your input is not an integer")
except IndexError:
    print("Index Error")

# a = input("Enter Table Number: ")
# print("\n")
# try:

#     for i in range(1, 11):
#         print(f"{int(a)} X {i} = {int(a)*i}")
# except:
#     print("Sorry For this error")

# a = 0
# while(a<=5):
#     print(a)
#     a = a + 1
# print("\n")
# print("Some lines of code")
# print("end of program")

#-------------------------------

# a = (input("Enter The Number: "))

# try:
#     for i in range(1, 11):
#         print(f"{int(a)} X {i} {int(a)*i}")
# except:
# # except Exception as e:
#     print("Invalid Input")
#     # print(e)
# print("Code Succesfull Run")

# try:
#     num = int(input("Enter an integer: "))
#     a = [6, 3]
#     print(a[num])
# except ValueError:
#     print("Number entered is not an integer.")
    
# except IndexError:
#   print("Index Error")

  
#------------Simple------------

# try:
#     a = int(input(": "))
#     print(a*a)
# except:
#     print("Error 404")

