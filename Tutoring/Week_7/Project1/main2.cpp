#include <iostream>
#include <string.h>
using namespace std;


//출석부 프로그램
//동적배열을 이용한 출석부

struct Student
{
	string	name;
	int		age;
	float   weight;
};


int main()
{
	//스택 가지고 못하는거
	//스택(컴파일타임)은 안되고 힙(런타임)은 가능한거


	//객체 배열(구조체 변수)을 써서
	//배열로 인한 런타임에러 (배열의 크기를 벗어나는 접근) 해결

	struct Student* ClassA; // 배열의크기 미리잡으면 안됨
	int	NumStudent = 0;

	cout << "총 학생수를 입력해 주세요 ";
	cin >> NumStudent;

	//여기서 크기가 정해져야 함
	//힙에 할당해야만 가능한 일

	ClassA = new Student[NumStudent];

	for (int i = 0; i < NumStudent; i++)
	{
		cout << "학생의 인적사항을 적어주세요" << endl;
		cout << "학생의 이름 ";
		cin >> ClassA[i].name;
		cout << "학생의 나이 ";
		cin >> ClassA[i].age;
		cout << "학생의 몸무게 ";
		cin >> ClassA[i].weight;
		cout << endl;
	}
	cout << "입력이 끝났습니다." << endl;

	int input = 0, input2 = 0;
	while (1)
	{
		cout << "보고싶은 학생 번호를 입력하세요(1~" << endl;
		cin >> input;
		if (input > NumStudent)
		{
			cout << "그런 학생은 없습니다" << endl;
			continue;
		}
		else
		{
			cout << "학생" << input << endl;
			cout << "이름:" << ClassA[input - 1].name << endl;
			cout << "나이:" << ClassA[input - 1].age << endl;
			cout << "몸무게:" << ClassA[input - 1].weight << endl;
		}

	}

	delete[] ClassA;
	return 0;
}
