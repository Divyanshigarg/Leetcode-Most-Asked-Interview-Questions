/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false  */

class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t)
        //     return true;
        // return false;
        
        
        //both are the correct solutions
        int freqs[26]={},freqt[26]={};
        
        for(char ch:s) freqs[ch-'a']++;
        for(char ch:t) freqt[ch-'a']++;
        
        for(int i=0;i<26;i++)
        {
            if(freqs[i]!=freqt[i])
                return false;
        }
        return true;
    }
};

problem link:
https://leetcode.com/problems/valid-anagram/
