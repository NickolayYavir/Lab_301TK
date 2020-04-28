from random import randint
import sys

print("Enter the number of columns and rows and you'll get a random array\n")

K = 15	# degree value for array
try:
	N = int(input("Input integer: "))
	M = int(input("Input integer: "))
except:
    raise SystemExit("Error. You don't imput integer")


Array_a = [[randint(0,60) for x in range(N)] for x in range(M)]
print("First array\n\n", Array_a)

def matrix_power(array,degree_value):

	for i in range(len(array)): 
		for j in range(len(array[i])): 
			array[i][j] = ((array[i][j])**degree_value)
	return array

Array_b = matrix_power(Array_a,K)
print("Second array (the first array is presented in the 15th degree)\n\n", Array_b)
