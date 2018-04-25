#include <iostream>
#include "QEvent.h"

using namespace std;


int main()
{
	
	int x;
	QEvent *objeto = new QEvent(MouseMove);

	cout << objeto->type() << " ," << objeto->isAccepted() << " ," << objeto->spontaneous() << endl;

	objeto->ignore();

	cout << objeto->isAccepted() << endl;

	objeto->accept();

	cout << objeto->isAccepted() << endl;
	
	
	return 0;
}
