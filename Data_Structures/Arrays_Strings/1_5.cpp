#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// run time is O(n) with O(n) space

string intToString(int value) {
    string temp;
    stringstream convert;
    convert << value;
    temp = convert.str();
    return temp;
}




string compression(string str)
{
  int len = 0;
  string comp = string();
  char last = str[0];
  int count = 1;
  comp += str[0];

for (int i = 1; i < str.length(); i++)
{
  if (str[i] != last)
  {
    comp.append(intToString(count));
    comp += str[i];
    count = 1;
    last = str[i];
    len += 2;
    if (len > str.length())
    {
      return str;
    }
  }
  else
  {
    count++;
  }
}
  comp.append(intToString(count));
  return comp;

}

int main()
{

  string str = string("aaabbbaabbbbbbss");
  cout << "Original string is: " << str <<endl;
  cout << "Compressed string is: " << compression(str) << endl;
  return 0;
}