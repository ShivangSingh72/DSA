class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int largest = nums[0];
        int secondLargest = -1;
        int largestIndex = 0;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] > largest) {
                secondLargest = largest;
                largest = nums[i];
                largestIndex = i;
            }
            else if (nums[i] > secondLargest) {
                secondLargest = nums[i];
            }
        }

        if (largest >= 2 * secondLargest) {
            return largestIndex;
        }

        return -1;
    }
};