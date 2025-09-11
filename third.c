// Area of a Rectangle: 
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int a,b;
//     printf("Enter the length and breadth :");
//     scanf("%d and %d",&a,&b);
//     printf("The area is : %d ",a*b );
//     system("pause");
//     return 0;
// }



// Temperature Converter
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     float a;
//     printf("Enter the temp in celsius :");
//     scanf("%f",&a);
//     printf("The temp in fahrenheit is : %f\n ",(a*9/5)+32 );
//     system("pause");
//     return 0;
// }


// Swap Two Numbers:
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int a,b,c;
//     printf("Enter the number a and b:");
//     scanf("%d and %d",&a,&b);
//     c = a ;
//     a = b;
//     b = c;
//     printf("The value of a and b after the swap: %d %d ",a,b);
//     system("pause");
// }





// Sum of Digits (2-digit number)
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int a,b,c=0;
//     printf("Enter the number :");
//     scanf("%d",&a);
//     while(a){
//         b = a%10;
//         c =c+b;
//         a = a/10;
//     }
//     printf("the sum  of digits %d ",c);
//     system("pause");
// }


//Largest of Three: Write a program that asks for three numbers and prints the largest one among them.
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int a,b,c;
//     printf("Enter the three number :");
//     scanf("%d %d %d",&a,&b,&c);
//     int d;
//     d = a>b && a>c ? a: b>c?b:c;
//     printf("The largenst of three: %d\n",d);

//     system("pause");
//     return 0;
// }

// Leap Year Checker: Write a program to check if a year entered by the user is a leap year.
// A year is a leap year if it is divisible by 4, except for end-of-century years, which must be divisible by 400. (e.g., 2000 was a leap year, but 1900 was not).

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int a;
//     printf("Enter the year ");
//     scanf("%d",&a);
//     int b =a;
//     const char* d ;
//     d = a%100==0 ? b%400==0?"it is a leap year":"not a leap year..":a%4==0?"its a leap year: ":"not a leap year";
//     printf("%s\n",d);
//     system("pause");
//     return 0;
// }

// Vowel or Consonant: Write a program that reads a single character and prints whether it is a "Vowel" (a, e, i, o, u) or a "Consonant".

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     char a ;
//     scanf("%c",&a);
//     const char* b;
//     b = a== 'a'|| a=='e'|| a=='i'|| a=='o'||a=='u'|| a=='A'||a=='E'|| a=='I'||a=='O'|| a=='U'?"VOwel ": "Constant";
//     printf("%s\n",b);

//     system("pause");
//     return 0;
// }


// Multiplication Table: Ask the user for a number and then use a for loop to print its multiplication table from 1 to 10.
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int a ;
//     printf("Enter  a number: ");
//     scanf("%d",&a);
//     for(int i = 1 ; i<=10 ; i++){
//         printf("%d * %d is %d\n",a,i,a*i);
//     }

//     system("pause");
//     return 0;
// }


// Sum of First N Numbers: Ask the user for a number N and calculate the sum of all numbers from 1 to N. (e.g., if N=5, sum = 1+2+3+4+5 = 15).

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int a ;
//     printf("enter the number: ");
//     scanf("%d",&a);
//     int s = 0;
//     for(int i = 1 ; i<=a ;i++){
//         s = s+i;

//     }
//     printf("sum till %d is %d\n",a,s);

//     system("pause");
//     return 0;
// }


// Factorial of a Number: Calculate the factorial of a number entered by the user.
// Formula: factorial of 5 (5!) = 5 * 4 * 3 * 2 * 1 = 120

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int a ;
//     printf("enter the number: ");
//     scanf("%d",&a);
//     int s = 1;
//     for(int i = 1 ; i<=a ;i++){
//         s = s*i;

//     }
//     printf("factorial of  %d is %d\n",a,s);

//     system("pause");
//     return 0;
// }



// Reverse a Number: Write a program that takes an integer from the user and prints its reverse. (e.g., input 12345 should output 54321).

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int a ;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     int s = 0;
//     int d;
//     int b =a;
//     while(a){
//         d = a%10;
//         s = s*10 + d;
//         a = a/10;
//     }    
//     printf("the reverse of %d is %d\n",b,s);

//     system("pause");
//     return 0;
// }











