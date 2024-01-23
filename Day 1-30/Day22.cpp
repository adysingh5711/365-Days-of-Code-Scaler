// https://www.interviewbit.com/problems/collatz-conjecture/ 


long Solution::solve(int A, int B) {
    long x=A;
    for(int i=0; i<B-1; i++){
        if(x%2 ==1){
            x=x*3+1;
        }
        else{
            x=x/2;
        }
    }
    return x;
}
