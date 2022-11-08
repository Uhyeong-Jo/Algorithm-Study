T = int(input())
data = 0
data_list = []
total = 0

if(T/1000 > 0):
    data = int(T/1000)
    data_list.append(data)
    T = T - data*1000
if(T/100 > 0):
    data = int(T/100)
    data_list.append(data)
    T = T - data*100
if(T/10 > 0):
    data = int(T/10)
    data_list.append(data)
    T = T - data*10
data_list.append(T)

for x in range(0, len(data_list)):
    total += data_list[x]

print(total)