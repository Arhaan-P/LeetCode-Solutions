int calculate(char* s) {
    int stack[1000];
    int top = -1;
    int x = 0;
    int sign = 1;
    int ans = 0;

    while(*s) {
        if (isdigit(*s)) {
            x = x * 10 + (*s - '0');
        }
        else if (*s == '+') {
            ans += sign * x;
            x = 0;
            sign = 1;
        }
        else if (*s == '-') {
            ans += sign * x;
            x = 0;
            sign = -1;
        }
        else if (*s == '(') {
            stack[++top] = ans;
            stack[++top] = sign;
            ans = 0;
            sign = 1;
        }
        else if (*s ==')') {
            ans += sign * x;
            x = 0;
            ans *= stack[top--];
            ans += stack[top--];
        }
        s++;
    }
    return ans + sign * x;
}