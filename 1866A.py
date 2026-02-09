num= int(input())
array= list(map(int, input().split()))
array= [abs(i) for i in array]
print(min(array))