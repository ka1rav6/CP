cases= int(input())
ans_stream= []
for case in range(cases):
    num= int(input())
    if num%3==0:
        ans_stream.append("Second")
    else:
        ans_stream.append("First")
print("\n".join(ans_stream))
