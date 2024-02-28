#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class LongestIncreasingSubsequence {
public:
    static pair<int, vector<int>> findLongestIncreasingSubsequence(const vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 1); 
        vector<int> prevIndex(n, -1); 
        int maxLength = 1;
        int endIndex = 0;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j] && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    prevIndex[i] = j;
                }
            }
            if (dp[i] > maxLength) {
                maxLength = dp[i];
                endIndex = i;
            }
        }

        vector<int> longestSubsequence;
        while (endIndex != -1) {
            longestSubsequence.push_back(nums[endIndex]);
            endIndex = prevIndex[endIndex];
        }
        reverse(longestSubsequence.begin(), longestSubsequence.end());

        return { maxLength, longestSubsequence };
    }
};

int main() {
    vector<int> input = {10, 22, 9, 33, 21, 50, 41, 60, 80};

    auto result = LongestIncreasingSubsequence::findLongestIncreasingSubsequence(input);

    cout << "Longest Increasing Subsequence: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Length of Longest Increasing Subsequence: " << result.first << endl;

    return 0;
}
