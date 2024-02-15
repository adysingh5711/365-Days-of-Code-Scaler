// https://www.interviewbit.com/problems/best-time-to-buy-and-sell-stocks-ii/


int f(int index, int buy, const vector<int> &A, vector<vector<int>> &dp)
{

  if (index >= A.size()) // Days exhausted so no profit.

    return 0;

  if (dp[index][buy] != -1)

    return dp[index][buy];

  int profit;

  if (buy) // If I have a buy option open on that day,( I dont have any stock on me) then either I can buy or let it go

    profit =
        max(-A[index] + f(index + 1, 0, A, dp), 0 + f(index + 1, 1, A, dp));

  else // If I dont have a buy option then I need to sell what I have or dont sell

    profit =
        max(+A[index] + f(index + 1, 1, A, dp), 0 + f(index + 1, 0, A, dp));

  return dp[index][buy] = profit;
}

int Solution::maxProfit(const vector<int> &A)
{

  int n = A.size();

  vector<vector<int>> dp(n, vector<int>(2, -1));

  return f(0, 1, A, dp);
}
