//Գրել ծրագիրը, որը կգտնի երկու փոփոխականների մաքսիմումը։

#include<iostream>

int main()
{
   int num1;
   int num2;
   std::cout << "Enther the numbers: " << std::endl;
   std::cin >> num1 >> num2;
   if(num1 == num2)
   {
    std::cout << "The numbers are equal" << std::endl;
   }
   else if(num1 > num2){
   std::cout << "Maximum number is: " << num1 << std::endl;
   }
   else
   {
    std::cout << "Maximum number is: " << num2 << std::endl;
   }

}
