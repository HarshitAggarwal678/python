for i in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=[]
    for z in a:
        if(abs(z-1)>abs(z-m)):
            b.append(1)
        else:
            b.append(m)
    sum=0
    for k in range(n):
        sum=sum+abs(a[k]-b[k])
    print(sum)
    
