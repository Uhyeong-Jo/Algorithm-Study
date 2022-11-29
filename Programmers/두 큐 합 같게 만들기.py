# two pointer algorithm

def solution(queue1, queue2):
    queue = queue1 + queue2
    count = 0
    check = False

    start = -1
    end = len(queue2) - 1
    
    sub_total = sum(queue)/2
    qsum = sum(queue1)

    while 1:
        if(qsum < sub_total):
            end += 1
            if end == len(queue):
                break
            qsum += queue[end]
            count += 1
        elif(qsum > sub_total):
            start += 1
            if start == len(queue):
                break
            qsum -= queue[start]
            count += 1
        else:
            check = True
            break


    if(check == True):
        return count
    else:
        count = -1
        return count



queue1 = [1, 2, 1, 2]
queue2 = [1, 10, 1, 2]

print(solution(queue1, queue2))
