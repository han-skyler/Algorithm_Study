n = int(input())

def result(tmp):
  question = []
  for i in range (len(tmp)+1):
    question.append(tmp[i:i+1])
  value = 0
  score = 0
  for i in range (len(question)):
    if question[i] == 'O':
      value += 1
      score += value
    else:
      value = 0

  print(score)

for i in range(n):
  tmp = input()
  result(tmp)