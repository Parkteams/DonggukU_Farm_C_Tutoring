#include<iostream>
#include<algorithm>
using namespace std;

int N = 0;
int in[1001] = { 0 };
int out[1001] = { 0 };
int person[1001] = { 0 }; //�ð��� ��ġ�� ����������
int fire[100] = { 0 };  //� ��� �ذ������� 0�� �ƴ� �ð����

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> in[i] >> out[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = in[i]; j < out[i]; j++)
		{
			person[j]++;
		}
	}

	//���� �ذ��غ��� �� 0�� ���ڰ� ���� �����ŷ�
	for (int i = 0; i < N; i++)
	{
		//�ذ��� ����� ����
		for (int j = in[i]; j < out[i]; j++)
		{
			person[j]--;
		}
		//�ذ������� 0�� �ƴѰ� ���ϱ�
		for (int j = 1; j <= 1000; j++)
		{
			if (person[j] >= 1) fire[i]++;
		}

		//���󺹱�
		for (int j = in[i]; j < out[i]; j++)
		{
			person[j]++;
		}
	}

	//fire[i]�߿� �ִ밪 ���ϱ�
	int Max = 0;
	for (int i = 0; i < N; i++)
	{
		Max = max(fire[i], Max);
	}

	cout << Max;

	return 0;
}