class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        int xorr = 0;

        for (int num : nums) {
            xorr ^= num;
        }

        long long rightMostBit = (long long)xorr & -(long long)xorr;
        int num1 = 0;
        int num2 = 0;

        for (int num : nums) {
            if (num & rightMostBit)
                num1 ^= num;
            else
                num2 ^= num;
        }

        return {num1, num2};
    }
};