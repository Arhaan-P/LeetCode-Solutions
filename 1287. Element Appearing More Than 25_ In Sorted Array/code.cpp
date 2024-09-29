class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int twenty_five = 0.25 * arr.size();
        map<int,int> hash_map;
        for(auto &i : arr){
            hash_map[i]++;
        }
        for(auto &i : hash_map){
            if(i.second > twenty_five){
                return i.first;
            }
        }
        return -1;
    }
};