// https://www.interviewbit.com/problems/meeting-point/


bool comp(vector<int> x,vector<int> y){
    if(x[1]!= y[1])
        return x[1] <y[1];
    else
        return x[0] <y[0];
}

int Solution::solve(vector<vector<int> > &A) {
    sort(A.begin(),A.end());
    pair<int,int> a,b;
    a.first=A[0][0];
    a.second=A[0][1];
    int dis=0;
    sort(A.begin(),A.end(),comp);
    b= make_pair(A[0][0],A[0][1]);
    // cout<<a.first<<" "<<a.second<<" "<<b.first<<" "<<b.second<<" ";
    dis= abs(a.first - b.first) + abs(a.second-b.second);
    return dis;
   
}
