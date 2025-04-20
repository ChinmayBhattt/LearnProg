# ------- Reading File -------

# a = open('myFile.txt','r')
# text = a.read()
# print(text)
# a.close()

# ------- Writing File -------

# b = open('myFile.txt','w')
# t = b.write("My name is chinmay")
# print(t)
# b.close()

# ------- Append File -------

# c = open('myFile.txt','a')
# c.write("My name is chinmay ")
# c.close()


# ------- with: auto close() -------

# t =  open('myFile.txt','a')
# with open('myFile.txt','a'):
#      t.write("My name is chinmay ")

with open('myFile.txt','a') as t:
     t.write("My name is chinmay ")




