#include<iostream>
using namespace std;

#define MAX 10
/*
ð������:�ռ临�Ӷ�Ϊo(1),ʱ�临�Ӷ�Ϊo(N)
Ĭ��������
˼�룺�������е���������������Ƚϣ�����������ͽ�����ÿ�˻�ð����һ����������
       ʣ�µ����ݽ��ż������бȽϣ�ֱ��ʣ���һ�����ݣ���ʱ���������ݵ�˳���������
*/

void Bubblesort(int *tmp, int len)//����һ��ð���������ʾ����
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


