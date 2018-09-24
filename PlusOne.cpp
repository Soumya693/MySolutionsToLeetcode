/*Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int carry = 0;
        vector<int> out;
        for(int i =0; i<size;i++){
            if(digits[size - i -1]== 9){
                int t = digits[size-i-1]+carry;
                int r = 0;
                carry = 1;
                out.push_back(r);
            }
            else{
                carry = 0;
                int sum = digits[size - i-1] + 1;
                out.push_back(sum);
                int j = i+1;
                while(j<size){
                    out.push_back(digits[size-j-1]);
                    j++;
                }
                break;
            }
        }
        if (carry == 1){
            out.push_back(1);
        }
        reverse(out.begin(),out.end());
        return out;
    }
};
