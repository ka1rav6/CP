t = int(input())
for _ in range(t):
    n = int(input())
    temp = str(n)
    cntnumbers =0
    for temp in range(1, n+1):
        temp = str(temp)
        count =0
        for i in temp:
            if (i != '0'):
                count +=1
        if count ==1:
            cntnumbers+=1
    print(cntnumbers)
# TLE ERROR