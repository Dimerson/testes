#include <iostream>
#include "QPointF.h"

using namespace std;

void printa (QPoint aux)
{
	cout << "X = " << aux.x() << " , Y = " << aux.y() << "." << endl;
}

void printa2 (QPointF aux)
{
	cout << "X = " << aux.x() << " , Y = " << aux.y() << "." << endl;
}


int main()
{
	QPointF novo(3.2,4.1);
	QPointF n2(0,0);
	QPointF soma(0,4);

	printa2(novo);
	printa2(n2);

	cout << novo.isNull() << " , " << n2.isNull() << "." << endl;

	cout << novo.manhattanLength() << endl;

	cout << novo.rx() << endl;

	novo.setX(6);

	printa2(novo);

	novo += soma;

	printa2(novo);

	novo *= 3;

	printa2(novo);

	novo.rx()--;

	printa2(novo);

	QPoint pontao = novo.toPoint();

	printa(pontao);

	return 0;
}

