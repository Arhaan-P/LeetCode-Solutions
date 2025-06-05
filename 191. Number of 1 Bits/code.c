int hammingWeight(int n) {
    // Find right most set bit, and delete
    // Keep doing n - (n & (-n))

    int count = 0;

    while (n > 0) {
        count ++;
        n -= (n & -n);
    }

    return count;
}