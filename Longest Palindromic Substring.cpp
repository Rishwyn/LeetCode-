class Solution {
public:
string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int> (n,0));
        string max(1,s[0]);
       
        for(int i=1;i<n;i++)
        {
           dp[i-1][i-1]=1;
            if(s[i-1]==s[i])
            {
                dp[i-1][i]=1;
                max.assign(s.begin()+i-1,s.begin()+i+1);
              
            }
        }
        int k=2;
        while(k<n)
        {
        for(int start=0;start+k<n;start++)
        {
            
            if(s[start]==s[start+k]&&dp[start+1][start+k-1]==1)
            {
                dp[start][start+k]=1;
                if(max.size()<k+1)
                max.assign(s.begin()+start,s.begin()+start+k+1);
                
            }
            
                       
        }
            k++;
        }        
        return max;
    }
        
};
