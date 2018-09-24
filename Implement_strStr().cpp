
/*Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().*/class Solution {

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hsize = haystack.size();
        int nsize = needle.size();
        if(needle == ""){
            return 0;
        } else if(nsize > hsize){
            return -1;
        }
        for(int i = 0;i<hsize; i++){
            int k = i;
            bool flag = true;
            for(int j =0; j<nsize;j++){
                if(k>hsize){
                    flag = false;
                    break;
                } 
                if(haystack[k] == needle[j]){
                    k++;
                } else{
                    flag = false;
                    break;
                }
            }
            if(flag)
                return i;
        }
        return -1;
    }
};
