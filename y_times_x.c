#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    printf("enter the value of x and y: ");
    scanf("%d %d",&x,&y);
    int p =1;
    for(int i =0 ; i<y;i++)
     p = p*x;
     printf("the answer is : %d",p);

    system("pause");
    return 0;
}