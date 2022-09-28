#include<iostream>

void memcpy(char* arr, char* arr1, int count)
{
  int size = 0;
  int j = 0;
  while (arr1[j] != '\0')
  {
    size++;
    ++j;
  }
  for (int i = 0; i < count; ++i)
  {
    arr1[i] = arr[i];
  }
  arr1[count] = '\0';
  for (int i = 0; i < count; ++i)
  {
    std::cout << arr[i];
  }

}
int main()
{  
  const int count = 6;
  char src[] = "hello";
  char dest[count];
  memcpy(src,dest,count);
}
