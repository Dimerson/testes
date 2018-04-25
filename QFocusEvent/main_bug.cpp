#include <iostream>
#include "QFocusEvent.h"

using namespace std;

int main()
{
	QFocusEvent *novo = new QFocusEvent(Timer, Qt::OtherFocusReason);

	cout << novo->gotFocus() << endl;
	cout << novo->lostFocus() << endl;
	cout << novo->reason() << endl;

	return 0;
}
