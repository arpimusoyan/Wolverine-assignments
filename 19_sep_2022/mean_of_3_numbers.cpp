//Գրել ծրագիր, որը կհայտարարի երեք թվային փոփոխականներ և կհաշվի դրանց թվաբանական միջինը։
#include<iostream>

int main()
{
  int num1;
  int num2; 
  int num3;
  std::cout << "Enter the numbers: " << std::endl;
  std::cin >> num1 >> num2 >> num3;
  std::cout << "The mean of these numbers is: " << (num1+num2+num3) / 3 << std::endl;

}
