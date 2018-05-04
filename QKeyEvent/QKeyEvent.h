/*******************************************************************
 Module:

 Author: Dimerson Coelho

 Date: Maio 2018

 \*******************************************************************/

#ifndef QKEYEVENT_H
#define QKEYEVENT_H

#include "../QInputEvent/QInputEvent.h"
#include "../Outros/qstring.h"
#include "../Qt.h"

class QKeyEvent: public QInputEvent
{
	private:
		Key chave;
		KeyboardModifiers modifiers;
		char *str;
		bool repete;
		int contador;

	public:
		QKeyEvent(Type type, int key, Qt::KeyboardModifiers modifiers, const QString &text = QString(), bool autorep = false, unsigned short count = 1): QEvent(type)
		{
			assert(this->type() == KeyPress || this->type() == KeyRelease || this->type() == ShortcutOverride);
			chave = key;
			this->modifiers = modifiers;
			str = text.at(0);
			repete = autorep;
			contador = count;
		}
};
