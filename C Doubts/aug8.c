// Armstrong number program

#include<stdio.h>
#include<math.h>

int main(){
    // HW: Write a program to count no of digits of a given number. (Ask an integer from user and print number of digits of that number). Hint: Use while loop
    /*
    a = 5679
    a = 567
    d = 5679 % 10
    int a, c = 0;
    printf("a: ");
    scanf("%d", &a);
    while (a > 0){
        a = a/10;
        c += 1;
        // printf("a = %d", a);
    }
    printf("Number of digits = %d", c);
    */
    /*
    int b, p, ans;
    printf("Base: ");
    scanf("%d", &b);    // 3
    printf("Power: ");
    scanf("%d", &p);    // 4
    ans = pow(b, p);
    printf("ans = %d", ans);
    */
    int a, c = 0, d, sum = 0, n;
    printf("number: ");
    scanf("%d", &n);
    a = n;
    while (a > 0){
        a = a/10;
        c += 1;
        // printf("a = %d", a);
    }
    // printf("Number of digits = %d", c);
    // printf("\na = %d", a);
    a = n;
    while (a > 0){
        d = a % 10;
        a = a / 10;
        sum = sum + pow(d, c);
    }
    // printf("sum = %d", sum);
    if (sum == n){
        printf("Armstrong.");
    }
    else{
        printf("Not Armstrong.");
    }
    return 0;
}