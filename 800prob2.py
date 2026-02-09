thatcase= []
cases= int(input())
for case in range(cases):
    n,x = map(int, input().split())
    patrol = list(map(int, input().split()))
    distprev= patrol[0]
    for i in range(n-1):
        dist = patrol[i+1]- patrol[i]
        if dist>distprev:
            distprev= dist

    if (x-patrol[-1])*2> distprev:
        distprev= (x-patrol[-1])*2
    thatcase.append(str(distprev)) #add it at the end of array


print("\n".join(thatcase))