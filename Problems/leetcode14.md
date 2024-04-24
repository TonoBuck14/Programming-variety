```python
def longestCommonPrefix(strs):
    if len(strs)==0:
        return "" 
    if len(strs)==1:
        return strs[0]
    res = ""
    for i in range(len(strs[0])):
        for j in range(1,len(strs)):
            if len(strs[j])<=i or strs[0][i]!=strs[j][i]:
                return res
        res+=strs[j][i]
    return res

#s = ['flower', 'siu']
#print(s[0][6])
print(longestCommonPrefix(['a']))
```


