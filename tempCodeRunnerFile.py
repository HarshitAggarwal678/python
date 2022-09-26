n,k=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=[]
for i in range(n):
     if(a[i]<=k):
        if (i not in c):
            k+=b[i]
            c.append(i)