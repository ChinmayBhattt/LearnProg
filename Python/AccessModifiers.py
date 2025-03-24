'''
#PRIVATE CLASS
__Variable -> double underscore means Private variable
'''
class Employee:
    def __init__(self):
        self.__name = "Chinmay"

    def show(self):
        print(self.__name)


a = Employee()
a.show()
# print(a.__name) # Not access Because of this variable is PRIVATE
# print(a.__name) #Cannat be acces
print(a._Employee__name) #_className__variable
# a.n1 = 5
# print(a.__dir__())
