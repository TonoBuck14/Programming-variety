```python
class Solution(object):
    def tribonacci(self, n):
        f = [0,1,1]
        for i in range(3, n+1):
            f.append(f[i-3]+f[i-2]+f[i-1])
        return f[n]
```