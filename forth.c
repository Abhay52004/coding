// //code of 3*3*3*3*3*3*3*3*3 or x ** y;
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int a ,b;
//     printf("enter the value of a and b: ");
//     scanf("%d %d",&a,&b);
//     int p = 1;
//     for(int i = 1; i<=b;i++){
//         p = p*a;
//     }
//     printf("%d\n",p);

//     system("pause");
//     return 0;
// }


// take a interger and find the no. of digit?
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int a;
//     printf("Enter the no.: ");
//     scanf("%d",&a);
//     int c = 0;
//     while(a){
//         c++;
//         a = a/10;//yaad rakhna a destroy ho jayaga jab loop se bahar jayange
//     }
//     printf("%d\n",c);

//     system("pause");
//     return 0;
// }


// to print the factor of a ;
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//      int a;
//     printf("Enter the no.: ");
//     scanf("%d",&a);
//     for(int i =1;i<=a;i++){
//         if(a%i==0)
//         printf("%d\n",i);
//     }

//     system("pause");
//     return 0;
// }


//wap to print the sum of al the factor of a given no.(n>0);

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//      int a;
//     printf("Enter the no.: ");
//     scanf("%d",&a);
//     int c = 0;
//     for(int i =1;i<=a;i++){
//         if(a%i==0)
//         c= c+i;
//     }
//     printf("%d\n",c);
//     system("pause");
//     return 0;
// }


//wap  weather a no. is perfect or not?


// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//      int a;
//     printf("Enter the no.: ");
//     scanf("%d",&a);
//     int c = 0;
//     for(int i =1;i<a;i++){//optimize kar sakte he till n/2 bcw sabhi factor n/2 ke chhote hi honge
//         if(a%i==0)
//         c= c+i;
//     }
//    if(c==a)
//    printf("%d is a perfect no.: ",a);
//    else
//    printf("Not a perfect no.: ");
//     system("pause");
//     return 0;
// }

//original armastrong
// n=d1d2d3d4
// d1^4 + d2 ^4 + d3^4 + d4^4 = n then armstrong

// logic: 1. no. of digit
// 2 . last digit 
// 3. sum = sum + lastdigit ^ no. of digit:

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
    
//     int a;
//     printf("Enter the no.: ");
//     scanf("%d",&a);
//     int b =a;
//     int l = b;
//     int c = 0 ; 
//     while(a){
//         c++;
//         a = a/10;
//     }
//     int s =0,e;
//     while(b){
//         e = b%10;
//         b = b/10;
//         int p = 1;
//         for(int i = 1 ;i<=c ; i++){
//              p = p*e;
//         }
//         s = s + p;
//     }
//     if(s == l )
//     printf("Armstrong: ");
//     else
//     printf("not a armstrong: ");
//     system("pause");
//     return 0;
// }


//Strong no.
// n = 145;
// 1! + 4! + 5! =145 then a strong .


// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int a;
//     printf("Enter the no.: ");
//     scanf("%d",&a);
//    int e,s=0;
//     int b = a;
//     while(a){
//         e = a%10;
//          int p = 1;
//     for(int  i = 1; i<=e ; i++){
//         p = p*i;
//     }
//     s = s + p;a  = a/10;

// }
// if(s==b){
//     printf("Strong no.");

// }
// else
// printf("not a strong");
//     system("pause");
//     return 0;
// }



