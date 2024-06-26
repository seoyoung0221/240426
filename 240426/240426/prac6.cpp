//240426 vector
//prac1

#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int>& vec);

int main() 
{
	vector<int> v(5);
	int max = 0; //INT32_MIN : int형의 최솟값
	int n;
	int value;

	//벡터 입력받기
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 원소(자연수)를 입력하세요 : ";
		cin >> v[i];
	}
	print_vector(v);

	//벡터의 크기 출력
	cout << "벡터의 크기는 " << v.size() << "입니다. \n\n";


	//벡터의 가장 큰 값 찾기
	for (int i = 0; i < 5; i++)
	{
		if (max < v.at(i))
		{
			max = v.at(i);
		}
	}

	//벡터의 가장 큰 값 출력
	cout << "벡터의 가장 큰 값은 " << max << "입니다.\n";

	//벡터의 모든 원소 두 배로 변경
	cout << "벡터의 모든 원소를 두 배로 변경합니다.\n";
	for (int i = 0; i < 5; i++)
	{
		v[i] = v.at(i) * 2;
	}
	print_vector(v);

	//인덱스를 입력 받아 해당 인덱스에 있는 원소 제거
	cout << "몇 번째 원소를 제거할 것인지 선택해 주세요 : ";
	cin >> n;
	cout << n << "번째 원소가 제거됩니다. \n";
	v.erase(v.begin() + n - 1, v.begin() + n);
	print_vector(v);

	//인덱스를 선택하여 해당 인덱스에 새로운 원소 추가
	cout << "인덱스를 선택하고 원소를 추가해주세요(인덱스는 1 ~ 5만 가능) : ";
	cin >> n >> value;
	
	if (n == 5)
	{
		v.push_back(value);
	}
	else {
		v.insert(v.begin() + n - 1, value);
	}
	//cout << "현재 벡터는 \n";
	//cout << "v = {" << v.at(0) << ", " << v.at(1) << ", " << v.at(2) << ", " << v.at(3) << ", " << v.at(4) << "} \n";
	print_vector(v);

	return 0;
}

void print_vector(vector<int>& vec) 
{
	cout << "현재 벡터 : " << "v = {";
	for (int i = 0; i < vec.size(); i++)
	{
		if (i != vec.size() - 1)
		{
			cout << vec.at(i) << ", ";
		}
		else {
			cout << vec.at(i) << "}\n\n";
		}
	}
}