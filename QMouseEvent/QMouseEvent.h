/*******************************************************************
 Module:

 Author: Dimerson Coelho

 Date: Abril 2018

 \*******************************************************************/

#ifndef QMOUSEEVENT_H
#define QMOUSEEVENT_H

#include "../QEvent/QEvent.h"

class QMouseEvent: public QEvent
{
	public:

		QMouseEvent();
		~QMouseEvent();
}

#endif
