class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>length (2*n);

        for(int i = 0; i < n; i++){
            length[i] = nums[i];
            length[n + i] = nums[i];
        }
        return length;
    }
};