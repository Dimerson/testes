#include <iostream>
#include "library.h"

using namespace std;


int main() {
	
	int x;
	QEvent *objeto = new QEvent(IconDrag);
	
	objeto->ignore();
	
	cout << objeto->type() << endl;

	x = objeto->type();
	cout << x+1 << endl;

	//cout << objeto[3] << endl;
	
	return 0;
}
