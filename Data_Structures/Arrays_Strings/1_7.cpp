#include <iostream>
#define ROWS 5
#define COLS 4
using namespace std;

// this runs in O(n*m) time with O(n+m) space

void printMat(int* mat,int m,int n)
{
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << mat[i*n + j] << ' ';
      }
      cout << endl;
    }
}

void removeZero(int* mat,int m,int n)
{
  int rows[ROWS] = {0};
  int cols[COLS] = {0};

  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
      {
        if (mat[i*n + j] == 0)
        {
          rows[i] = 1;
          cols[j] = 1;
        }
      }
  }

  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      if (rows[i] == 1 || cols[j] == 1)
      {
        mat[i*n + j] = 0;
      }

    }
  }


}

int main()
{
  int matrix[ROWS][COLS] = {{1,2,0,4},{5,6,7,8},{5,6,7,8},{5,6,7,8},{5,6,7,8}};
  int* matrixPtr = (int*)matrix;

  cout << "The original matrix is: " << endl;
  printMat(matrixPtr,ROWS,COLS);
  cout << "The augmented matrix is: " << endl;
  removeZero(matrixPtr,ROWS,COLS);
  printMat(matrixPtr,ROWS,COLS);

  return 0;
}