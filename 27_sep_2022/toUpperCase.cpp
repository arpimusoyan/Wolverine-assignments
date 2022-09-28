#include<iostream>
#include<string>

std::string toUpperCase(std::string str)
{
   for(int i = 0; i < str.size(); ++i)
   {
    if (str[i]>= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32;
    }
   }
   return str;
}

int main()
{

std::string str;
std::cin >> str;
std::cout << toUpperCase(str);

}
