#include <iostream>

using namespace std;

short FindNumberAlgorithm1(short Arr[10], short NumToFind)
{
	for (short i = 0; i < 10; i++)
	{
		if (Arr[i] == NumToFind)
		{
			return i;
		}
	}
	return -1;
}

short FindNumberAlgorithm2(short Arr[10], short NumToFind)
{
	short Num = -1;
	for (short i = 0; i < 10; i++)
	{
		if (Arr[i] == NumToFind)
		{
			Num = i;
		}
	}
	return Num;
}

int main()
{
	short Arr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };	
	cout << FindNumberAlgorithm1(Arr, 30) << endl;
	cout << FindNumberAlgorithm2(Arr, 30) << endl;

}