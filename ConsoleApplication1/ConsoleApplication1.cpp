#include <iostream>
using namespace std;
int main()
{
	cout << "hello world!\n";
	int i = 50, so;
	cout << "nhap so :";
	cin >> so;
	cout << "vong lap while\n";
	while (i <= so) //50<=40==>false
	{
		cout << i << " ";
		i++;
	}
	cout << "\nvong lap do while\n";
	do
	{
		cout << i << " ";
		i++;
	} while (i <= so);
	return 0;
