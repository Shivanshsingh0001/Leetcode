class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int j=0;
        for(int i=1;i<nums.size();i++){
            if (nums.size()!=0){
                int unique1=nums[j];  
                if (unique1!=nums[i]){
                    nums[j+1]=nums[i];
                    j++;
                }
                else continue;
            }

        }
        return j+1;
    }
};