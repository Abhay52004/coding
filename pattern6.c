#include <stdio.h>
#include <stdlib.h>

int main() {
    int i =1;

    for(i;i<=4 ; i++){
        for(int j = 1 ;j<=4-i;j++)
        printf(" ");
        for(int k =1 ; k<=2*i-1 ; k++)
        printf("*");
        printf("\n");
    }
    system("pause");
    return 0;
}