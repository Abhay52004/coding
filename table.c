//take 2 interger a and b (a<b) . print tables from a to b;
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a ,b;
    printf("enter the 2 no. a  and b where a<b: ");
    scanf("%d %d",&a,&b);
    for(int i = a ; i<=b ; i++){
        printf("Table of %d\n",i);
        for(int j = 1 ; j<=10;j++){
            printf("%d * %d is %d\n",i,j,i*j);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}