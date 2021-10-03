/*.
두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.

A가 B보다 큰 경우에는 "A가 B보다 크다"를 출력한다.
A가 B보다 작은 경우에는 "B가 A보다 크다"를 출력한다.
A와 B가 같은 경우에는 "A와 B는 같다"를 출력한다.

사용 함수 : if문
*/

#include <iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;

	cout << "A의 값을 입력하시오." << endl;
	cin >> A;

	cout << "B의 값을 입력하시오." << endl;
	cin >> B;

	if (A > B)
	{
		cout << "A가 B보다 크다" << endl;
	}
	else if (A < B)
	{
		cout << "B가 A보다 크다" << endl;
	}
	else
	{
		cout << "A와 B는 같다" << endl;
	}

	return 0;
}