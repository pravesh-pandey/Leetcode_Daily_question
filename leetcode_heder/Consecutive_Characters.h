class Solution {
public:
    int maxPower(string s) 
    {
        int max=1,n=s.size(),ans=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
                max++;
            else
                max=1;
            if(max>ans)
                ans=max;
        }
        return ans;
        
    }
};