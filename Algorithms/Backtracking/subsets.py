

def subsetAux(arr, pos, sub, result):
    
    result.append(sub[:]) #copy of sub, doesn't interfere with backtracking when sub is modified

    for i in range(pos, len(arr)):
        sub.append(arr[i]) #we add current element
        subsetAux(arr, i+1, sub, result) #recursion
        sub.pop() #backtracking
    
def subset(arr):
    pos = 0
    sub = []
    result = []
    subsetAux(arr, pos, sub, result)
    return result

print(subset([1,2]))
    

    
    
    
    