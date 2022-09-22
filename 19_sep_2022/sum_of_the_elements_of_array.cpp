//Գրել ծրագիր, որը կգտնի զանգվածի տարրերի գումարը։

#include <iostream>

int sum_of_elements(int* arr, int size)
{
  int sum = 0;
  for(int i = 0; i < size; ++i)
  {
     sum += arr[i];
       }
       return sum;
}

int main()
{
  int size;
  std::cin >> size;
  int* arr = new int[size];
  for(int i = 0; i < size; ++i)
  {
    std::cin >> arr[i];
  }
  std::cout << sum_of_elements(arr,size) << std::endl;
}
