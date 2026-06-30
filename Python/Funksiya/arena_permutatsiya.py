def permutations(array):
    if len(array) == 1:
        return array[0]
    return array[0], permutations(array[1:])

def getPermutations(array):
    if len(array) == 0:
        return []
    
    print(permutations(array))
    

getPermutations([1, 2, 3])
