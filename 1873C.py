cases= int(input())
answer=[]
for case in range(cases):
    score= 0
    for i in range(10):
        count= 0
        subcount=0
        stream = input().lower()
        for n in stream:
            if n== "x":
                count+=1
        if i==0 or i==9:
            score+= count
        elif i==1 or i==8:
            if stream[0]=="x" and stream[-1]=="x":
                score+= 2*1
            elif stream[0]=="x" and stream[-1]!="x":
                score+=1
            elif stream[0]!="x" and stream[-1]=="x":
                score+=1
            if "x" in stream[1:9]:
                for l in stream[1:9]:
                    if l=="x":
                        subcount+=1
                score+= 2*subcount
        elif i== 2 or i==7:
            if stream[0]=="x" and stream[-1]=="x":
                score+= 2*1
            elif stream[0]=="x" and stream[-1]!="x":
                score+=1
            elif stream[0]!="x" and stream[-1]=="x":
                score+=1
            if stream[1]=="x" and stream[-2]=="x":
                score+= 2*2
            elif stream[1]=="x" and stream[-2]!="x":
                score+=2
            elif stream[1]!="x" and stream[-2]=="x":
                score+=2
            if "x" in stream[2:9-1]:
                for l in stream[2:9-1]:
                    if l=="x":
                        subcount+=1
                score+= 3*subcount
        elif i ==3 or i==6:
            if stream[0]=="x" and stream[-1]=="x":
                score+= 2*1
            elif stream[0]=="x" and stream[-1]!="x":
                score+=1
            elif stream[0]!="x" and stream[-1]=="x":
                score+=1
            if stream[1]=="x" and stream[-2]=="x":
                score+= 2*2
            elif stream[1]=="x" and stream[-2]!="x":
                score+=2
            elif stream[1]!="x" and stream[-2]=="x":
                score+=2
            if stream[2]=="x" and stream[-3]=="x":
                score+= 3*2
            elif stream[2]=="x" and stream[-3]!="x":
                score+=3
            elif stream[2]!="x" and stream[-3]=="x":
                score+=3 
            if "x" in stream[3:9-2]:
                for l in stream[3:9-2]:
                    if l=="x":
                        subcount+=1
                score+= 4*subcount
        elif i==4 or i==5:
            if stream[0]=="x" and stream[-1]=="x":
                score+= 2*1
            elif stream[0]=="x" and stream[-1]!="x":
                score+=1
            elif stream[0]!="x" and stream[-1]=="x":
                score+=1
            if stream[1]=="x" and stream[-2]=="x":
                score+= 2*2
            elif stream[1]=="x" and stream[-2]!="x":
                score+=2
            elif stream[1]!="x" and stream[-2]=="x":
                score+=2
            if stream[2]=="x" and stream[-3]=="x":
                score+= 3*2
            elif stream[2]=="x" and stream[-3]!="x":
                score+=3
            elif stream[2]!="x" and stream[-3]=="x":
                score+=3 
            if stream[3]=="x" and stream[-4]=="x":
                score+= 4*2
            elif stream[3]=="x" and stream[-4]!="x":
                score+=4
            elif stream[3]!="x" and stream[-4]=="x":
                score+=4
            if "x" in stream[4:9-3]:
                for l in stream[4:9-3]:
                    if l=="x":
                        subcount+=1
                score+= 5*subcount               
    answer.append(score)
answer= [str(x) for x in answer]
print("\n".join(answer))