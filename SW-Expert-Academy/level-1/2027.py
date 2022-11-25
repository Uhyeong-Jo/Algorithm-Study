s = ["+","+","+","+","+"]
n = 0

for x in range (0, 5):
    s[n] = "#"
    for j in range(0, 5):
        print(s[j], end="")
    print()
    for k in range (0, 5):
        s[x] = "+"
    n += 1