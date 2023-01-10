class Solution {
public:
    void combination(int ind,int target,vector<int>& candidates,vector<vector<int>>& v,vector<int>& ds,int k)
    {
        
     if(k==0) 
    {
        if(target==0)
        {
     v.push_back(ds);
     return ;
    }
    }
    for(int i=ind;i<candidates.size();i++)
    {
        if(i>ind && candidates[i]==candidates[i-1])
        continue;
    
        if(candidates[i]>target)
        break;

        ds.push_back(candidates[i]);
        combination(i+1,target-candidates[i],candidates,v,ds,k-1);
        ds.pop_back();

    }
    }
    vector<vector<int>> combinationSum3(int k, int target) {
        vector<int> ds;
        vector<vector<int>> v;
        vector<int> candidates={1,2,3,4,5,6,7,8,9};
        combination(0,target,candidates,v ,ds ,k);
        return v;
    }
};
