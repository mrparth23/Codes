s = input()
for i in range(0, len(s)):
    if (s[i] != "A" or s[i] != "Q"):
        s.replace(s[i], "")

print(s)
