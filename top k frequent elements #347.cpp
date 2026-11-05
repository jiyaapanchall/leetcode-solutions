
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        // Count frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        // Store numbers in a vector
        vector<pair<int, int>> arr;

        for (auto it : freq) {
            arr.push_back({it.second, it.first});
        }

        // Sort by frequency in descending order
        sort(arr.rbegin(), arr.rend());

        // Get the top k frequent elements
        vector<int> result;

        for (int i = 0; i < k; i++) {
            result.push_back(arr[i].second);
        }

        return result;
    }
};
