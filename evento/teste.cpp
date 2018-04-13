#include <iostream>
 
using namespace std;


int main()
{
	int x = 1;

	enum Tipo{One = 3, Two = 2, Three = 3, Last = 11};

	/*for (x = 0; x <= 5; x++)
	{
		if (11 == Tipo(x))
			cout << "Sim" << endl;
		else
			cout << "Nao" << endl;
	}*/

	cout << Tipo(1) << endl;

	return 0;

}
