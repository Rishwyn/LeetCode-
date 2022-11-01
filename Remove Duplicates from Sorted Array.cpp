class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        int count = 0,n=A.size();
        if(n==1)
            return 1;
        if(n==0)
            return 0;
for(int i = 1; i < n; i++){
    if(A[i] != A[i-1]) 
       A[count++]=A[i-1];
    
}
        A[count++]=A[n-1];
return count;
    }
};
