//print fibo sries to print till the nth term;
#include <stdio.h>
#include <stdlib.h>
int fibo(int x){
    if(x <= 0)
    return -1;
    else if(x==1)
    return 0;
    else if(x == 2)
    return 1;
    else
   return  fibo(x-1) + fibo(x-2);
}
int printfibo(int t,int z){
    if(t>z)
    return 0;
    printf("%d ",fibo(t));
    printfibo(t+1,z);
}
int main() {
     int  a ;
    printf("Enter the no.: ");
    scanf("%d",&a);
   printfibo(1,a);  


    system("pause");
    return 0;
}