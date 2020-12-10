lst = [int(x) for x in input().split()]

lst.sort()
ans = 0
for i in range(0, 3):
    ans += abs(int(lst[i]-lst[1]))

print(int(ans))
