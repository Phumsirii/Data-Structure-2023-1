n=int(input())
mCap=1
mSize=0
for i in range(n):
    a=input().split()
    if (a[0]=='0'):
        mSize+=int(a[1])
        while mCap<mSize:
            mCap*=2
    else:
        mSize-=int(a[1])
print(mCap-mSize)