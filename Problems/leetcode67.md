```python
def addBinary(a, b):
    #m_len = max(len(a), len(b))
    i_a = int(a)
    i_b = int(b)
    res = ''
    carry = 0
    if not i_a and not i_b:
        return '0'
    while i_a or i_b:
        dA = i_a%10
        dB = i_b%10
        s = dA+dB+carry
        
        dr = s%2 #if sum is 2, dr is 0, if sum is 1, dr is 1
        res+=str(dr)
        carry = s//2 #if sum is 2, carry is 1, if sum is 1, carry is 0
        
        i_a//=10
        i_b//=10
    if carry:
        res+=str(carry)
    return res[::-1]
        
print(addBinary('0', '0'))
```