n,k=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=[]
while(z!=n):
    for i in range(n/2):
        if(i not in c):
            if(a[i]<=k):
                k=k+b[i]
                c.append(i)
    z=z+1
            
print(k)
