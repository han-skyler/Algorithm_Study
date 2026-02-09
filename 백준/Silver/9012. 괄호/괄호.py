n = int(input())
for i in range(n):
  v = input()
  vps = list(v)
  result = 0
  for i in vps:
    if i == '(':
      result += 1
    elif i == ')':
      result -= 1

    if result < 0:
      print("NO")
      break
  if result == 0:
    print("YES")
  elif result > 0 :
    print("NO")