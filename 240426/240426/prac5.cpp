// 240426
// 2���� ���� �迭

#include <iostream>
using namespace std;

int main()
{
	int x, y;
	int loop_cnt = 1;
	cout << "�� ���� �ڿ����� �Է��ϼ��� : ";
	cin >> x >> y;

	int** arr = new int* [x];

	for (int i = 0; i < x; i++)
	{
		arr[i] = new int[y];
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr[i][j] = loop_cnt;
			loop_cnt++;
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < x; i++) 
	{
		delete[] arr[i];
	}
	
	delete[] arr;


	return 0;
}
