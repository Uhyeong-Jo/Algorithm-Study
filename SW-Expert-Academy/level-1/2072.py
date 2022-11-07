case = int(input())

input_data = []
temp = []
total = 0
total_list = []

for x in range(0, case):
    temp = list(map(int, input().split()))
    input_data.append(temp)
    for j in range(0, 10):
        if(input_data[x][j]%2 == 1):
            total += input_data[x][j]
    total_list.append(total)
    total = 0

for x in range(0, case):
    print("# %d %d" %(x+1, total_list[x]))