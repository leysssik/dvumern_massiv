#include <iostream>
#include <string>
#include<windows.h>
using namespace std;
int main()
{
	int arr[3][3] = { {-1, 2, 8}, {-6,5,9}, {11,4,6} };
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++) 
		{
			cout << arr[i][j] <<"\t";
		}
		cout << endl;
	}
	int min_ = arr[0][0];
	int max_ = arr[0][0];
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (min_ > arr[i][j])
			{
				min_ = arr[i][j];
			}
			else
				if(max_ < arr[i][j])
			{
				max_ = arr[i][j] ;
			}
		}
	}
	cout << "min = " << min_ << endl;
	cout << "max = " << max_ << endl;
}