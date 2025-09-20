// Sum of First N Numbers: Ask the user for a number N and calculate the sum of all numbers from 1 to N. (e.g., if N=5, sum = 1+2+3+4+5 = 15).

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a ;
    printf("enter the number: ");
    scanf("%d",&a);
    int s = 0;
    for(int i = 1 ; i<=a ;i++){
        s = s+i;

    }
    printf("sum till %d is %d\n",a,s);

    system("pause");
    return 0;
}
