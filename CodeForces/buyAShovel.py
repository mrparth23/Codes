k, r = [int(x) for x in input().split()]
k = int(k)
r = int(r)

for i in range(1, 11):
    if ((k * i) % 10 == r) or ((k * i) % 10 == 0):
        print(i)
        break
