bool isPalindrome(int x) {
   long long int rev = 0;
    int original = x;
    while (x > 0) {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x /= 10;
    }
    return original == rev;
}
