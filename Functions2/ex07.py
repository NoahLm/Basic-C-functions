def string_test(user):
    d={"UPPERCASE":0, "LOWERCASE":0}
    for i in user:
        if i.isupper():
           d["UPPERCASE"]+=1
        elif i.islower():
           d["LOWERCASE"]+=1
        else:
           pass
    print ("Original String : ", user)
    print ("Number of upper case: ", d["UPPERCASE"])
    print ("Number of lower case: ", d["LOWERCASE"])

user = input("Write a phrase and lets see how many lower and upper cases it has: ")

string_test(user)