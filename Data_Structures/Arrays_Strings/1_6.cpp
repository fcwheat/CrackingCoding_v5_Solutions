#include <iostream>
using namespace std;

// this runs in O(n^2) time with O(1) space

void printMat(int* mat,int m,int n)
{
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << *mat << ' ';
        mat++;
      }
      cout << endl;
    }
}

void rotate(int* matrix,int n)
{
    for (int layer = 0; layer < n/2; layer++)
    {
      int first = layer;
      int last = n-1-layer;
      for(int i = first; i < last; ++i) {
        int offset =  i - first;
        // save top
        int top = matrix[first*n + i];
        matrix[layer*n + i] = matrix[(last-offset)*n + first];

        // bottom to left
        matrix[(last-offset)*n + first] = matrix[last*n + (last-offset)];

        // right to bottom
        matrix[last*n + (last-offset)] = matrix[i*n + last];

        // top to right
        matrix[i*n + last] = top;

        }
    }
}

int main()
{

  int mat[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  int *matPtr = (int*)mat;
  cout << "The original matrix is: " << endl;
  printMat(matPtr,4,4);
  rotate(matPtr,4);
  cout << "The rotated matrix is: " << endl;
  printMat(matPtr,4,4);
  return 0;
}