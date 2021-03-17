def evennums(user):
    no = []
    for i in user:
        if i % 2 == 0:
            no.append(i)
    return no

print(evennums([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 432, 234234, 234243234, 24, 43553, 21, 41,]))
