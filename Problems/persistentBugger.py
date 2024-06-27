def persistance(n):
    if n//10 == 0:
        return 0
    count = 0
    
    while True:
        
        n=multiply_digits(n)
        count+=1
        if n < 10:
            return count
        


def multiply_digits(n):
    l = []
    while n > 0:
        l.append(n%10)
        n//=10
    res = 1
    for i in l:
        res = res*i
    return res


print(persistance(999))

