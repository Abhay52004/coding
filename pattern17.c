#include <stdio.h>
#include <stdlib.h>

int main() {
    for(int i = 1 ; i<=4 ;i++){
        for(int j = 1; j <=i ;j++ )
        printf("*");
        for(int k = 1 ; k<=2*(4-i) ; k++)
        printf(" ");
        for(int  l = 1 ; l<=i ; l++)
        printf("*");
        printf("\n");
    }

    system("pause");
    return 0;
}