class Solution {
public:
    bool check(vector<int>& nums) {
        int count_drops = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {//i+1 don't go out of bound
                count_drops++;
            }
            if (count_drops > 1) {
                return false;
            }
        }
        
        return true;
    }
};
