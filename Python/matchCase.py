val = int(input("Enter The Value: "))

match val:
  case _ if(val<=13):
    print("ok")
  case _ if(val==44):
    print("no")
  case _:
    print("fsd")