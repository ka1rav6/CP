cases= int(input())
ans=[]
for case in range(cases):
    num= int(input())
    lst= list(map(int, input().split()))
    if sum(lst)%2==0:
        ans.append("YES")
    else:
        ans.append("NO")
print("\n".join(ans)) 
