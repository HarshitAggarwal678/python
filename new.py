a=int(input())
b=[]
for i in range(a):
    b.append(list(map(int,input().split())))
for i in b:
    if(i[0]==i[1]):
        print("yes")
    elif(i[0]==i[2]):
        print("yes")
    elif(i[0]==i[3]):
        print("yes")
    elif(i[0]==i[2]+i[1]):
        print("yes")
    elif(i[0]==i[1]+i[3]):
        print("yes")
    elif(i[0]==i[2]+i[3]):
        print("yes")
    else:
        print("no")
