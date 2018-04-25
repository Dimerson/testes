#ifndef QFOCUSEVENT_H
#define QFOCUSEVENT_H

#include <assert.h>
#include "../QEvent/QEvent.h"
#include "../Qt.h"

class QFocusEvent: QEvent
{
	private:
		Qt::FocusReason reas;

	public:
		QFocusEvent(Type type, Qt::FocusReason reason = Qt::OtherFocusReason) : QEvent(type)
		{
			assert(this->type() == FocusIn || this->type() == FocusOut);
			this->reas = reason;
		}

		bool gotFocus()
		{
			return (this->type() == FocusIn);
		}

		bool lostFocus()
		{
			return (this->type() == FocusOut);
		}

		Qt::FocusReason reason() const
		{
			return this->reas;
		}
};

#endif
