#include <stdio.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k){
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    int a ;
    a = n>k?n:k;
      for (int i = 1; i <= n; i++) {
        // Inner loop starts from i + 1 to get unique pairs where i < j.
        for (int j = i + 1; j <= n; j++) {
            
            // Check AND
            if ((i & j) > max_and && (i & j) < k) {
                max_and = i & j;
            }

            // Check OR
            if ((i | j) > max_or && (i | j) < k) {
                max_or = i | j;
            }

            // Check XOR
            if ((i ^ j) > max_xor && (i ^ j) < k) {
                max_xor = i ^ j;
            }
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    system("pause");
    return 0;
}