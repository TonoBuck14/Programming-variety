```python
def permute(nums):
    pos = 0
    result = []
    permuteAux(nums, pos, result)
    return result

def permuteAux(nums, pos, result):
    if(pos==len(nums)):
        result.append(nums[:])
    for i in range(pos, len(nums)):
        
        nums[i], nums[pos] = nums[pos], nums[i]
        permuteAux(nums, pos+1, result)
        
        nums[i], nums[pos] = nums[pos], nums[i]

print(permute([1,2,3]))
```