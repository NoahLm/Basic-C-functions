def inrange(user, lownum, maxnum):
    if user in range(lownum, maxnum):
        print( " %s is in the range"%str(user))
    else :
        print("The number is outside the given range.")

lownum = int(input("Write a number for the lower number of the range: "))
maxnum = int(input("Write a number for the max number of the range: "))
user = int(input("Write a number and lets see if it is in a range: "))

inrange(user,lownum,maxnum)