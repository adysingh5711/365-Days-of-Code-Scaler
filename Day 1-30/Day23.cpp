// https://www.interviewbit.com/problems/chips-factory/


vector<int> Solution::solve(vector<int> &A) {
   
    int zi=-1;
    for(int i=0;i<A.size();i++) if(A[i]==0) {zi=i;break;}
   
    //edge case
    if(zi==-1) return A;
   
    for(int i=zi+1;i<A.size();i++) if(A[i]!=0) {swap(A[i],A[zi]); zi++;}
   
     return A;
   
}
