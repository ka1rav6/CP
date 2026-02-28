t = int(input())
for _ in range(t):
    n, x, y = map(int, input().split())
    p = list(map(int, input().split()))
    
    A = p[:x]
    B = p[x:y]
    C = p[y:]
    
    Q = A + C
    arr = Q + B
    
    # smallest rotation = rotation starting at 1
    pos = arr.index(1)
    result = arr[pos:] + arr[:pos]
    
    print(*result)