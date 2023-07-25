weight = int(input())
if(weight % 5 == 0):
      print((int)(weight / 5))
elif((weight - 3) % 5 == 0 and weight > 3):
      print((int)((weight - 3) / 5 + 1))
elif((weight - 6) % 5 == 0 and weight > 6):
      print((int)((weight - 6) / 5 + 2))
elif((weight - 9) % 5 == 0 and weight > 9):
      print((int)((weight - 9) / 5 + 3))
elif((weight - 12) % 5 == 0 and weight > 12):
      print((int)((weight - 12) / 5 + 4))
elif(weight % 3 == 0):
      print((int)(weight / 3))
else:
      print(-1)
