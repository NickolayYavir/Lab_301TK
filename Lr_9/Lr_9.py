from random import randint


print("This program swaps the row with the largest element and the column with the smallest element.",'\nInput n (size of matrix n*n) ')

n = int(input())
Array_a = [[randint(1,100) for x in range(n)] for x in range(n)]
print('\nInput array\n',Array_a)

minEl = Array_a[0][0]
min = Array_a[0][0]
maxEl = Array_a[0][0]
max = Array_a[0][0]

for i in range(len(Array_a)):

    for j in range(len(Array_a)):

        if(Array_a[i][j] < minEl):
            minEl = Array_a[i][j] 
            min = j

        if(Array_a[i][j] > maxEl):
            maxEl = Array_a[i][j] 
            max = i

print("\nColumn - ", min+1,"min element\nRow - ", max+1, " max element\n\nOutput array\n")

for i in range(n):
    Array_a[i][min], Array_a[max][i] = Array_a[max][i], Array_a[i][min] 

print(Array_a)