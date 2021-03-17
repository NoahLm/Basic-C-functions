def reverse(user):
    rev = ''
    i = len(user)
    while i > 0:
        rev += user[ i - 1 ]
        i -= 1
    return rev

user = input("Write a phrase and lets see how it is in reverse: ")
print(reverse(user))