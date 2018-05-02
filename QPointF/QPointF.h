/*******************************************************************
 Module:

 Author: Dimerson Coelho

 Date: Maio 2018

 \*******************************************************************/

#ifndef QPOINTF_H
#define QPOINTF_H

#include <math.h>
#include "../QPoint/QPoint.h"

class QPointF
{
	private:
		double xp, yp;

	public:
		QPointF(double x, double y)
		{
			xp = x;
			yp = y;
		}


		QPointF(const QPoint &point)
		{
			this->xp = point.x();
			this->yp = point.y();
		}


		QPointF()
		{
			xp = 0;
			yp = 0;
		}


		bool isNull() const
		{
			return (xp == 0 && yp == 0);
		}


		double manhattanLength() const
		{
			double soma = sqrt(pow(xp, 2) + pow(yp, 2));
			return soma;
		}


		double &rx()
		{
			return xp;
		}


		double &ry()
		{
			return yp;
		}


		void setX(double x)
		{
			xp = x;
		}


		void setY(double y)
		{
			yp = y;
		}


		QPoint toPoint() const
		{
			int aux = round(xp);
			int auy = round(yp);
			QPoint novo(xp,yp);
			return novo;
		}


		double x() const
		{
			return xp;
		}


		double y() const
		{
			return yp;
		}


		QPointF &operator*=(double factor)
		{
			xp = xp * factor;
			yp = yp * factor;
			return *this;
		}


		QPointF &operator+=(const QPointF &point)
		{
			xp = xp + point.x();
			yp = yp + point.y();
			return *this;
		}


		QPointF &operator-=(const QPointF &point)
		{
			xp = xp - point.x();
			yp = yp - point.y();
			return *this;
		}


		QPointF &operator/=(double divisor)
		{
			xp = xp/divisor;
			yp = yp/divisor;
			return *this;
		}
};

#endif
