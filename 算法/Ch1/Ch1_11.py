n = int(input("輸入n"))
print("for Loop:")
sum1 = 0
for i in range(2,n+1):
    ai = (i-1) * (i)
    sum1 += ai
    print(f"{i-1}*{i}",end='\t')
print("=>",sum1)    


def getSum(n):
    if (n==1 or n==0):
        return 0
    else:
        print(f"{n}*{n-1}",end='\t')
        return getSum(n-1) + n * (n-1) 
print("遞迴")    
print("=>",getSum(n))
