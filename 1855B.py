cases = int(input())
ans = []
import math
def is_div(n, i):
    if i == 0:
        return False
    return n % i == 0

for _ in range(cases):
    num = int(input())
    temp_len = 0
    prev_lens = []

    for i in range(1, int(math.sqrt(num))): 
        if is_div(num, i):
            temp_len += 1
        else:
            prev_lens.append(temp_len)
            temp_len = 0

    if prev_lens == []:
        ans.append(1)
    else:
        ans.append(max(prev_lens))

for a in ans:
    print(a)