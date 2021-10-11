class Solution {
public:
    bool canPlaceFlowers(vector<int>& A, int n) {
        int vs = A.size();
        if(vs==1 && A[0]==0 && n<=1){
            return true;
        }
        for(int i=0; i<vs; i++){
            if(i==0 && A[i]==0 && i+1<vs && A[i+1]!=1){
                A[i]=1;
                n--;
            }
            else if(i==vs-1 && A[i]==0 && i-1>= 0 && A[i-1]!=1){
                A[i]=1;
                n--;
            }
            else if(A[i]==0){
                if(i-1>=0 && A[i-1]!=1){
                    if(i+1<vs && A[i+1]!=1){
                        A[i]=1;
                        n--;
                    }
                }
            }
            if(n==0){
                break;
            }
        }
        if(n<=0){
            return true;
        }
        return false;
    }
};