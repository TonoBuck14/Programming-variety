```python
def plusOne(digits):
    digitsLen = len(digits)-1
    carry = 0
    sumita = digits[digitsLen]+1
    if sumita<10:
        digits[digitsLen]=sumita
        return digits
    while sumita>9 or carry:
        if digitsLen==-1:
            break
        digRes = sumita%10
        digits[digitsLen] = digRes
        carry = sumita//10
        digitsLen-=1
        sumita = digits[digitsLen]+carry
    if carry:
        digits.insert(0,carry)  
    return digits


d = [9,9,9,9,9,9]
print(plusOne(d))

```
    




        
            



