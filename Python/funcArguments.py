# default Arguments--------

def addition(a=3, b=1):
    add = (a+b)
    print(add)
    
# addition(5,6) #more level than parameters

# Requred Arguments--------

def addition(a, b=1):
    add = (a+b)
    print(add)
    
# addition(a=5) 
# addition(b=4) #Show error

def name(firstName, lastName):
    print("\n",firstName,"\n",lastName)


# name("piu","Pandya")

# a = (12,32)
# print(a,type(a))
 
def avg(*number):
    print(type(number))
    sum=0
    for i in number:
        sum = sum + i
        print(sum/len(number))

def avg(**number):
    print(type(number))



# avg()
# avg(4,4,345,345)
