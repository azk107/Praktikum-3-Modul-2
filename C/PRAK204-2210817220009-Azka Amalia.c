#include <stdio.h>
int main()
{
    float r, t, volume, luas, keliling;
    scanf("%f", &r);
    scanf("%f", &t);
    volume = (22*(r*r)*t)/7;
    printf("Volume = %.2f\n", volume);
    luas = (2*22*r*(r+t))/7;
    printf("Luas = %.2f\n", luas);
    keliling = ((2*22*r)/7);
    printf("Keliling = %.2f", keliling);
    return 0;
}
