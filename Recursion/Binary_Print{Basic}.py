
def binary(decimal):
    if decimal == 0:
        return
    binary(decimal//2)
    print(decimal%2,end="")
    return

binary(4)