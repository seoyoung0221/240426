//240426 vector
//prac1

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	vector<int> v(5);
	int max = 0;
	int n; 
	int value;

	//���� �Է¹ޱ�
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��° ����(�ڿ���)�� �Է��ϼ��� : ";
		cin >> v[i];
	}

	cout << "v = {" << v.at(0) << ", " << v.at(1) << ", " << v.at(2) << ", " << v.at(3) << ", " << v.at(4) << "} \n\n";

	//������ ũ�� ���
	cout << "������ ũ��� " << v.size() << "�Դϴ�. \n\n";


	//������ ���� ū �� ã��
	for (int i = 0; i < 5; i++)
	{
		if (max < v.at(i))
		{
			max = v.at(i);
		}
	}

	//������ ���� ū �� ���
	cout << "������ ���� ū ���� " << max << "�Դϴ�.\n";

	//������ ��� ���� �� ��� ����
	cout << "������ ��� ���Ҹ� �� ��� �����մϴ�.\n";
	for (int i = 0; i < 5; i++)
	{
		v[i] = v.at(i) * 2;
	}

	cout << "����� ���͸� ����մϴ�. \n";
	cout << "v = {" << v.at(0) << ", " << v.at(1) << ", " << v.at(2) << ", " << v.at(3) << ", " << v.at(4) << "} \n\n";

	//�ε����� �Է� �޾� �ش� �ε����� �ִ� ���� ����
	cout << "�� ��° ���Ҹ� ������ ������ ������ �ּ��� : ";
	cin >> n;
	cout << n << "��° ���Ұ� ���ŵ˴ϴ�. \n";
	v.erase(v.begin() + n - 1, v.begin() + n);
	cout << "���� ���ʹ� \n";
	cout << "v = {" << v.at(0) << ", " << v.at(1) << ", " << v.at(2) << ", " << v.at(3) << "} \n\n";

	//�ε����� �����Ͽ� �ش� �ε����� ���ο� ���� �߰�
	cout << "�ε����� �����ϰ� ���Ҹ� �߰����ּ��� : (�ε����� 1 ~ 5�� ����)";
	cin >> n >> value;
	
	if (n == 5)
	{
		v.push_back(value);
	}
	else {
		v.insert(v.begin() + n - 1, value);
	}
	cout << "���� ���ʹ� \n";
	cout << "v = {" << v.at(0) << ", " << v.at(1) << ", " << v.at(2) << ", " << v.at(3) << ", " << v.at(4) << "} \n";

	return 0;
}
