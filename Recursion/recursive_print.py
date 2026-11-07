def out(n):
    if (n==0):
        return
    out(n-1)
    print(n)
    return 

out(5)