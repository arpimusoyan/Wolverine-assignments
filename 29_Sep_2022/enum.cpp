#include <iostream>
#include <string>
#include <map>

enum  class Colors{Red,Green,Black,White,Orange};
std::string mp(Colors c)
{
    std::map<Colors,std::string> mp;
    mp[Colors::Red] = "Red";
    mp[Colors::Green] = "Green";
    mp[Colors::Black] = "Black";
    mp[Colors::White] = "White";
    mp[Colors::Orange] = "Orange";
  return mp[c];
}
 Colors mp(std::string str)
{
  std::map<std::string,Colors> mp;
    mp["Red"] = Colors::Red;
    mp["Green"] = Colors::Green;
    mp["Black"] = Colors::Black;
    mp["White"] = Colors::White;
    mp["Orange"] = Colors::Orange;  
 return mp[str];
}

int main()
{ 
  std::cout << mp(Colors::Black) << std::endl;
  std::cout <<  static_cast<std::underlying_type<Colors>::type>(mp("White")) << std::endl; 
}

