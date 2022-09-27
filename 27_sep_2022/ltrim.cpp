#include <iostream>
#include <string>

std::string ltrim(std::string str)
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

return str;

}
int main()
{
 std::string str = "    hello" ;
    std::cout << ltrim(str) << std::endl;
    return 0;
}
