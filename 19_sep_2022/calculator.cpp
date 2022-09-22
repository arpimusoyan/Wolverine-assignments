// [*] իրականացնել կալկուլատոր ծրագիր, որը ստանում է որպես մուտք գործողության կոդը և համախատասխան արժեքներն ու կատարում թվաբանական գործողությունները։ Օգտագործել std::map և ֆունկցիաների ցուցիչներ կալկուլատորի գործողություններն իրականացնող ֆունկցիաները գործողության կոդի կամ սիմվոլի հետ արտապատկերելու համար։

#include<iostream>
#include<map>

namespace Calculator
{
  int add(int num1, int num2)
  {
    return num1 + num2;
  }
  int sub(int num1, int num2)
  {
    return num1 - num2;
  }
  int mul(int num1, int num2)
  {
    return num1 * num2;
  }
  int div(int num1, int num2)
  {
    if(num2 == 0)
    return -1;
    else
    return num1 / num2;
  }
} 

int main()
{
int num1;
int num2;
std::cout << "Enter the numbers: " << std::endl;
std::cin >> num1 >> num2;
char sym;
std::cout << "Enter one of these symbols +,-,/,* " << std::endl;
std::cin >> sym;
std::map <char, int(*)(int,int)> cal;
cal['+'] = Calculator::add;
cal['-'] = Calculator::sub;
cal['*'] = Calculator::mul;
cal['/'] = Calculator::div;
std::cout << cal[sym](num1,num2) << std::endl;
}

