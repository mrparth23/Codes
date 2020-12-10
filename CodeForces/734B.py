k2, k3, k5, k6 = [int(x) for x in input().split()]

min1 = min(k2, k5, k6)

if min1 == k2:
    ans = 256 * min1
else:
    ans = (256 * min1) + (32 * min(k2-min1, k3))


print(ans)
