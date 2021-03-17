def maxof1and2( user1, user2 ):
    if user1 > user2:
        return user1
    return user2

def finalmaxnumber( user1, user2, user3 ):
    return maxof1and2( user1, maxof1and2( user2, user3 ))

print("Lets find the biggest number of 3")
user1 = int(input("Write a number: "))
user2 = int(input("Write a number: "))
user3 = int(input("Write a number: "))

print(finalmaxnumber(user1, user2, user3))