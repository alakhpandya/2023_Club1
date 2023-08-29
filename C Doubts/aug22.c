/*
Ask salaries of 5 employees (integers) from user, store them in variables named a, b, c, d and e. Now ask which employee's salary the user wants to see and print only that employee's salary.
*/
#include<stdio.h>

int main()
{
    int e[5], i;
    int choice;
    printf("Enter salaries:\n");
    /*
    printf("Emp-0: ");
    scanf("%d", &e[0]);
    printf("Emp-1: ");
    scanf("%d", &e[1]);
    printf("Emp-2: ");
    scanf("%d", &e[2]);
    printf("Emp-3: ");
    scanf("%d", &e[3]);
    printf("Emp-4: ");
    scanf("%d", &e[4]);
    */

    for(i = 0; i < 5; i++){
        printf("Emp-%d: ", i);
        scanf("%d", &e[i]);
    }
    printf("Employee no: ");
    scanf("%d", &choice);   // 0, 3

    printf("Salary = %d", e[choice]);
    return 0;
}