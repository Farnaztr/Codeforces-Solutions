t = int(input())
for i in range(t):
    count = 0
    f= False
    k = int(input()) 
    c_i = list(map(int,input().split())) 
    for j in c_i:
       if j >=2:
         count += 1
       if j >= 3:
         f = True
    if count >= 2 or f == True:
      print("YES")
    else:
      print("NO")
