class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>> r;
        vector<int> n;
        cr(r,c,t,n,0);
        return r;
    }
    void cr(vector<vector<int>>& r,vector<int>& c,int t,vector<int>& n,int pos)
    {   if(t==0)
    {   
        r.push_back(n);
        
        return;
    }
     if(t<0)
     {
       
         return;
     }
        for(int i=pos;i<c.size();i++)
        {   n.push_back(c[i]);
            cr(r,c,t-c[i],n,i);
         n.pop_back();
        }
    }
};
