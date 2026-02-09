cases= int(input())
ans=[]
for case in range(cases):
    num= int(input())
    lst= list(map(int, input().split()))
    total2= lst.count(2)
    if total2%2==0:
        for i in range(num):
            if lst[:i+1].count(2)==total2/2:
                ans.append(i+1)
                break
    else:
            ans.append(-1)
ans= [str(l) for l in ans]
print("\n".join(ans))