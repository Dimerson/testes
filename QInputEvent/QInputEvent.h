#ifndef QINPUTEVENT_H
#define QINPUTEVENT_H

#include "../QEvent/QEvent.h"
#include "../Qt.h"

using namespace Qt;

class QInputEvent: public QEvent
{
	private:
		Qt::KeyboardModifier modif;
		long int timest;

	public:
		QInputEvent() : QEvent(None)
		{
			this->modif = NoModifier;
			this->timest = 0;
		}


		Qt::KeyboardModifier modifiers() const
		{
			return modif;
		}

		long int timestamp() const
		{
			return this->timest;
		}
};

#endif
