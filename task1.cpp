#include<iostream>
#include<string.h>
using namespace std;

class dfa1 {
public:
	string str;


	void DFA()
	{
		cout << "ENTER THE STRING" << endl;
		cin >> str;

		int d1, d2;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '1')
			{
				d1++;
			}
			if (str[i] == '1')
			{
				d2++;
			}
		}

		if (d1 % 2 == 0 || d2 % 2 == 0)
		{
			cout << "correct:" << endl;
		}
		else
		{
			cout << "incorrect" << endl;
		}
	}


};
int main()
{
	dfa1 d;
	d.DFA();
}