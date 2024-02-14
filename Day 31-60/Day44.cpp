// https://www.interviewbit.com/problems/unique-binary-search-trees/


vector < TreeNode * >rec (int l, int r)
{
  if (l > r)
	return
	{
	NULL};
  vector < TreeNode * >ans;
  for (int i = l; i <= r; i++)
	{
	  vector < TreeNode * >left = rec (l, i - 1);
	  vector < TreeNode * >right = rec (i + 1, r);
	  int m = left.size ();
	  int n = right.size ();
	  for (int x = 0; x < m; x++)
		{
		  for (int y = 0; y < n; y++)
			{
			  TreeNode *node = new TreeNode (i);
			  node->left = left[x];
			  node->right = right[y];
			  ans.push_back (node);
			}
		}
	}
  return ans;
}

vector < TreeNode * >Solution::generateTrees (int A)
{
  int
	i = 1;
  int
	j = A;
  return rec (i, j);
}
