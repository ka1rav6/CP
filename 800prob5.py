cases= int(input())
for case in range(cases):
    n = int(input())
    perm = [int(i) for i in input().split()]
    p2= perm.copy()
    count,i=0,0
    while count<=30:
        if perm[i+1]>perm[i]:
            i+=1
            count+=1
            continue
        else:
            perm[i],perm[i+1]= perm[i+1],perm[i]
            count+=1
            i=0
        if perm== sorted(p2):
            print("YES")
            break
    if count>=30:
        print("NO")
    
