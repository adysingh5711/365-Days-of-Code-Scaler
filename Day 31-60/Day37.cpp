// https://www.interviewbit.com/problems/pangram-check/


int Solution::solve(vector<string> &A) {
   
    int size = A.size();
   
    set<char> s;
   
    for(int i = 0; i < size; i++){
        for(auto letter : A[i]){
            s.insert(letter);
        }
    }
   
    if(s.size() < 26){
        return 0;
    }
    else {
        return 1;
    }
 }
