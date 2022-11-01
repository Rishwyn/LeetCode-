class Solution {
public:
    vector<string> ch={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string d) {
        
        vector<string> r;
        vector<string> m={};
        string n="";
        
        if(d.size()==0)
            return m;
        LC(d,0,r,n);
        return r;
    }
    void LC(string d,int pos,vector<string>& r,string n)
    {
        if(n.size()==d.size())
        {
            r.push_back(n);
            return;
        }
        int a=d[pos]-'2';
        for(int i=0;i<ch[a].size();i++)
        {
            n.push_back(ch[a][i]);
            LC(d,pos+1,r,n);
            n.pop_back();
        }
    }
};
