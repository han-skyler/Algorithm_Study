numbers = set(range(1,10000))
remove_set = set()

for num in numbers:
  for n in str(num):
    temp = num
    num+=int(n)
    temp += num
  remove_set.add(num)

self_num = numbers - remove_set
for self_n in sorted(self_num):
  print(self_n)