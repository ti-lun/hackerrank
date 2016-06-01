##n = int(input())
##
##def fibo(n: int):
##
##    if n == 0:
##        return 0
##    
##    a0 = 0
##    a1 = 1
##    a2 = 1
##    count = 2
##    total = 1
##
##    while (count < n+1):
##        a2 = a0 + a1
##        total += a2
##        a0 = a1
##        a1 = a2
##        count += 1
##        
##    return a2
##
##print(fibo(n))

n = int(input())

def fibo(n: int):

    count = n
    a_0 = 0
    a_1 = 1
    theTotal = 0

    if n == 0:
        return 0
    
    def fibo_recur(m: int, total: int, a0: int, a1: int):

        if m == 2:
            return a0+a1
        
        else:
            
            a2 = a0 + a1
            
            return fibo_recur(m-1, a2, a1, a2)

    return fibo_recur(count, theTotal, a_0, a_1)

print(fibo(n))
