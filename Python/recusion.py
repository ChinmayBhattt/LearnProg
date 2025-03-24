def factorial(n):
    if(n==0 or n==1):
        return 1
    else:
        return n * factorial(n-1)
    

def fibonacci(n):
    if(n==0 or n==1):
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)
    
a = int(input("Enter The Number: "))
print(factorial(a))

a = int(input("Enter The Number: "))
print(fibonacci(a))
 