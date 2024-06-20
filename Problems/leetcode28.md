```python
def strStr(haystack, needle):
   
    l = len(haystack)
    n = len(needle)
    ind = 0
    w = ''
    for i in range(l):
        if haystack[i]==needle[0]:
            ind = i
            c = i
            while True:
                if c >=l:
                    w=''
                    break
                w+=haystack[c]
                c+=1
                if w == needle:
                    return ind
        else:
            continue
    return -1
```