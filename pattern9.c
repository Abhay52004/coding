#include <stdio.h>
#include <stdlib.h>

int main() {
    int  i =1;
    for(i;i<=5;i++){
        for(int  j = 1 ; j<=5-i;j++)
        printf(" ");
        for(int k = 1 ; k<=5;k++)
        printf("*");
        printf("\n");
    }

    system("pause");
    return 0;
}