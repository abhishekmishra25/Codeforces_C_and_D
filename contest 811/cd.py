n=int(input())
x=[]
for i in range(n):
    a,b=map(int,input().split())
    x.append([a,b])
k=-1
for i in range(len(x)):
    d=x[i]
    for j in range(i+1,len(x)):
        d1=x[j]
        if(d==d1[-1::-1]):
             k=1
             break
    if(k==1):
         print(0)
         break
if k==-1:
     print(2)