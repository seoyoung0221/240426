// 240426
// 2���� ���� �迭

#include <iostream>
using namespace std;

int main()
{
	int x, y;
	int loop_cnt = 1;
	int error = 0;

	// �Է� �ޱ�
	cout << "ù��° �ڿ����� �Է��ϼ��� : ";
	cin >> x;
	cout << "�ι�° �ڿ����� �Է��ϼ��� : ";
	cin >> y; 

	// ���� �迭 �����
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

	// ���� �迭 ���
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	// ���� �迭 ����
	for (int i = 0; i < x; i++) 
	{
		delete[] arr[i];
	}
	
	delete[] arr;


	return 0;
}
