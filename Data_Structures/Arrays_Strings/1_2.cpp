#include <iostream>
using namespace std;

// this runs in O(n) time with O(1) space

void reverse(char* str)
{
  
  char* end = str;
  while (*end)
  {
    end++;
  }
  end--;

  while (str < end)
  {
    char temp = *str;
    *str = *end;
    *end = temp;

    str++;
    end--;
  }

}



int main()
{

  char str[] = "Carter was here";
  char* strPtr = str;

  cout << "Before the reversal: " << str << endl;

  reverse(strPtr);

  cout << "After the reversal: " << str << endl;

  return 0;
}