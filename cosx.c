//coxa series;

#include <stdio.h>
#include <stdlib.h>
int p(int a , int b){
    int c = 1,i=1;
    for (i ; i<=b;i++){
        c = c*a;

    }
    return c;
}
int fact(int b){
    int i = 1,p = 1;
    for(i ;i<=b;i++){
        p = p*i;
    }
    return p;
}

int main() {
    int a,b,i=1;
    float sum=1;
    printf("print the value of a and b: ");//a is x think like this and b =  no. of terms 
    scanf("%d %d",&a,&b);
    for(i;i<b;i++){
        if((i&1)==0)
        sum += p(a,2*i)*1.0/fact(2*i);
        else
        sum -= p(a,2*i)*1.0/fact(2*i);
    }
    printf("%f",sum);
    system("pause");
    return 0;
}