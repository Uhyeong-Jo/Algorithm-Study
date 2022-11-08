T = int(input())

idata = ""

def check_month(data):
    if(int(data[4]+data[5]) >= 1 or int(data[4]+data[5]) <= 12):
        return True
    else:
        return False


def check_day(data):
    if(int(data[4]+data[5]) == 1 or int(data[4]+data[5]) == 3 or int(data[4]+data[5]) == 5
    or int(data[4]+data[5]) == 7 or int(data[4]+data[5]) == 8 or int(data[4]+data[5]) == 10
    or int(data[4]+data[5]) == 12):
        if(int(data[6]+data[7]) >= 1 and int(data[6]+data[7]) <= 31):
            return True
        else:
            return False
    elif(int(data[4]+data[5]) == 4 or int(data[4]+data[5]) == 6 or int(data[4]+data[5]) == 9
    or int(data[4]+data[5]) == 11):
        if(int(data[6]+data[7]) >= 1 and int(data[6]+data[7]) <= 30):
            return True
        else:
            return False
    elif(int(data[4]+data[5]) == 2):
        if(int(data[6]+data[7]) >= 1 and int(data[6]+data[7]) <= 28):
            return True
        else:
            return False
    else:
        return False


for x in range(0, T):
    idata = input()

    data_year = idata[0] + idata[1] + idata[2] + idata[3]
    data_month = idata[4] + idata[5]
    data_day = idata[6] + idata[7]

    if(check_month(idata) == True and check_day(idata) == True):
        print("#%d %s/%s/%s" %(x+1, data_year, data_month, data_day))
    else:
        print("#%d -1" %(x+1))