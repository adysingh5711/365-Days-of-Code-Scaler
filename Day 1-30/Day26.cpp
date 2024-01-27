// https://www.interviewbit.com/problems/greater-than-all/


int Solution::solve(vector<int> &A) {

    int count = 1;
    int maxGlobal = A[0];

    for(int i=1; i<A.size(); i++){
        if(A[i] > maxGlobal){
            maxGlobal = A[i];
            count++;
        }
    }
    return count;
}
