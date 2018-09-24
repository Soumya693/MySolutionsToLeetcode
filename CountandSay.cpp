/*The count-and-say sequence is the sequence of integers with the first five terms as following:

1.     1
2.     11
3.     21
4.     1211
5.     111221
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.

Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence.

Note: Each term of the sequence of integers will be represented as a string.

 

Example 1:

Input: 1
Output: "1"
Example 2:

Input: 4
Output: "1211"*/

class Solution {
public:
    string countAndSay(int n) {
        string res = "";
        if(n == 1){
            res = "1";
            return res;
        }
        cout<<"else"<<endl;
        string s = "1";
        for(int i = 1 ;i<n;i++){
            int count = 1;
            int size = s.length();
            string res = "";
            for(int j = 1;j<size; j++){
                if(s[j]!=s[j-1]){
                    res.push_back(count+'0');
                    res.push_back(s[j-1]);
                    count = 1;
                }
                else{
                    count++;
                }  
            }
            res.push_back(count+'0');
            res.push_back(s[size-1]);
            s = res;
        }
        return s; 
    }
};
