// https://www.interviewbit.com/problems/odd-even-rule/


int Solution::solve(vector<int> &A, int B, int C) {
    int ans=0;
    for(int i=0; i< A.size(); i++){
        if((B%2)==0)
        
        {
            if((A[i]%2) !=0 ) {
                ans = ans + C;
            }
        }
        
        else {
            if((A[i]%2)==0) {
                ans = ans + C;
            }
        }
    }
    return ans;  
}
