#include <iostream>
#include <string>
std::string rtrim (std::string str)
{
    
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
    std::string str = "hello     " ;
    std::cout << rtrim(str) << std::endl;
    return 0;
}

