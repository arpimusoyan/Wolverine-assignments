#include<iostream>
#include<string>

std::string toLowerCase(std::string str)
{
   for(int i = 0; i < str.size(); ++i)
   {
    if (str[i]>= 'A' && str[i] <= 'Z')
    {
      str[i] = str[i] + 32;
    }
   }
   return str;
}

int main()
{

std::string str;
std::cin >> str;
std::cout << toLowerCase(str);

}
