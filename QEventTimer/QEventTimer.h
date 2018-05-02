/*******************************************************************
 Module:

 Author: Dimerson Coelho

 Date: Abril 2018

 \*******************************************************************/

#ifndef QEVENTTIMER_H
#define QEVENTTIMER_H

#include "../QEvent/QEvent.h"

class QEventTimer: public QEvent
{
	
	private:
		int id;

	public:

		QEventTimer(int timerId): QEvent(Timer)
		{
			this->id = timerId;
		}

		int timerId() const
		{
			return this->id;
		}

};

#endif
