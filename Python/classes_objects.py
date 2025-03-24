class Person:
    name = "Chinmay"
    occupation = "Softerware Devloper"
    networth = 50000

    def info(self):
        print(f"{self.name} is a {self.occupation} and {self.networth}")


# print(Person().name, Person().occupation, Person().networth)
a = Person()
b = Person()
a.info()
# print(a.name, a.occupation, a.networth)

b.name = "Rohan"
b.occupation = "A.I Devloper"
b.networth = 10000

print(b.name, b.occupation, b.networth)

#------------------------------------#-------------------------------

# class BirthCertificate:

#     def nameAndSurname(self):
#         name = input("Enter Your Name: ")
#         surname = input("Enter Your Surname: ")
#         print("ex: 1jan2006 | dateMonthYear \n NO SPACE Between date-Month-Year")
#         dob = input("Enter Your Date of Birth: ")
        
#         if(name=="Chinmay" or name=="chinmay" or name=="CHINMAY"):
#             print(f"Name: {name}")
#         else: 
#             print("You are Enter Wrong Name in Birth Certificate")

#         if(surname=="Bhatt" or surname=="BHATT" or surname=="bhatt"):
#             print(f"Surname: {surname}")
#         else: 
#             print("You are Enter Wrong Surname in Birth Certificate")

#         if(dob=="6jan2006" or dob=="6JAN2006"):
#             print(f"Date of Birth: {dob}")
#         else: 
#             print("You are Enter Wrong Birth-Date in Birth Certificate")

# print("----------------BIRTH CERTIFICATE----------------")
# a = BirthCertificate()
# a.nameAndSurname()
