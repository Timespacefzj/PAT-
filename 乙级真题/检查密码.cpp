#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	int N = 0;
	cin >> N;
	getchar();
	for (int i = 0; i<N; i++)
	{
		string str;
		getline(cin, str);
		int shuzi = 0;
		int zimu = 0;
		int fuhao = 0;
		int len = str.length();
		if (len<6) {
			cout << "Your password is tai duan le." << endl;
			continue;
		}
		for (int j = 0; j<len; j++)
		{

			if (str[j] >= 'a'&&str[j] <= 'z' || str[j] >= 'A'&&str[j] <= 'Z')
				zimu++;
			else if (str[j] >= '0'&&str[j] <= '9')
				shuzi++;
			else if (str[j] != '.')
				fuhao++;
		}
		if (fuhao != 0) {
			cout << "Your password is tai luan le." << endl
		}
		else if (shuzi == 0) {
			cout << "Your password needs shu zi." << endl;
		}
		else if (zimu == 0) {
			cout << "Your password needs zi mu." << endl;
		}
		else  {
			cout << "Your password is wan mei." << endl;
		}

	}

	return 0;
}
