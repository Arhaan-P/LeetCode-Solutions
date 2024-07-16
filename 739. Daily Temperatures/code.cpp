class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size(), 0);
        stack<int> stk; // To store indices

        for(int i = 0; i < temperatures.size(); i++) {
            while(!stk.empty() && temperatures[stk.top()] < temperatures[i]) {
                int idx = stk.top();
                answer[idx] = i - idx;
                stk.pop();
            }
            stk.push(i); // Next index
        }
        return answer;
    }
};