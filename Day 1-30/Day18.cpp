// https://www.interviewbit.com/problems/find-variance/

string Solution::solve(vector<int> &a) {
    int n=a.size();
    double sum=0;
    for(int x: a) sum+=x;
    double avg=sum/n;
    double var=0;
    for(int x:a) var+=pow(x-avg,2);
    var/=n;
    var=(var*100+0.5);
    int ans=var;
    var=ans/100.0;
    string res=to_string(var);
    for(int i=0;i<4;i++) res.pop_back();
    return res;
}
