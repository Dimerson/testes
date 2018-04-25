#include <iostream>
#include "QInputEvent.h"

using namespace std;

int main()
{
	QInputEvent *novo = new QInputEvent();

	cout << novo->modifiers() << endl;

	return 0;
}

