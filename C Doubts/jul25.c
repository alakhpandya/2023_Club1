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
/*
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
*/

// Pattern 3:
/*
*
**
***
****
*****
*/
/*
int main()
{
    int i, j, n;
    printf("n : ");
    scanf("%d", &n);
    for(j = 1; j <= n; j++){
        for(i = 1; i <= j; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Pattern 3:
/*
    *
   **
  ***
 ****
*****
*/
/*
int main()
{
    int i, j, n, k;
    printf("n : ");
    scanf("%d", &n);
    // k = n-1;
    for(j = 1; j <= n; j++){
        for(i = 1; i <= n-j; i++){  // n - j
            printf(" ");
        }
        for(i = 1; i <= j; i++){
            printf("*");
        }
        printf("\n");
        // k--;
    }
    return 0;
}
*/

// Pattern 4:
/*
*****
****
***
**
*

int main()
{
    int i, j, n, k;
    printf("n : ");
    scanf("%d", &n);
    // k = n-1;
    for(j = 1; j <= n; j++){
        for(i = 1; i <= n-j+1; i++){  // n - j
            printf("*");
        }
        printf("\n");
        // k--;
    }
    return 0;
}

// Pattern 4:

*****
 ****
  ***
   **
    *
*/
/*
int main(){
    int i, j, n, k;
    printf("n : ");
    scanf("%d", &n);
    // k = n-1;
    for(j = 1; j <= n; j++){
        for(i = 1; i <= j - 1; i++){
            printf(" ");
        }
        for(i = 1; i <= n- j + 1; i++){  // n - j
            printf("*");
        }
        printf("\n");
        // k--;
    }
    return 0;
}
*/

// Pattern 4:

/*
     *
    * *
   * * *
  * * * *
 * * * * *
*/
int main(){
    int i, j, n;
    printf("n: ");
    scanf("%d", &n);
    for(j = 1; j <= n; j++){
        for(i = 1; i <= n - j; i++){
            printf(" ");
        }
        for(i = 1; i <= j; i++){
            printf("* ");
        }
        printf("\n");
    }
}