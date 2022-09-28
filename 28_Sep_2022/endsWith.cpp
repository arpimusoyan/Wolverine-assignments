#include<iostream>
#include<string>

bool endsWith(std::string str, std::string t)
{
  int count = 0;
  int size = t.size();
  for(int i = str.size()-1, j = t.size() - 1; j >= 0; --i, --j)
  {
      if (str[i] == t[j])
      {
        count++;
      }
      if (count == t.size())
      {
        return true;
      }
  }
    return false;
  
}
int main()
{
  std::string str = "hello world";
  std::string t = "world";
  std::cout << endsWith(str, t);
}
