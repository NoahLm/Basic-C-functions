def factorial(user):
    if user == 0:
        return 1
    else:
        return user * factorial(user-1)
        
user = int(input("Write a number to compute the factiorial : "))

print(factorial(user))