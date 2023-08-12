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
*/

// Pattern 5: n = 10 or 11

/*
     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     * 

n = 9 or 8
     *
    * *
   * * *
  * * * *
  * * * *
   * * *
    * *
     * 
*/
/*
int main(){
    int i, j, n, rows;
    printf("n: ");  //  10
    scanf("%d", &n);
    rows = n/2;     // 5
    for(i = 0; i < rows; i++){
        for(j = 0; j < rows-i; j++){   // 5, 4, 3, 2, 1
            printf(" ");
        }
        for(j = 0; j <= i; j++){     // 1, 2, 3, 4, 5
            printf("* ");
        }
        printf("\n");
    }
    for(i = 0; i < rows; i++){ 
        for(j = 0; j <= i; j++){    // 1, 2, 3, 4, 5
            printf(" ");
        }
        for(j = 0; j < rows-i; j++){ // 5, 4, 3, 2, 1
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
*/

// Pattern 6:

/*
n = 10:
     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     * 

n = 9:
     *
    * *
   * * *
  * * * *
 * * * * *
  * * * *
   * * *
    * *
     * 
*/

int main(){
    int i, j, n, rows;
    printf("n: ");  //  10
    scanf("%d", &n);
    rows = n / 2;
    for(i = 0; i < rows; i++){
        for(j = 0; j < rows-i; j++){
            printf(" ");
        }
        for(j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    if (n % 2 == 0){
        for(i = 0; i < rows; i++){
            for(j = 0; j <= i; j++){
                printf(" ");
            }
            for(j = 0; j < rows-i; j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    else{
        rows += 1;
        for(i = 0; i < rows; i++){
            for(j = 0; j < i; j++){
                printf(" ");
            }
            for(j = 0; j < rows-i; j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

