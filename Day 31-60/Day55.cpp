// https://www.interviewbit.com/problems/generate-all-parentheses/


char inverse(char c){

    if(c == ')') return '(';

    if(c == '}') return '{';

    if(c == ']') return '[';

    return '#';

}



int Solution::isValid(string A) {

    stack<char> st;

    

    for(int i = 0; i < A.length(); i++)

    {   

        if(!st.empty() && st.top() == inverse(A[i])) st.pop(); 

        else st.push(A[i]);

    }


    return st.empty();

}
