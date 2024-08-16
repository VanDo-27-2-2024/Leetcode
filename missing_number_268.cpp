class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Approach 1: using hash table
        map<int, int> store;

        for (int i = 0; i < nums.size(); i++)
        {
            store[nums[i]]++;
        }

        for (int i = 0; i <= nums.size(); i++)
        {
            if(store[i] == 0)
                return i;
        }

        return -1;

    }
};