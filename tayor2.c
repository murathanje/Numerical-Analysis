#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int fakt ( int k){
    if ( k == 0 ) {
        return 1;
    }else{
        return k*fakt(k-1);
    }
}

double power(double x, int k){
    double times = 1.0;

    for(int i = 0; i < k; i++){
        times *= x;
    };
    return times;
}

int main(){
    int n = 0;
    double sum = 0;
    double x0 = 1.01, x= 0.2;
    printf("Kaç tane terim olsun?");
    scanf("%d", &n);
    for(int k=0; k < n; k++){
        sum += power((-9),k)*power(x,(2*k)/fakt(2*k));
    }
    printf("Sonuc = %lf", sum);
    return 0;
}