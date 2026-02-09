def box(i,j):
  tmp = list[i]
  list[i]=list[j]
  list[j]=tmp

n,m = map(int,input().split())
list = [0 for i in range(n)]
for i in range(n):
  list[i]=i+1

for _ in range (m):
  i,j = map(int, input().split())
  box(i-1,j-1)

for i in list:
  print(i,end=" ")