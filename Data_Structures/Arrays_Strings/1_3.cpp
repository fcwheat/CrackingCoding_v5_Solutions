#include <iostream>
#include <string>
using namespace std;

// this runs in O(n+m) time with O(1) space where n and m are the lengths
// of the two strings

bool permStr(string s1, string s2)
{

  char s1A[256] = {};

  if (s1.length() != s2.length())
  {
    return 0;
  }

  for (int i = 0; i < s1.length(); i++)
  {
    s1A[(int)s1[i]]++;
  }
  for (int i = 0; i < s2.length(); i++)
  {
    s1A[(int)s2[i]]--;
    if (s1A[(int)s2[i]] < 0)
    {
      return 0;
    }
  }

  return 1;
}

int main()
{

  string s1 = string("Carter");
  string s2 = string("arCtre");

  cout << "Testing if " << s2 << " is a permutation of " << s1 << " : " << permStr(s1,s2) << endl;

  string s3 = string("SamIam");
  string s4 = string("Helloo");

  cout << "Testing if " << s4 << " is a permutation of " << s3 << " : " << permStr(s3,s4) << endl;




  return 0;
}