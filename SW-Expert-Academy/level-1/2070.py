T = int(input())

data = 0
data_list = []
result_list = []


for x in range(0, T):
    data = list(map(int, input().split()))
    data_list.append(data)
    
    if(data_list[x][0] > data_list[x][1]):
        result = ">"
        result_list.append(result)
    elif(data_list[x][0] < data_list[x][1]):
        result = "<"
        result_list.append(result)
    else:
        result = "="
        result_list.append(result)

for x in range(0, T):
    print("#%d %s" %(x+1, result_list[x]))
