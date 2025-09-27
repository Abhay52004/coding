//print all the prime no. between the range... 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b ;
    printf("Enter the no.");
    scanf("%d %d",&a,&b);
    printf("Prime no between the range: ");
    for(int i = a ; i<=b;i++){
        int is = 1;
        for(int j = 2 ; j*j<=i ; j++){
        if(i%j==0){
        is = 0;
        break;}}
        if(is == 1)
        printf("%d ,",i);
        
         
    }


    system("pause");
    return 0;
}