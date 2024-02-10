// https://www.interviewbit.com/problems/positive-negative/


vector<int> Solution::solve(vector<int> &A) {
    vector<int> v;
    int p=0, n=0;
    for(int i=0; i<A.size(); i++)
    {
        if(A[i]>0)
        {
            p++;
        }
        else if(A[i]<0)
        {
            n++;
        }
    }
    v.push_back(p);
    v.push_back(n);
    return v;   
}
