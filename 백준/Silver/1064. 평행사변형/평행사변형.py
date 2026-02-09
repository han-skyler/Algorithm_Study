# 한 직선안에 있는지 판별
def funx(x1,y1,x2,y2,x3,y3):
    if (y2-y1)*(x3-x1)==(y3-y1)*(x2-x1):
      y = -1.0
      print(y)
      exit(0)

Ax,Ay,Bx,By,Cx,Cy = map(int, input().split()) # 세 점의 좌표를 받는다
fun = funx(Ax,Ay,Bx,By,Cx,Cy)

# 한 변의 길이
AB = ((Ax-Bx)**2 + (Ay-By)**2)**0.5 
AC = ((Ax-Cx)**2 + (Ay-Cy)**2)**0.5
BC = ((Bx-Cx)**2 + (By-Cy)**2)**0.5

# 둘레의 길이를 리스트에 저장
Round = []
Round.append(2*(AB+BC))
Round.append(2*(BC+AC))
Round.append(2*(AC+AB))

# 둘레의 최대값 - 최소값
result = max(Round) - min(Round)

print(result)
