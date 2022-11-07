T = int(input())

data = 0
data_list = []
max = 0
max_list = []

for x in range(0, T):
    data = list(map(int, input().split()))
    data_list.append(data)

    for j in range(0, 10):
        if(max <= data_list[x][j]):
            max = data_list[x][j]
    max_list.append(max)
    max = 0

for x in range(0, T):
    print("#%d %d" %(x+1, max_list[x]))