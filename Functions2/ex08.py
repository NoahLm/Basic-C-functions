def uniquearray(user):
  no = []
  for i in user:
    if i not in no:
      no.append(i)
  return no

print(uniquearray([1, 2, 3, 3, 3, 3, 4, 7, 9, 9, 9, 9, 9, 7, 3, 2 , 5])) 