'''
구현 해야 할 것

#1 timelogs -> 분 단위로 바꾸기 (710 -> 7시 10분 -> 7시 * 60 + 10) => 그렇다면 출근 인정 시간을 구할 수 있다
#3 startday rotate 함수 (6,7에서는 Pass하도록)
'''


def convert_minutes(timelog):
    hours = timelog//100
    minutes = timelog%100
    ans = (hours*60 + minutes)
    # if ans >= (23*60 + 50):
    #     ans = 0
    return ans
    

def solution(schedules, timelogs, startday):
    answer = 0
    
    num = len(schedules)
    pass_list = [0] * num

    for i in range(num):
        target_time = (convert_minutes(schedules[i]) + 10)
        flag = True
        print("------------")
        for j in range(7):
            day = (j + startday - 1) % 7
            time_log = timelogs[i][j]
            time = convert_minutes(time_log)
            print(day)
            print(time)
            if day in [5,6]:
                continue
            if  time <= target_time:
                continue
            else:
                flag = False
                print("break", time)
                break
        if flag:
            pass_list[i] = 1
    print(pass_list)
    answer = sum(pass_list)
    return answer