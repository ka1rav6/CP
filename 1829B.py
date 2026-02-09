cases= int(input())
ans=[]
for case in range(cases):
    length= int(input())
    x= list(map(int, input().split()))
    count=0
    countprev=0
    for i in x:
        if i==0:
            count+=1
        else:
            count=0
        if count>countprev:
            countprev= count
    ans.append(countprev)
ans= [str(l) for l in ans]
print("\n".join(ans))
