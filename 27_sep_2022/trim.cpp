#include <iostream>
#include <string>

std::string trim(std::string str)
{
  int count = 0;
  for(int i = 0; i < str.size(); i++)
  {
   if(str[i] == ' ')
   {
     count++;
    }
   else break;
  }
  str.erase(0,count);
    
    for(int i = str.size()-1; i >= 0; --i)
     { 
    if(str[i] == ' ')
    {
      str.pop_back();
    }
     else break;
     }
    return str;
}
int main()
{
    std::string str = "    hello   " ;
    std::cout << trim(str);
    return 0;
}

