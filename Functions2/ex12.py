def palindrome(user):
	pos1 = 0
	pos2 = len(user) - 1	
	while pos2 >= pos1:
		if not user[pos1] == user[pos2]:
			return False
		pos1 += 1
		pos2 -= 1
	return True

user = input("Write a word and lets see if its a palindrome: ")
print(palindrome(user)) 