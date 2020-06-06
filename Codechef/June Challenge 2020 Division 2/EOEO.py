# Concept used: basic maths,bits manipulation
# 'By Anki'
def iin(): return int(input())
def lin(): return list(map(int, input().split()))

t=iin()
while t:
    t=t-1
    n=iin()
    if n%2!=0:
        print(n//2)
    else:
        v=[]
        cn=0
        while n:
            if n%2==0:
                v.append(0)
            else:
                v.append(1)
                cn=cn+1
            n=n//2
        s=len(v)
        v.reverse()
        # print(s)
        p=0
        ans=0
        for i in range (0,s):
            if(v[i]==1):
                p=i
        # print(cn)   
        ans=ans+pow(2,p-1)
        if(cn==1):
            print(0)
        elif(cn==2):
            print(ans)
        else:
            for i in range(1, p):
                if(v[i]==1):
                    ans=ans+pow(2,p-i-1)
            print(ans)
