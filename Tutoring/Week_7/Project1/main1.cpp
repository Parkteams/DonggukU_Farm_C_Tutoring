#include <iostream>
using namespace std;

//�����
//�迭�� ���������� �̿��� �����

// ��ȹ
// 1. ����ĭ�� �̸� �ְ�ʹ�.
// -> �ڿ� ���ڸ� ���̱Ⱑ ������
// 2. �Լ�ȭ �ϰ�ʹ�.
// -> �ߺ����ڵ带 ���������� ����ϱ� ���ϰ� �ϱ�����

char str1[] = "*****";
char str2[] = "     ";

/*LT
*****
****
***
**
*

*/
/*RT
*****
 ****
  ***
   **
	*
*/
/*LB
*
**
***
****
*****

*/
void LeftTop(int i)
{
	//		  star		space
	cout << str1 + i << str2 + 5 - i;
	// i = 0
	//      str1 + 0 << str2 + 5
	// i = 1
	//      str1 + 1 << str2 + 4
	// i = 2
	//      str1 + 2 << str2 + 3
	// i = 3
	//      str1 + 3 << str2 + 2
}
///
void RightTop(int i)
{
	//       space			star
	cout << str2 + 5 - i << str1 + i;
}
//
void LeftBottom(int i)
{
	//       star			space
	cout << str1 + 4 - i << str2 + 1 + i;
}
//
void RightBottom(int i)
{
	//       space			star
	cout << str2 + 1 + i << str1 + 4 - i;
}
//

int main()
{
	//���ڿ��� ���� �׻� null ����



	for (int i = 0; i < 5; i++)
	{
		LeftTop(i);
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		RightTop(i);
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		LeftTop(i); RightTop(i);
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		LeftBottom(i); RightBottom(i);
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		RightBottom(i); LeftBottom(i);

		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		RightTop(i); LeftTop(i);
		cout << endl;
	}

	return 0;//�����Լ� ��
}//main  �Լ����� ��
