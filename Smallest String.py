t=int(input())
while(t>0):
    n=int(input())
    s=input()
    res=""
    maxs=max(s)
    ind=s.index(maxs)
    mins=min(s[ind+1:])
    ind2=s.index(mins)
    res=s[:ind]+mins+s[ind+1:ind2]+maxs+s[ind2+1:]
    print(res)
    t-=1
