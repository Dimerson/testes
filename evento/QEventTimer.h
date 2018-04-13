#ifndef QEVENTTIMER_H
#define QEVENTTIMER_H

#include <iostream>
#include "QEvent.h"

class QEventTimer: public QEvent {
	
	public:

		QEventTimer(int timerId): QEVent(MouseMove)
		{
			this->id = timerId;
		}

		int timerId() const
		{
			return this->id;
		}


	private:

		int id;
};

#endif
