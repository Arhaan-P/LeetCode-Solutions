double myPow(double x, int n) {
    // Step 1: Use long long to safely handle cases like n == INT_MIN
    long long N = n;

    // Step 2: If the exponent is negative, take the reciprocal of the base
    // and make the exponent positive
    if (N < 0) {
        x = 1 / x;    // x^(-n) = 1 / x^n
        N = -N;       // convert to positive to simplify further computation
    }

    // Step 3: Initialize result
    double ans = 1;

    // Step 4: Perform binary exponentiation
    while (N > 0) {
        // Step 4.1: If the current bit of N is 1, multiply result by current x
        if (N & 1) {
            ans *= x;
        }

        // Step 4.2: Square the base for the next bit
        x *= x;

        // Step 4.3: Move to the next bit (divide exponent by 2)
        N >>= 1;
    }

    // Step 5: Return the final computed result
    return ans;
}