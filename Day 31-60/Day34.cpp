// https://www.interviewbit.com/problems/which-season/


string Solution::solve(int n) {
    string ans;
    if(n==12 || n==1 || n==2)
    {
        ans="Winter";
    }
    else if(n==11 || n==10 || n==9)
    {
        ans="Autumn";
    }
     else if(n==6 || n==7 || n==8)
     {
         ans="Summer";
     }
     else if(n==3 || n==4 || n==5)
     {
         ans="Spring";
     }
     else{
         ans="Invalid";
     }
   
    return ans;
}
