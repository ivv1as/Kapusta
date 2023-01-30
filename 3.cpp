class Solution {
public:
    int numEquivalentDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> dict;
        int count = 0;
        for (vector<int> d : dominoes) {
            int a = (d[0] << 4) | d[1], b = (d[1] << 4) | d[0];
            count += (a == b ? 0 : dict[b]) + dict[a]++;
        }
        return count;
    }
};