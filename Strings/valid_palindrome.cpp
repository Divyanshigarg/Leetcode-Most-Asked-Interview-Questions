/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.*/


class Solution {
public:
    bool isPalindrome(string s) 
    {
        int i=-1,len=s.size();
        string ans;
        
        while(i++<len)
        if((65<=s[i] && s[i]<=90) || (97<=s[i] && s[i]<=122) || (48<=s[i] && s[i]<=57))
                ans += tolower(s[i]);
        
        int l=0,r=ans.size()-1;
        while(l<r)  if(ans[l++]!=ans[r--])  
            return 0;
        return 1;
    } 
};
problem link:
https://leetcode.com/problems/valid-palindrome/
