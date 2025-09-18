// code of e^x 
// //logic
// 1 = y = x^i
// 2 = z = fact(i)
// 3 = sum = sum + (y*1.0)/fact(i);

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    printf("Enter the value of x and no. of terms i.e y: ");
    scanf("%d %d",&x,&y);
    float s = 0;
    for(int i = 1 ; i <=y ; i++){
        int p = 1, f = 1;
        for(int j =1 ; j<=i ; j++){
            p = p*x;
        }
        for(int j = 1 ; j<=i ; j++)
        f  = f*j;
        s = s+ (p*1.0)/f;
    }
    printf("the value is : %f",s+1);


    system("pause");
    return 0;
}














































