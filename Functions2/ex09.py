def prime(user):
    if (user == 1):
        return False
    elif (user == 2):
        return True;
    else:
        for i in range(2,user):
            if((user % i) == 0):
                return False
        return True 

user = int(input("Write a number and lets see if its a prime number: "))
print(prime(user))