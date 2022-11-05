#include<iostream>
#include<string.h>
using namespace std;

class dfa3 {
public:
	string str = "010111";;

	void DFA()
	{
		

		for (int i = 0; i < str.length(); i++)
			if (str[0] == 'a' || str[1] == 'b')
			{
				if (str[1] == 'a' || str[1] == 'b' || str[1] == 'c')

					cout << "correct" << endl;

			}
			else
			{
				cout << "incorrect" << endl;
			}
		if (str[0] == 'c')
		{


			if (str[1] == 'b' || str[1] == 'c')
			{
				if (str[1] == 'a' || str[1] == 'b' || str[1] == 'c')
				{

				}
				cout << "correct" << endl;;

			}
			else
			{
				cout << "incorrect" << endl;
			}
		}

	}


};
int main()
{
	dfa3 d;

	d.DFA();
}