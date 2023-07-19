#include<stdio.h>

// print "Hello" as many times as user tells
int main(){
    int n, i = 0;
    printf("How many times?\n");
    scanf("%d", &n);
    /*
    while (i < n){
        printf("Hello\n");
        i++;
    }
    */
    
    for(i = 0; i < n; i++){
        printf("%d. Hello\n", i+1);
    }
    return 0;
}
// Advance concepts of loop: different values of i