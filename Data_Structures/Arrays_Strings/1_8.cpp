#include <iostream>
#include <string>
using namespace std;

// string::find runs in O(s1^2) time and this
// algorithms uses O(s1+s1) space
bool rotation(string s1, string s2)
{
  int len = s2.length();

  if (len == s1.length() && len > 0)
  {
    string s3 = s1+s1;
    return s3.find(s2) != string::npos;
  }

  return 0;

  /* below is a O(s1^2) time with O(1) space without using a substring function

  if (s1.length() != s2.length()) return 0;

  for (int i = 0; i < s2.length(); i++)
  {

    int count = 0;

    if (s2[i] == s1[0])
    {
      int start = i;
      for (int j = 0; j < s1.length(); j++)
      {
        if (s2[start] != s1[j])
        {
          break;
        }
        else
        {
          start++;
          if (start == s1.length())
          {
            start = 0;
          }
        }
        count++;
      }
      if (count == s1.length())
      {
        return 1;
      }
    }
  }

  return 0;
  */
}



int main()
{
  string s1 = string("waterbottle");
  string s2 = string("ottlewaterb");

  cout << "Is " << s2 << " a rotation of " << s1 << ": ";
  cout << rotation(s1,s2) << endl;


  string s3 = string("orange");
  string s4 = string("angeob");

  cout << "Is " << s3 << " a rotation of " << s4 << ": ";
  cout << rotation(s3,s4) << endl;

  return 0;
}