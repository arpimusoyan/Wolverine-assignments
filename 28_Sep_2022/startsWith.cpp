#include<iostream>
#include<string>

bool startsWith(std::string str, std::string t)
{
  int count = 0;
  int size = t.size();
  for(int i = 0; i < t.size(); ++i)
  {
      if (str[i] == t[i])
      {
        count++;
      }
      if (count == size)
      {
        return true;
      }
  }
    return false;
  
}
int main()
{
  std::string str = "hello world";
  std::string t = "hell";
  std::cout << startsWith(str, t);
}
