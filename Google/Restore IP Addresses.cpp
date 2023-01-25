class Solution {
public:
   
   bool check(string s)
   {
       if(s.size()==1)
       return true;
       if(s.size()>3|| s[0]=='0')
       return false;
       if(stoi(s)>255)
       return false;


       return true;
       
   }
    vector<string> restoreIpAddresses(string s) {
        
        vector<string> ans;
        if(s.size()>12)
        return ans;
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=3;j++)
            {
                for(int k=1;k<=3;k++)
                {
                    if(i+j+k<s.size() && i+j+k+3>=s.size())
                    {
                       string a=s.substr(0,i);
                        
                        string b=s.substr(i,j);
                        string c=s.substr(i+j,k);
                        string d=s.substr(i+j+k);
                        if(check(a) && check(b) && check(c) && check(d))
                        {
                            ans.push_back(a+"."+b+"."+c+"."+d);
                        }
                    }
                }
            }
        }
        return ans;
    }
};
