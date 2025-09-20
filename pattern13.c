#include <stdio.h>
#include <stdlib.h>

int main() {
    for(int i =1 ;i<=4;i++){
        for(int j = 1 ;j<=i;j++){
            if(i==j)
            printf("%d",j);
            else
            printf("%d*",j);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}