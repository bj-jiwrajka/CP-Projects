class Solution
{
public:
     int minimumMoves(vector<vector<int>> &grid)
     {
          int ans = 0;
          for (int i = 0; i < 3; i++)
          {
               for (int j = 0; j < 3; j++)
               {
                    if (grid[i][j] > 1)
                    {
                         int ind = -1, ind2 = -1;
                         for (int k = j + 1; k < 3; k++)
                         {
                              if (grid[i][k] == 0)
                              {
                                   ind = k;
                                   break;
                              }
                         }
                         for (int k = i + 1; k < 3; k++)
                         {
                              if (grid[k][j] == 0)
                              {
                                   ind2 = k;
                                   break;
                              }
                         }
                         if (ind != -1 and ind < ind2)
                         {
                              grid[i][ind] = 1;
                              ans += (ind - j);
                         }
                         else if (ind2 != -1)
                         {
                              grid[ind2][j] = 1;
                              ans += (ind2 - i);
                         }
                         else if (j + 1 < 3)
                         {
                              grid[i][j + 1] = 1;
                              ans++;
                         }
                         else if (i + 1 < 3)
                         {
                              grid[i + 1][j] = 1; // chk
                              ans++;
                         }
                         grid[i][j]--;
                    }
               }
          }

          for (int i = 0; i < 3; i++)
          {
               for (int j = 0; j < 3; j++)
               {
                    if (grid[i][j] > 1)
                    {
                         int ind = -1, ind2 = -1;
                         for (int k = j + 1; k < 3; k++)
                         {
                              if (grid[i][k] == 0)
                              {
                                   ind = k;
                                   break;
                              }
                         }
                         for (int k = i + 1; k < 3; k++)
                         {
                              if (grid[k][j] == 0)
                              {
                                   ind2 = k;
                                   break;
                              }
                         }
                         if (ind != -1 and ind < ind2)
                         {
                              grid[i][ind] = 1;
                              ans += (ind - j);
                         }
                         else if (ind2 != -1)
                         {
                              grid[ind2][j] = 1;
                              ans += (ind2 - i);
                         }
                         else if (j + 1 < 3)
                         {
                              grid[i][j + 1] = 1;
                              ans++;
                         }
                         else if (i + 1 < 3)
                         {
                              grid[i + 1][j] = 1; // chk
                              ans++;
                         }
                         grid[i][j]--;
                    }
               }
          }

          for (int i = 2; i >= 0; i--)
          {
               for (int j = 2; j >= 0; j--)
               {
                    if (grid[i][j] > 1)
                    {
                         int ind = -1, ind2 = -1;
                         for (int k = j - 1; k >= 0; k--)
                         {
                              if (grid[i][k] == 0)
                              {
                                   ind = k;
                                   break;
                              }
                         }
                         for (int k = j - 1; k >= 0; k--)
                         {
                              if (grid[k][j] == 0)
                              {
                                   ind2 = k;
                                   break;
                              }
                         }
                         if (ind != -1 and ind > ind2)
                         {
                              grid[i][ind] = 1;
                              ans += (ind - j);
                         }
                         else if (ind2 != -1)
                         {
                              grid[ind2][j] = 1;
                              ans += (ind2 - i);
                         }
                         else if (j - 1 >= 0)
                         {
                              grid[i][j - 1] = 1;
                              ans++;
                         }
                         else if (i - 1 >= 0)
                         {
                              grid[i - 1][j] = 1; // chk
                              ans++;
                         }
                         grid[i][j]--;
                    }
               }
          }
          return ans;
     }
};