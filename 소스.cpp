/*.
�� ���� A�� B�� �־����� ��, A�� B�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

A�� B���� ū ��쿡�� "A�� B���� ũ��"�� ����Ѵ�.
A�� B���� ���� ��쿡�� "B�� A���� ũ��"�� ����Ѵ�.
A�� B�� ���� ��쿡�� "A�� B�� ����"�� ����Ѵ�.

��� �Լ� : if��
*/

#include <iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;

	cout << "A�� ���� �Է��Ͻÿ�." << endl;
	cin >> A;

	cout << "B�� ���� �Է��Ͻÿ�." << endl;
	cin >> B;

	if (A > B)
	{
		cout << "A�� B���� ũ��" << endl;
	}
	else if (A < B)
	{
		cout << "B�� A���� ũ��" << endl;
	}
	else
	{
		cout << "A�� B�� ����" << endl;
	}

	return 0;
}