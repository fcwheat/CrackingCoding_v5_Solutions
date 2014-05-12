#include <iostream>
#include <string>
using namespace std;

// run time is O(n) with O(1) space using an array as a makeshift hashtable

bool strUnique(string input)
{
  if (input.length() <= 0)
  {
    return 0;
  }
  int charArray[256] = {}; // or 128 if you use just the standard set

  for (int i = 0; i < input.length(); i++)
  {
    if (charArray[(int)input[i]] > 0)
    {
      return 0;
    }
    else
    {
      charArray[(int)input[i]]++;
    }
  }

  return 1;
}


int main()
{
  string inputStr1 = string("Carter was here");
  string inputStr2 = string("abcdefghijklmnopqrstuvwxyz");

  cout << "Testing the string 'Carter was here' returns: " << strUnique(inputStr1) << endl;
  cout << "Testing the string 'abcdefghijklmnopqrstuvwxyz' returns: " << strUnique(inputStr2) << endl;

  return 0;
}

