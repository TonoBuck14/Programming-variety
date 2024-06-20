#we have a string s and we want to find the maximum number of vowels
#in a substring of size K.

def slidingWindow(s, k):
    if len(s)<k:
        return 0
    
    total = 0
    substring = s[:k]
    total += count_helper(substring)
    maxTotal = total
    for i in range(len(s)-k):
       
        total-=count_helper(s[i])
        total+=count_helper(s[i+k])
        maxTotal = max(maxTotal, total)
    return maxTotal

def count_helper(substring):
    aCount = substring.count('a')
    eCount = substring.count('e')
    iCount = substring.count('i')
    oCount = substring.count('o')
    uCount = substring.count('u')
    return aCount+eCount+iCount+oCount+uCount
    

s = 'bacacbeaaeacfe'

print(slidingWindow(s,5))
'''
Chat solution
def slidingWindow(s, k):
    if len(s) < k:
        return 0
    
    vowels = set('aeiou')
    total = sum(1 for char in s[:k] if char in vowels)
    maxTotal = total
    
    for i in range(len(s) - k):
        if s[i] in vowels:
            total -= 1
        if s[i + k] in vowels:
            total += 1
        maxTotal = max(maxTotal, total)
    
    return maxTotal

s = 'bacacbaeacfe'
print(slidingWindow(s, 5))
'''