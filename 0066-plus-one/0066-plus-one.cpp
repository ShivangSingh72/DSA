class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int lastindex = digits.size()-1;

        for(int i = lastindex; i >= 0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;    
        }
        digits.insert(digits.begin() , 1);
        return digits;
    }
};