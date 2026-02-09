line = int(input())
money =[]
for i in range(line):
  m = int(input())
  if m == 0:
    del money[-1]
  else:
    money.append(m)

sum = 0
for i in money:
  sum += i

print(sum)