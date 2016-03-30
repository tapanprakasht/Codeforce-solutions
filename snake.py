number =list( map(int,input().split()))
n=number[0]
m=number[1]
flag=1
flag2=1
for i in range(1,n+1):
    if flag%2!=0:
        for j in range(0,m):
            print("#",end='')
        flag+=1
        print("")
    else:
        for j in range(0,m):
            if flag2%2!=0 and j==m-1:
                print("#",end='')
            elif flag2%2==0 and j==0:
                print("#",end='')
            else:
                print(".",end='')
        flag+=1
        flag2+=1
        print("")
