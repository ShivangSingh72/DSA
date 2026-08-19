class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int , int> mpp;

        for(int i = 0; i<numbers.size(); i++){
            int a = numbers[i];
            int check = target - a;

            if (mpp.find(check) != mpp.end()) {
                return{mpp[check] + 1 , i + 1};
            }
            mpp[numbers[i]] = i;
        }
        return{};
    }
};