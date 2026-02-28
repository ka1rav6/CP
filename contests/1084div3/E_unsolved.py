t = int(input())
for case in range(t):
    n = int(input())
    lst = list(map(int, input().split()))
    increasing = False
    for i in range(1, n):
        if lst[i-1]<lst[i]:
            increasing = True
            break
    if increasing:
        print("Bob")
    else:
        print("Alice")