def func():
    try:
        l = [1,2,3,4,5]
        i = int(input("Enter The Index: "))
        print(l[i])
        return 1
    except:
        print("Some error occured")
        return 0

    finally:
        print("I am Always Exucuted")
    # print("I am Always Exucuted")

x = func()
print(x)


#     l = [1,3,4,2,1,]
#     i = int(input("Enter The Number: "))
#     print(l[i])
# except:
#     print("error")

# finally:
#     print("Always Exucute")
