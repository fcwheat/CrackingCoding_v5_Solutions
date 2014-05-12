#include <iostream>
#include <string>
using namespace std;

// run time is O(n) with O(1) space since we do the replacement in place

void replace(char* str, int len)
{
    char* trueEnd = str;
    char* end = str;
    int count = 0;

    // get the end of the string ignoring white space at the end
    while (count != len-1)
    {
      end++; 
      count++;
    }

    // get to the end of the string with white space included
    while (*trueEnd)
    {
      trueEnd++;
    }
    trueEnd--;


    // move backwards replacing as you go
    while(count >= 0)
    {

      if (*end == ' ')
      {
        *trueEnd = '0';
        trueEnd--;
        *trueEnd = '2';
        trueEnd--;
        *trueEnd = '%';
        trueEnd--;

        end--;

      }
      else
      {
        *trueEnd = *end;
        trueEnd--;
        end--;
      }
      count--;
    }
}

int main()
{

  char str[] = {"c ar t    "};
  char* strPtr = str;
  int len = 6; // just assume that this is given

  cout << "Before replacement: " << str << endl;
  replace(strPtr, len);
  cout << "After replacement: " << str << endl;
  return 0;
}