// [*] իրականացնել կալկուլատոր ծրագիր, որը ստանում է որպես մուտք գործողության կոդը և համախատասխան արժեքներն ու կատարում թվաբանական գործողությունները։ Օգտագործել std::map և ֆունկցիաների ցուցիչներ կալկուլատորի գործողություններն իրականացնող ֆունկցիաները գործողության կոդի կամ սիմվոլի հետ արտապատկերելու համար։

#include<iostream>
#include<map>

namespace Calculator
{
  float add(float num1, float num2)
  {
    return num1 + num2;
  }
  float sub(float num1, float num2)
  {
    return num1 - num2;
  }
  float mul(float num1, float num2)
  {
    return num1 * num2;
  }
  float div(float num1, float num2)
  {
    if(num2 == 0)
    return -1;
    else
    return num1 / num2;
  }
} 

int main()
{
float num1;
float num2;
std::cout << "Enter the numbers: " << std::endl;
std::cin >> num1 >> num2;
char sym;
std::cout << "Enter one of hese symbols +,-,/,* " << std::endl;
std::cin >> sym;
std::map <char, float(*)(float,float)> cal;
cal['+'] = Calculator::add;
cal['-'] = Calculator::sub;
cal['*'] = Calculator::mul;
cal['/'] = Calculator::div;
std::cout << cal[sym](num1,num2) << std::endl;
}

