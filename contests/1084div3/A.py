t = int(input())
while (t):
    n = int(input())
    food = list(map(int, input().split()))
    i = max(food)
    count =0
    for c in food:
        if c== i:
            count+=1
    print(count)
    t -=1