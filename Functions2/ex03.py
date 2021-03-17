def multiplication(list):  
    total = 1
    for i in list:
        total *= i  
    return total  

print(multiplication((3, 4, 9, 89, 23)))