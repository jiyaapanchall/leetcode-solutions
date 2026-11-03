
#include <unordered_map>
#include <string>
using namespace std;

// Problem: 242. Valid Anagram
// Approach: Frequency Counting using Unordered Map
// Time Complexity: O(n) average
// Space Complexity: O(k)

class Solution {
public:
    bool isAnagram(string s, string t) {

        // If lengths are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> freq;

        // Count characters in the first string
        for (char c : s) {
            freq[c]++;
        }

        // Decrease counts using the second string
        for (char c : t) {
            freq[c]--;

            if (freq[c] < 0) {
                return false;
            }
        }

        return true;
    }
};
