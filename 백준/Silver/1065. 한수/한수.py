num = int(input())
array = list(range(1,num+1))
hansu = 0

for i in array:
  if i <= 99:
    hansu += 1
  
  else:
    n = list(map(int, str(i)))
    if n[1] - n[0] == n[2] - n[1]:
        hansu += 1

print(hansu)