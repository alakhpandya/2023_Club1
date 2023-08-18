// Ask two integers from user and print all the Armstrong numbers between them (including both).

#include<stdio.h>
#include<math.h>

int main(){
    int a, c, d, sum, n, n1, n2;
    printf("First number: ");
    scanf("%d", &n1);       // 100
    printf("Second number: ");
    scanf("%d", &n2);       // 110
    for(n = n1; n <= n2; n++){  //  i = 100, 101, 102
        // backup of n:
        sum = 0;
        c = 0;
        a = n;
        // counting number of digits of n:
        while (a > 0){
            a = a/10;
            c += 1;
        }
        // backing up n:
        a = n;
        // finding sum of powers of digits:
        while (a > 0){
            d = a % 10;
            a = a / 10;
            sum = sum + pow(d, c);
        }
        // printf("\nsum = %d", sum);
        // Printing if armstrong or not:
        if (sum == n){
            printf("%d\n", n);
        }
    }
    return 0;
}