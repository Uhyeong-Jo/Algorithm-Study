T = int(input())
mid = int(T/2)

data = list(map(int, input().split()))
data.sort()
print("%d" %data[mid])
