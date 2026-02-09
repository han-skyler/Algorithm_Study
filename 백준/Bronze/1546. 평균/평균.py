n = int(input())
num_list = list(map(int, input().split()))

avg = 0
for i in range(n):
    avg += num_list[i] / max(num_list) * 100
print(avg / n)