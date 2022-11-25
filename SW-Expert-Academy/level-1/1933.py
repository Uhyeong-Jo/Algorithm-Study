T = int(input())

for x in range(1, T+1):
    if(T % x == 0):
        print(x, end=" ")
