// https://www.interviewbit.com/problems/first-index/
vector<int> Solution::solve(vector<int> &a, vector<int> &b) {
    vector<int> v;
    for(int i=0; i<b.size(); i++){
        int ans=-1;
        for(int j=0; j<a.size(); j++){
            if(a[j]>=b[i]){
                ans=j;
                break;
            }
        }
        v.push_back(ans);
    }
    return v;
   
}
