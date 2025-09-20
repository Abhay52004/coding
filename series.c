//series : 1/1! + 2/2! + 3/3! + 4 / 4!+  ...


#include <stdio.h>
#include <stdlib.h>

int fact(int b){
    int i = 1,p = 1;
    for(i ;i<=b;i++){
        p = p*i;
    }
    return p;
}

int main() {
    int a,b,i=1;
    float sum=0;
    printf("print the value of a and b: ");//a is x think like this and b =  no. of terms 
    scanf("%d %d",&a,&b);
    for(i;i<=b;i++){
       sum = sum + i*1.0/fact(i);
    }
    printf("%f",sum);
    system("pause");
    return 0;
}