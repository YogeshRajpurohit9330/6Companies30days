class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int low=INT_MAX;
        int mid=INT_MAX;
        if(nums.size()<3)
        return false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<low)
            low=nums[i];
            if(nums[i]>low && nums[i]<mid)
            mid=nums[i];
            if(nums[i]>mid)
            return true;
        }
        return false;
    }
};
