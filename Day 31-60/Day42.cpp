// https://www.interviewbit.com/problems/palindromic-words/


int Solution::solve(string A) {
    stack<string>st;
     string str="";
    for(int i=0;i<A.length();i++){
         if(A[i]==' '){
            st.push(str);
            str="";
         }else{
             str+=A[i];
         }
    }
    st.push(str);
    int count=0;
    while(!st.empty()){
        string S=st.top();
        reverse(S.begin(),S.end());
        if(S==st.top()){
            count++;
        }
        st.pop();
    }
 return count;
}
