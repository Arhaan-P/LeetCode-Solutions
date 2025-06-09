class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> primes(n, false);
        int count = 0;

        for (int i = 2; i * i < n; ++i) {
            if (!primes[i]) {
                for (long long j = 1LL * i * i; j < n; j += i) {
                    primes[j] = true;
                }
            }
        }

        for (int i = 2; i < n; ++i) {
            if (!primes[i]) ++count;
        }

        return count;
    }
};