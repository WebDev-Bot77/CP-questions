class Solution {
public:
    int numRescueBoats(vector<int>& A, int limit) {
        sort(A.begin(), A.end());
        int n = A.size();
        int i = 0;
        int j = n-1;
        int res = 0;
        while(i<=j){
            if(A[i]+A[j]<=limit){
                i++;
                j--;
                res++;
            }
            else{
                j--;
                res++;
            }
        }
        return res;
    }
};