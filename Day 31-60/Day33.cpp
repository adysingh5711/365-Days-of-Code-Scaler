//https://www.interviewbit.com/problems/lowest-common-multiple-lcm/ 


long Solution::solve(int A, int B) {
    return (A*1L*B*1L)/(__gcd(A,B));
}
