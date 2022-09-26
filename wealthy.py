for i in range(int(input())):   
    x,a,y,b,p,q=map(int,input().split())
    if(x==0):
        print("Increase")
    else:
        d=a/x
        nd=p/x
        if(d>nd):
            print("Decreased")
        else:
            print("Increased")
        
    if(y==0):
        print("Increase")
    else:
        z=b/y
        nz=q/y
        if(z>nz):
            print("Decreased")
        else:
            print("Increased")