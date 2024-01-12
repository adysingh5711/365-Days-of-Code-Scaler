// https://www.interviewbit.com/problems/smaller-or-equal-elements/discussion/


int Solution::solve(vector<int> &A, int B) {
    int start = 0;
    int end = A.size()-1;
    while(start<=end){
        int mid = start + (end -start)/2;
        if(A[mid]>B){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return start;
}
