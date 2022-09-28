#include<iostream>

void memset(char* arr, char val, int count)
{
  for (int i = 0; i < count; ++i)
  {
      arr[i] = val;
  }
  std::cout << arr;
  
}
int main()
{
   const int count = 5;
   char arr[count];
   char val = 'a';
   memset(arr,val,count);
}
