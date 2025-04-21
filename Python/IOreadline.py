f = open('readFile.txt','r')
i = 0
while True:
    i = i + 1
    line = f.readline()
    if not line:
        print(line, type(line))
        break
    m1 = line.split(",")[0]
    m1 = int(line.split(",")[0])
    m2 = line.split(",")[1]
    print(f"Marks of Student {i} in maths is {m1}")
    print(f"Marks of Student {i} in maths is {m1*2}")
    print(f"Marks of Student {i} in Physics is {m1}")
    # print(line)
    # if not line:
    #     print(line, type(line))
    #     break
