// https://www.interviewbit.com/problems/total-moves-for-bishop/


int Solution::solve(int A, int B) {
    if(A==1||B==8||B==1||A==8){
        return 7;
    }
    if(A==2||B==7||B==2||A==7){
        return 9;
    }
    if(A==3||B==6||B==3||A==6){
        return 11;
    }
    return 13;
}
