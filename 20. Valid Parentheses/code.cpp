#include <iostream>
#include <stack>
using namespace std;

class Solution{
    public:
        bool isValid(string input) {
        // Create a stack to store opening parentheses
        stack<char> s;

        // Loop through each character in the input string
        for (int i = 0; i < input.length(); i++) {
            // If the current character is an opening parenthesis, push it onto the stack
            if (input[i] == '(' || input[i] == '[' || input[i] == '{') {
            s.push(input[i]);
        }
        else{ // If the character is a closing parenthesis
        // Check if the stack is empty (unmatched closing parenthesis)
            if(s.empty()){
                return false;
            } 
            // Check if the closing parenthesis matches the top element on the stack
            else if((s.top() == '(' && input[i] == ')') || (s.top() == '{' && input[i] == '}') || (s.top() == '[' && input[i] == ']')) {
                // Pop if the opening and closing parenthesis if they match
                s.pop();
            }
            else{ // Mismatched closing parenthesis
                return false;
            }
        }
    }
    // If the stack is empty at the end, all parentheses are matched and valid
    return s.empty();
    }
};