// https://www.interviewbit.com/problems/bit-flipping/


int Solution::solve(int A) {
return pow(2,floor(log2(A))+1)-A-1;
}
