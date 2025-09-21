#include <stdio.h>
#include <stdlib.h>

int main() {
    int i =1;
    for(i;i<=5;i++){
        for(int j = 1 ; j <=6-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}