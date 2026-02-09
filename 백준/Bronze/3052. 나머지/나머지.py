a = []
for i in range(10):
  b = int(input())
  a.append(b)

c = []
for i in a:
  b = i%42
  c.append(b)

c = set(c)

print(len(c))