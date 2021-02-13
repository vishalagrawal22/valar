from random import randint

print('100000')

for i in range(100000):
	print(randint(1, 10000), end = ' ')

print()
print('100000')

for i in range(100000):
	l = randint(1, 100000)
	r = randint(l, 100000)
	print(l, end = ' ')
	print(r)