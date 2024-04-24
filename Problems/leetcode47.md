```python
class Solution(object):
    def permuteUnique(self, nums):
        pos = 0
        result = []
        self.permuteAux(nums, pos, result)
        f=self.uniList(result)
        return f



    def uniList(self,l):
        un = []
        for i in l:
            if i not in un:
                un.append(i)
        return un


    def permuteAux(self,nums, pos, result):
        if(pos==len(nums)):
            result.append(nums[:])
        for i in range(pos, len(nums)):
            
            nums[i], nums[pos] = nums[pos], nums[i]
            self.permuteAux(nums, pos+1, result)
            
            nums[i], nums[pos] = nums[pos], nums[i]
```