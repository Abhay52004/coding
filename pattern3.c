// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int i = 1;
//     for(i;i<=5;i++){
//         for(int j = 1 ;j<=i;j++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }

//     system("pause");
//     return 0;
// }
//it simar to print the '*';
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;
    for(i;i<=5;i++){
        for(int j = 1 ;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    system("pause");
    return 0;
}