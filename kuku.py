for i in range(int(input())):
    n,q=map(int,input().split())
    #q=int(input())
    an=list(map(int,input().split()))
    for i in an:
        if(i>q):
            print(0,end="")
        elif(i==2 and q==2):
            print(0,end="")
            q=q+1
        else:
             print(1,end="")
             q=q+1
             
    print()
