//Իրականացնել ֆունկցիա, որը ստանում է թվային զանգված և սորտավորում այն՝ օգտագործելով insertion sort ալգորիթմը։

#include <iostream> 
​
void insertionSort(int* arr, int size)
{
	for (int i = 1, j, k; i < size; i++)
	{
		k = arr[i];
​
		for (j = i-1; j >= 0 && arr[j] > k; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = k;
	}
}
​
int main()
{
    int size;
    std::cout << "Enter the array size: ";
    std::cin >> size;
    int* arr = new int[size];
    std::cout << "Enter the array element" << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
	insertionSort(arr, size);
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
​
	delete[] arr;
}
