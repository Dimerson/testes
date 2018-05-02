/*******************************************************************
 Module:

 Author: Dimerson Coelho

 Date: Maio 2018

 \*******************************************************************/

#ifndef QPOINT_H
#define QPOINT_H

#include <math.h>

class QPoint
{
	private:
		int xp, yp;

	public:
		QPoint(int xp, int yp)
		{
			this->xp = xp;
			this->yp = yp;
		}


		QPoint()
		{
			this->xp = 0;
			this->yp = 0;
		}


		bool isNull() const
		{
			return (xp == 0 && yp == 0);
		}


		int manhattanLength() const
		{
			double trueLength = sqrt(pow(xp, 2) + pow(yp, 2));
			int result = round(trueLength);
			return result;
		}


		int &rx()
		{
			return xp;
		}


		int &ry()
		{
			return yp;
		}


		void setX(int xp)
		{
			this->xp = xp;
		}


		void setY(int yp)
		{
			this->yp = yp;
		}


		int x() const
		{
			return this->xp;
		}


		int y() const
		{
			return this->yp;
		}



		QPoint &operator*=(float factor)
		{
			xp = round(xp*factor);
			yp = round(yp*factor);
			return *this;
		}


		QPoint &operator*=(double factor)
		{
			xp = round(xp*factor);
			yp = round(yp*factor);
			return *this;
		}


		QPoint &operator*=(int factor)
		{
			xp = round(xp*factor);
			yp = round(yp*factor);
			return *this;
		}


		QPoint &operator+=(const QPoint &point)
		{
			xp = xp + point.x();
			yp = yp + point.y();
			return *this;
		}


		QPoint &operator-=(const QPoint &point)
		{
			xp = xp - point.x();
			yp = yp - point.y();
			return *this;
		}


		QPoint &operator/=(double divisor)
		{
			xp = round(xp/divisor);
			yp = round(yp/divisor);
			return *this;
		}
};

#endif
