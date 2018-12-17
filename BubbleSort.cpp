#include<iostream>
using namespace std;

#define MAX 10
/*
冒泡排序:空间复杂度为o(1),时间复杂度为o(N)
默认排升序
思想：让数组中的数据依次两两相比较，不满足升序就交换，每趟会冒出来一个最大的数据
       剩下的数据接着继续进行比较，直到剩最后一个数据，此时数组中数据的顺序就是升序
*/

void Bubblesort(int *tmp, int len)//这是一个冒泡排序的演示程序
{
	int i, j;
	for (i = 0; i < len; i++)
	{
		for (j = 1; j < len - 1 - i; j++)
		{
			if (tmp[j] > tmp[j + 1])
			{
				int pos = tmp[j];
				tmp[j] = tmp[j + 1];
				tmp[j + 1] = pos;
			}
		}
	}

}
int main()
{
	int data[MAX] = { 0 };
	for (int i = 0; i < MAX; i++)
	{
		data[i] = rand();
	}

	for (int i = 0; i < MAX - 1; i++)
	{
		cout << data[i] << " ";
		
	}
	cout <<"                                 "<<endl;

	Bubblesort(data, MAX);
	
	for (int i = 0; i < MAX - 1; i++)
	{
		cout << data[i]<<" ";
	}
	cout << endl;

	return 0;
}


