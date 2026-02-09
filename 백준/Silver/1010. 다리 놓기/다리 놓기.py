def factorial(num):
  temp = 1;
  for i in range (1,num+1):
    temp = temp * i
  return temp

T = int(input()) # 테스트 케이스
for _ in range (T):
  N, M = map(int, input().split())
  Combination = (int)(factorial(M)/(factorial(N) * factorial(M-N)))
  print(Combination)