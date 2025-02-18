/**
 * -----------------------------------------------------------------------------------------------
 * Problem: 1786 Merge Two Strings alternatively
 * -----------------------------------------------------------------------------------------------
 * Approach:
 * Traverse both strings simultaneously, adding characters from each string to the result string alternately. Continue this process until all characters from both strings are added.
 * -----------------------------------------------------------------------------------------------
 * Complexity Analysis:
 * Time Complexity: O(n + m), where n and m are the lengths of the two strings.
 * Space Complexity: O(n + m), for storing the result string.
 * -----------------------------------------------------------------------------------------------
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string a = "";
            int count = 0;
            for(int i= 0 ; i<word1.length()||i<word2.length();i++) {
                if (i<word1.length()){
                    a+=word1[i];
                }
                if (i<word2.length()){
                    a+=word2[i];
                }
            }
            return a ;
        }
    };
