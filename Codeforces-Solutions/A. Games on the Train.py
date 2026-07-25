t = int(input())
for i in range(t):
    n = int(input())
    x = []
    h = list(map(int,input().split()))
    h_result = max(h) + 1
    for j in range(len(h)):
     
         x.append(h_result - h[j])
      
    answer = max(x)
    print(answer)  