/*******************************************************************
 Module:

 Author: Dimerson Coelho

 Date: Abril 2018

 \*******************************************************************/

#ifndef QKEYEVENT_H
#define QKEYEVENT_H

#include "../QInputEvent/QInputEvent.h"
#include "../Outros/qstring.h"
#include "../Qt.h"

class QKeyEvent: public QInputEvent
{
	QKeyEvent(Type type, int key, Qt::KeyboardModifiers modifiers, const QString &text = QString(), bool autorep = false, unsigned short count = 1): QEvent(type)
	{
		assert(this->type() == KeyPress || this->type() == KeyRelease || this->type() == ShortcutOverride);
		

}
