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
    double times = 1;

    for(int i = 0; i < k; i++){
        times *= x;
    };
    return times;
}

int main(){
    int n = 0;
    double sum = 0;
    double x = 1.01, x0= 1, e= 2.7183;
    printf("Kaç tane terim olsun?");
    scanf("%d", &n);
    for(int k=0; k < n+1; k++){
        sum += power(x-x0,k)/fakt(k);
    }
    sum *= e;
    printf("Sonuc = %lf", sum);
    return 0;
}