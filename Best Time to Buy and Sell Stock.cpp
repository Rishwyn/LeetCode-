class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0||prices.size()==1)
            return 0;
        int min=prices[0],pr,maxpr=0;
        for(int i=1;i<prices.size();i++)
        {
            pr=prices[i]-min;
            if(min>prices[i])
                min=prices[i];
            if(pr>0&&maxpr<pr)
                maxpr=pr;
        }
        return maxpr;
    }
};
