#include <iostream>
#include "QEventTimer.h"

using namespace std;


int main()
{
	QEventTimer *novo = new QEventTimer(13008);

	cout << novo->timerId() << endl;

	return 0;
}
