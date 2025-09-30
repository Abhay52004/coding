#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i =0 ;i<a ; i++)
    scanf("%d",&b[i]);
    int sum = 0;
    for(int i =0; i<a ; i++)
    sum = sum + b[i];

printf("%d",sum);
system("pause");
return 0;
}
