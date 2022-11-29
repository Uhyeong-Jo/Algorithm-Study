def solution(survey, choices):
    
    list = [["R", 0],["T", 0],["C", 0],["F", 0],["J", 0],["M", 0],["A", 0],["N", 0]]
    
    answer = ''
    
    for x in range(0, len(choices)):
        if(choices[x] < 4):
            for k in range(0, 8):
                if(survey[x][0] == list[k][0]):
                    list[k][1] += (4-choices[x])
        elif(choices[x] > 4):
            for k in range(0, 8):
                if(survey[x][1] == list[k][0]):
                    list[k][1] += (choices[x]-4)
        else:
            for k in range(0, 8):
                if(survey[x][0] == list[k][0]):
                    list[k][1] += 0
                    
    for x in range(0, 8, 2):
        if(x == 0):
            if(list[x][1] > list[x+1][1]):
                answer += list[x][0]
            elif(list[x][1] < list[x+1][1]):
                answer += list[x+1][0]
            else:
                answer += list[x][0]
                
        if(x == 2):
            if(list[x][1] > list[x+1][1]):
                answer += list[x][0]
            elif(list[x][1] < list[x+1][1]):
                answer += list[x+1][0]
            else:
                answer += list[x][0]
            
        if(x == 4):
            if(list[x][1] > list[x+1][1]):
                answer += list[x][0]
            elif(list[x][1] < list[x+1][1]):
                answer += list[x+1][0]
            else:
                answer += list[x][0]
    
        if(x == 6):
            if(list[x][1] > list[x+1][1]):
                answer += list[x][0]
            elif(list[x][1] < list[x+1][1]):
                answer += list[x+1][0]
            else:
                answer += list[x][0]
    
    return answer