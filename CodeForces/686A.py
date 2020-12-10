n, x = [int(x) for x in input().split()]

count = 0
for i in range(n):
    sign, num = input().split()
    num = int(num)
    if sign == "+":
        x += num
    elif sign == "-":
        if(x < num):
            count += 1
        else:
            x -= num


print(x, count)
