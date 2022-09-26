for i in range(int(input())):
    n=int(input())
    suma=0
    sumb=0
    m=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    for i in a:
        suma=suma+i
    for i in b:
        sumb=sumb+i
    if(suma<sumb):
        print("A")
    elif(suma>sumb):
        print("B")
    else:
        print("Any")