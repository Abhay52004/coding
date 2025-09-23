#include <stdio.h>
#include <stdlib.h>
int min(int  a , int b){
    int c = a>b?a:b;
    return c;
}
int main() {
    int a[3][3];
    

    for(int i = 0 ; i<=2 ;i++)
{
    for(int j = 0 ; j<=2;j++)
{int b,c,d,f;
    int value;
   b= i;
   c = 2 -i;
   d = j;
   f = 2-j;
    value = min(min(b,c),min(d,f));
    a[i][j]=value;
    printf("%d ",a[i][j]);
}
printf("\n");}

    system("pause");
    return 0;
}