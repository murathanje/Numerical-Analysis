#include <stdio.h>
#include <string.h>
#include <math.h>
// f(x)=lnx   x0=1 ilk4 terimi için 
int fact(int x){
    int result = 1;

    if(x == 0)
        return 1;
    for(int i=1; i<=x; i++){
        result *= i;
    }
    return result;
}

double power(double x, int y){
    double a = x;
    if(x == 0 )
        return 1;
    for(int i=1; i<y; i++){
        x *= a;
    }
    return x;
}

double taylor(double x){
    double result = 0;
    result = x + (-1 * power((x - 1), 2)) / fact(2) + (-2 * power((x - 1), 3)) / fact(3);
    return result;
}

int main(){
    double x = 0;
    printf("Hangi noktadaki degerini almak istersiniz?\n");
    printf("Power %f\n", power(2, 3));
    printf("Fact %d\n", fact(3));
    scanf("%lf", &x);
    double sonuc = taylor(x);
    printf("Sonuc: %f\n", sonuc);
}