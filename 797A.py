n,k= map(int, (input().split()))
ans=[]
i=2
def is_divisible(n,i):
    temp= (str(n/i)).split(".")
    temp= [int(l) for l in temp]
    if temp[-1]==0:
        return True
    return False
while i<=(n):
    if k==1:
        ans.append(n)
        break
    if i!=n:
        if is_divisible(n,i):
            n//=i
            if n!=1:
                ans.append(int(i))
                ans.append(int(n))
            i+=1
        else:
            i+=1
            continue
        if len(ans)==k:
            break
        else:
            i=2
            ans.pop()
    else:
        ans.append(n)
        break
if len(ans)!=k:
    print(-1)
    exit()
ans= [str(l) for l in ans]
print(" ".join(ans)) 


