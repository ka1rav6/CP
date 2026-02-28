t = int(input())
for case in range(t):
    n = int(input())
    s = input().strip()
    
    stack = []
    for c in s:
        if stack and stack[-1] == c:
            stack.pop()
        else:
            stack.append(c)
    
    if not stack:
        print("YES")
    else:
        print("NO")