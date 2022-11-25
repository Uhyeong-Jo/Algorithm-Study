T = int(input())


for x in range(0, T):
    data = list(map(int, input().split()))
    a1 = data[0] / data[1]
    a2 = data[0] % data[1]
    print("#%d %d %d" %(x+1, a1, a2))
    