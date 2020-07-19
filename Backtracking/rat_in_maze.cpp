//rat in a maze pronlem: backtracking soln prateek bhaiya


#include<bits/stdc++.h>
using namespace std;

bool rainmaze(char maze[10][10], int soln[10][10], int i, int j, int m, int n)
{
  if (i == m && j == n)
  {
    soln[i][j] = 1;
    //print the path
    for (int ii = 0; ii <= m; ii++)
    {
      for (int jj = 0; jj <= n ; jj++)
      {
        cout << soln[ii][jj];
      }
      cout << endl;
    }
    cout << endl;

    return true;
  }

  if (i > m || j > n)
  {
    return false;
  }
  if (maze[i][j] == 'X')
  {
    return false;
  }

  //asume soln exist

  soln[i][j] = 1;
  bool right = rainmaze(maze, soln, i, j + 1, m, n);
  bool left = rainmaze(maze, soln, i + 1, j, m, n);

  soln[i][j] = 0;
  if (right || left)
  {
    return true;
  }

  return false;


}



int main()
{
  char maze[10][10] = {"0X00", "X0X0", "000X", "0X00"};
  int soln[10][10] = {0};
  int m = 4, n = 4;
  bool ans = rainmaze(maze, soln, 0, 0, m - 1, n - 1);

  if (ans == false)
  {
    cout << "no path exist";
  }
  return 0;
}