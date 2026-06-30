a, b, c = map(float, input().split())

a_tomon = 0
while a >= c:
    a-=c
    a_tomon += 1

b_tomon = 0
while b >= c:
    b -= c
    b_tomon += 1

soni = 0
while b_tomon > 0:
    soni += a_tomon
    b_tomon -= 1

print(soni)
