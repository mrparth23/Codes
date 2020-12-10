n, s = [int(x) for x in input().split()]

ans = 0
ans += s//n
if(s % n is not 0):
    ans += 1

print(ans)
