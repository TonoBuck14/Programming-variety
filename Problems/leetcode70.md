```python
class Solution(object):
    def climbStairs(self, n):
        return self.aux(0,1,n+1)
    def aux(self,a,b,n):
        if n==0:
            return a
        if n==1:
            return b
        return self.aux(b,a+b,n-1)
```