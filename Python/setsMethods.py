# s1 = {1,2,3,4}
# s2 = {4,5,6}

# print(s1.union(s2)) 
# s1.update(s2)
# print(s1, s2)

# cities1 = {"Rajasthan", "Gujrat", "UP","HP"}
# cities2 = {"Kolkatta", "Gujrat", "UP","Bihar"}

# cities1 = {"Rajasthan","HP"} 
# cities2 = {"Kolkatta", "Gujrat", "UP","Bihar"}

# cities1 = {"Kolkatta", "Gujrat", "UP","Bihar","HP","Rajasthan"}
# cities2 = {"Rajasthan","HP"} 

# cities1 = {"Kolkatta", "Gujrat", "UP","Bihar","HP","Rajasthan"}
# cities2 = {"Rajasthan","HP"}  

# cities3 = {"Rajasthan","HP"}  
# cities3.add("Gujrat")
# cities3.remove("HP")
# # cities3.remove("HP2") #show an error because they cant be present in cities3
# cities3.discard("HP2")

# print(cities3)
# print(cities1.intersection(cities2))
# print(cities1.difference(cities2))
# print(cities1.isdisjoint(cities2)) #not any intersection
# print(cities1.issuperset(cities2))
# print(cities2.issubset(cities1))

# cities1 = {"Rajasthan", "Gujrat","Delhi"}
# c = cities1.pop()
# print(c)

cities = {"Rajasthan", "Gujrat","Delhi"}
# cities.clear()
# del cities
# print(cities)

if "Gujrat" in cities:
    print("Yes")
else:
    print("No")
