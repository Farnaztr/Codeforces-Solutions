t = int(input())
for i in range(t):
    trues = True
    n,k = list(map(int,input().split()))
    s = input()
    for i in range(k):
      count = 0
      d = i
      while d < n:
        if s[d] == '1':
            count += 1
        d += k
      if count % 2 == 1:
         trues = False     


    if trues == False:
     print("NO")
    else :
       print("YES")