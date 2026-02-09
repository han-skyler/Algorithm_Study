def box(i, j, k):
  for x in range(i-1,j):
    list[x] = k

n,m = map(int,input().split())
list = [0 for i in range(n)]
for _ in range (m):
  i,j,k = map(int, input().split())
  box(i,j,k)

for i in list:
  print(i,end=" ")