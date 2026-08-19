class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> seen;
        for(int i=0;i<nums.size();i++){
            int search=target-nums[i];
            if(seen.count(search)>0){
                return {i,seen[search]};
            }
            seen[nums[i]]=i;
        }
        return {};
    }
};