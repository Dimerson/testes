#include <iostream>
#include "QPoint.h"

using namespace std;

void printa (QPoint aux)
{
	cout << "X = " << aux.x() << " , Y = " << aux.y() << "." << endl;
}


int main()
{
	QPoint novo(3,4);
	QPoint n2(0,0);
	QPoint soma(0,4);

	printa(novo);
	printa(n2);

	cout << novo.isNull() << " , " << n2.isNull() << "." << endl;

	cout << novo.manhattanLength() << endl;

	cout << novo.rx() << endl;

	novo.setX(6);

	printa(novo);

	novo += soma;

	printa(novo);

	novo *= 3;

	printa(novo);

	novo.rx()--;

	printa(novo);

	return 0;
}

