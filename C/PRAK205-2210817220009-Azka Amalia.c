#include <stdio.h>
#include <math.h>
int main()
{
    int A, B, C, tinggi, keliling, luas;
    scanf("%d", &A);
    scanf("%d", &B);
    C = sqrt((B*B)-(A*A));
    printf("Alas = %d cm\n", C);
    printf("Tinggi = %d cm\n", A);
    keliling = A+B+C;
    printf("Keliling = %d cm\n", keliling);
    luas = (C*A)/2;
    printf("Luas = %d cm^2\n", luas);
    return 0;
}
