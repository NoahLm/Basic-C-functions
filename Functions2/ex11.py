def perfnumber(user):
    addition = 0
    for i in range(1, user):
        if user % i == 0:
            addition += i
    return addition == user

user = int(input("Write a number and lets see if its a perfect number: "))
print(perfnumber(user))