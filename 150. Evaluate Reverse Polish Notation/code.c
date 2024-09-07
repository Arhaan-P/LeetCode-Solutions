int evalRPN(char** tokens, int tokensSize) {
    int stack[tokensSize];  
    int top = -1;  

    bool isOperator(char* token) {
        return (strcmp(token, "+") == 0 || strcmp(token, "-") == 0 || 
                strcmp(token, "*") == 0 || strcmp(token, "/") == 0);
    }

    for (int i = 0; i < tokensSize; i++) {
        if (isOperator(tokens[i])) {
            int b = stack[top--];
            int a = stack[top--];
            int result;

            if (strcmp(tokens[i], "+") == 0) {
                result = a + b;
            } else if (strcmp(tokens[i], "-") == 0) {
                result = a - b;
            } else if (strcmp(tokens[i], "*") == 0) {
                result = a * b;
            } else if (strcmp(tokens[i], "/") == 0) {
                result = a / b;
            }

            stack[++top] = result;
        } else {
            stack[++top] = atoi(tokens[i]);
        }
    }

    return stack[top];
}
