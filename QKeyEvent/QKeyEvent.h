#ifndef QKEYEVENT_H
#define QKEYEVENT_H

#include "../QInputEvent/QInputEvent.h"

class QKeyEvent: public QInputEvent
{
	QKeyEvent(Type type, int keym Qt::KeyboardModifiers modifiers, const QString &text = QString(), bool autorep = false, short int count = 1);

}
