cases= int(input())
flst= []
for case in range(cases):
    n,m = map(int, input().split())
    x= input() 
    s= input() 
    count=0
    found= False
    while count<=10:
        if s in x:
            flst.append(count)
            found= True
            break
        else:
            x+=x
            count+=1
            found= False
    if found== False:
        flst.append("-1")
flst= [str(i) for i in flst]
print("\n".join(flst))