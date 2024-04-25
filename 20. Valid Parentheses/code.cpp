#include <iostream>
#include <stack>
using namespace std;

class Solution{
public:
    bool isValid(string s) {
        stack <char> s1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                s1.push(s[i]);
            }
            if(s1.empty()){
                return false;
            }
            if((s1.top() == '(' && s[i] == ')') || (s1.top() == '{' && s[i] == '}') || (s1.top() == '[' && s[i] == ']')){
                s1.pop();
                s1.pop();
            }
            else{
                s1.push(s[i]);
            }
        }
        if(s1.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};