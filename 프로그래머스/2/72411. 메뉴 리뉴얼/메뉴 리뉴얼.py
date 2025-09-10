from itertools import combinations
from collections import Counter, defaultdict

def solution(orders, course):
    answer = []
    
    possible_menus = defaultdict(list)
    for order in orders:
        sort_order = sorted(order)
        for num in course:
            if len(order) >= num:
                comb_menu = combinations(sort_order, num)
                possible_menus[num].extend(list(comb_menu))
    for num in course:
        if num in possible_menus.keys():
            counter = Counter(possible_menus[num])
            max_cnt = max(counter.values())
            for key, value in counter.items():
                if value == max_cnt and value >= 2:
                    answer.append(''.join(list(key)))
    
    answer.sort()
    return answer