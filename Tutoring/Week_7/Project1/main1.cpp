#include <iostream>
using namespace std;

//별찍기
//배열은 포인터임을 이용한 별찍기

// 계획
// 1. 공백칸도 미리 넣고싶다.
// -> 뒤에 문자를 붙이기가 편해짐
// 2. 함수화 하고싶다.
// -> 중복된코드를 가독성좋고 사용하기 편하게 하기위해

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
	//문자열은 끝이 항상 null 문자



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

	return 0;//메인함수 끝
}//main  함수영역 끝
