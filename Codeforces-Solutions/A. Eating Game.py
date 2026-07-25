t = int(input())
for i in range(t):
    count = 0
    n = int(input())
    a = list(map(int,input().split()))
    arr = max(a)
    for i in a:
       if i == arr:
         count += 1
    print(count)