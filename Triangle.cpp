class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> a=triangle[triangle.size()-1];
        for(int i=triangle.size()-2;i>=0;i--)
            {
            for(int j=0; j<=i; j++)
                {
                a[j]=min(a[j+1]+triangle[i][j],a[j]+triangle[i][j]);
            }
        }
        return a[0];
        }
                         
                         };
