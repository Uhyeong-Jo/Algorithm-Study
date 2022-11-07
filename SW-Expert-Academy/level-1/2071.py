T = int(input())

data = []
data_list = []
total = 0
total_list = []
avg = 0.0
avg_list = []

for x in range(0, T):
    data = list(map(int, input().split()))
    data_list.append(data)

    for j in range(0, 10):
        total += data_list[x][j]
    
    total_list.append(total)

    avg = float(total) / 10.0
    avg_list.append(avg)

    total = 0
    avg = 0.0

for x in range(0, T):
    print("#%d %d" %(x+1, round(avg_list[x])))
