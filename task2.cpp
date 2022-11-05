#include<iostream>
#include<string.h>
using namespace std;


class dfa1 {

public:
	string str = "0110";

	int len;

	void DFA()
	{
		len = str.length();
		if (str[0] == "0")
		{

			for (int i = 0; i < len; i++)
			{

				if (str[i] == "0")
				{
					cout << "string is correct " << endl;

				}
			}
		}
		else {
			cout << "string is incorrect" << endl;
		}


		if (str[0] == "1")
		{
			for (int i = 0; i < len; i++)
			{
				if (str[i] == "1")
				{
					cout << "string is correct" << endl;
				}
			}
		}

		else
		{
			cout << "string is incorrect" << endl;
		}
	}
};

int main()
{
	dfa1 d;
	d.DFA();
}