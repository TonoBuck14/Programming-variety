```python
def removeElement(nums, val):
    l = len(nums)
    c = 0
    for i in range(l):
        if nums[i]==val:
            nums[i]=-1
            c+=1
    nums.sort()
    nums.reverse()
   
    return len(nums)-c
```