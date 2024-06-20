```python
def containsDuplicate(nums):
    numsMapping = set()

    for i in nums:
        if i not in numsMapping:
            numsMapping.add(i)
        else:
            return True
    return False

s = [1,1,1,3,3,4,3,2,4,2]
print(containsDuplicate(s))
```
        