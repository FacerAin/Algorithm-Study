def convert_t_to_s(timeline):
    minutes = int(timeline[0:2])
    seconds = int(timeline[3:5])
    return minutes * 60 + seconds
    

def convert_s_to_t(seconds):
    mins = str(seconds // 60)
    if len(mins) == 1:
        mins = "0" + mins
    secs = str(seconds % 60)
    if len(secs) == 1:
        secs = "0" + secs
    return mins + ":" + secs

def go_next(secs, video_len):
    results = secs + 10
    if results > video_len:
        results = video_len
    return results

def go_prev(secs, video_len):
    results = secs - 10
    if results < 0:
        results = 0
    return results

def pass_op(secs, op_start, op_end):
    results = secs
    if op_start <= secs <= op_end:
        results = op_end
    return results

def solution(video_len, pos, op_start, op_end, commands):
    answer = ''
    cur_state = convert_t_to_s(pos)
    video_len = convert_t_to_s(video_len)
    op_start = convert_t_to_s(op_start)
    op_end = convert_t_to_s(op_end)
    cur_state = pass_op(cur_state, op_start, op_end)
    for command in commands:
        if command == 'prev':
            cur_state = go_prev(cur_state, video_len)
        elif command == 'next':
            cur_state = go_next(cur_state, video_len)
        cur_state = pass_op(cur_state, op_start, op_end)
    answer = convert_s_to_t(cur_state)
    return answer