/*
1. Take 5 integers from user and store them in an array. Print the entire array. Now ask user which element do they want to print again. Just print that element this time.
2. Take 5 integers from user and store them in an array. Take another 5 integers from user and store them in an another array. Add both the arrays and store the results in a third array. print all the arrays one by one.
3. Take 5 integers from user and store them in an array. Create another array with the same size and store numbers of first array in second array in reverse order. Display both the arrays.
4. Take 5 integers from user and store them in an array. Reverse the same array and print it before & after reversing.
arr = [13, 12, 6, 44, 0, -2]
        0   1  2   3  4   5

temp = arr[5]       // 5 - 0
arr[5] = arr[0]
arr[0] = temp

temp = arr[4]       // 5 - 1
arr[4] = arr[1]
arr[1] = temp

temp = arr[3]       // 5 - 2
arr[3] = arr[2]
arr[2] = temp
for(i = 0; i < n/2; i++){
    temp = arr[n - 1 - i];
    arr[n - 1 - i] = arr[i];
    arr[i] = temp;
}
5. Take 20 integers from user. Create three arrays named - odd, negative & prime. Store all the odd numbers taken from user in 'odd' array, negative numbers in 'negative' array & prime numbers in 'prime' array. Print all the three arrays with their names at the end.
*/