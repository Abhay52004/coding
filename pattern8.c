#include <stdio.h>//hollow rectangle.

#include <stdlib.h>

int main() {
    int i =1;
    for(i;i<=4;i++){
        for(int j = 1 ; j<=5;j++)
        {
            if(i==1 || i==4 || j == 1||j==5)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    system("pause");
    return 0;
}