input_num = int(input())
line = 0
end = 0

while input_num > end :
  line += 1
  end += line

value = end - input_num

if line % 2 == 0:
  top = line - value
  bottom = value + 1
else:
  top = value + 1
  bottom = line - value

print("%d/%d"%(top, bottom))
