class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int Min=INT_MAX;
        int Max=INT_MIN;
        int n=nums.size();
        int low=0,high=nums.size()-1;
                while(low+1<n && nums[low]<=nums[low+1])
                 low++;
                while(high-1>=0 && nums[high-1]<=nums[high])
                 high--;
            
              if(low== n-1)
             {
                 return 0;
             }
            for(int i=low;i<=high;i++)
                {
                    Min=min(Min,nums[i]);
                    Max=max(Max,nums[i]);
                }
            
        
        if(Min==INT_MAX || Max==INT_MIN) return 0;
        while(low-1>=0 && nums[low-1]>Min)
        low--;
        while(high+1<=n-1 && nums[high+1]<Max)
        high++;
       
        return high-low+1;
    }
};
