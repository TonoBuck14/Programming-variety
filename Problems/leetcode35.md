```python
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        l = len(nums)
        r = l//2
        c1 = 0
        c2 = r
        if(r==0):
            if target>nums[r]:
                return r+1
            else:
                return r
        if(target<nums[r]):
            for _ in range(r):
                if nums[c1] == target or nums[c1]>target:
                    return c1
                c1+=1
            return c1
        elif (target>nums[r]):
            for _ in range(r, l):
                if nums[c2] == target or nums[c2]>target:
                    return c2
                c2+=1
            return c2
            
        else:
            return r

```