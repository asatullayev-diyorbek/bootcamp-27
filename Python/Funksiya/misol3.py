def teskari_son(n, i=None):
    if i==None:
        i=len(str(n))-1
    if n == 0:
        return 0
    return n %10*10**i+teskari_son(n//10,i-1)
    

print(teskari_son(143))
    