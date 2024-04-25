#include <limits.h>
double myPow(double x, int n) {
    long long exp = n;
    if(x == 1 | n == 0){
        return 1;
    }
    double prod = 1.0;
    if (exp == INT_MIN){
        exp++; 
        prod *= x; 
    }
    exp = abs(exp);
    while(exp > 0){
        if(exp % 2 == 1){
            prod *= x;
        }
        x *= x;
        exp /= 2;
    }
    if (n > 0) {
        return prod;
    } 
    else {
        return (1 / prod);
    }
}
