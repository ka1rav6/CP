cases= int(input())
answer= []
for case in range(cases):
    teams= int(input())
    effs= list(map(int, input().split()))
    answer.append(0-(sum(effs)))
answer= [str(i) for i in answer]
print("\n".join(answer))