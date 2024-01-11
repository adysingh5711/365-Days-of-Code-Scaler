// https://www.interviewbit.com/problems/lexicographically-largest-array/discussion/c/lexicographically-largest-array/solved/


vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    int l = 0;
    vector<int> ans;
    while(l < n){
        if(A[l] < A[n-1]){
            break;
        }
        else{
            ans.push_back(A[l]);
        }
        l++;
    }
    for(int i = n-1; i >= l; i--){
        ans.push_back(A[i]);
    }
    return ans;
}
