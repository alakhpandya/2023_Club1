// Fix the style of your loop: for(i = 1; i <= n; i++)
#include<stdio.h>

// Ask n from user & print the following patterns: In the examples below it is assumed that n = 5
// Pattern 1: *****
// Pattern 2:
/*
*
*
*
*
int main()
{
    int i, n;
    printf("n : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        printf("*\n");
        // printf("\n");
    } 
    return 0;
}
*/

// Pattern 3:
/*
*****
*****
*****
*****
*****
*/
int main()
{
    int i, j, n;
    printf("n : ");
    scanf("%d", &n);
    for(j = 1; j <= n; j++){
        for(i = 1; i <= n; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}