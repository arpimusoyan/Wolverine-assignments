//Իրականացնել ծրագիր, որտեղ առանց ցիկլի օգտագործման կկազմակերպեք ցիկլ։ Օրինակ օգտագործողը մուտքագրում է թիվ և ձեր ծրագիրը տպում է 0-ից մինչև այդ թվերը՝ առանց ցիկլի կիրառման։

#include <iostream>
void foo(int num)
{
    if(num == 0)
    return;
    foo(num > 0 ? --num : ++num);
    std::cout << num << std::endl;
}
int main()
{
    int num;
    std::cout << "Enter the number: " << std::endl;
    std::cin >> num;
    foo(num > 0 ? num + 1 : num - 1);
}
