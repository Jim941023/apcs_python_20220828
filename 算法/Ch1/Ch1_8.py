a1 = int(input("首項"))
d = int(input("公差"))
n = int(input("項數"))
sum1 = 0
print("for Loop:")
for i in range(n):
    ai = a1+i*d
    sum1+=ai
    print(ai,end='\t')
print("=>",sum1)
  
def getAn(n):
    if (n==1):
        return a1
    else:
        return getAn(n-1) + d
print("遞迴:")
sum2 = 0      
def getSn(n):
    if (n==1):
        print(a1,end='\t')
        return a1
    else:
        an = getAn(n)
        print(an,end='\t')
        return getSn(n-1) + an
print("=>",getSn(n))
