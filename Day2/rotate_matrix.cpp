// You are given an n x n 2D matrix representing an image.

// Rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place,
// which means you have to modify the input 2D matrix directly.
// DO NOT allocate another 2D matrix and do the rotation.
// submitted at : https://leetcode.com/problems/rotate-image/

class Solution
{
public:
	void rotate(vector<vector<int>>& matrix)
	{

		int m, n;
		m = matrix.size();
		n = m;
		for (int i = 0; i < m; i++)  //matrix transpose
			for (int j = i + 1; j < n; j++)
			{
				swap(matrix[i][j], matrix[i][j]);
			}

		for (int i = 0; i < m; i++)
		{
			reverse(matrix[i].begin(), matrix.end());
		}

	}
};

