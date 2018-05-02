/*******************************************************************\


Author: Felipe Rodrigues


\*******************************************************************/

#ifndef _QSTRING_H
#define _QSTRING_H

#include "string"
#include "cstddef"
#include "cstring"
#include "qnamespace.h"

class QString
{
private:
	char* str;
	unsigned int _size;

public:
	QString (){
      char* tmp = "";
		this->str = tmp;
		this->_size = 0;
	}
 
   QString(const QString &){}

	QString ( char * unicode ){
		__ESBMC_assert(unicode != NULL, "Invalid string");
		this->str = unicode;
		this->_size = strlen(unicode);
	}

	QString ( char * _str ) const{
	     __ESBMC_assert(_str != NULL, "Invalid parameter");
	     this->str = _str;
//	     this->_size = strlen(_str);
	}

	std::string	toStdString () const
   {
       return std::string(this->str);
   }
        

	~QString (){}

	bool operator ==(const QString& x) const {
		if(this->str != x.str)
			return false;
		return true;
	}

	bool operator !=(const QString& x) const {
		if(this->_size == x._size)
			return false;
		return true;
	}

	bool operator <(const QString& x) const {
		if(this->_size > x._size)
			return false;
		return true;
	}

        bool isEmpty () const{}
	QString operator+(const QString& d){}

// int compare(QString &s){}
   int compare(char *s)const{
      int ret;
      std::string str;
      __ESBMC_assert(s != NULL, "Invalid string"); 
		this->str = s;
		this->_size = strlen(s);

      ret = str.compare(s);
      return ret;
    
   }
};

QString fromUtf8 ( const char * str, int size = -1 ){}

class QStringRef
{
  public:
       QStringRef(){}
       QStringRef(const QString *string){
           __ESBMC_assert(string != NULL, "Invalid parameter"); 
       }
      ~QStringRef(){}

       static int compare(const QStringRef &s1, const QString &s2,Qt::CaseSensitivity = Qt::CaseSensitive){}

       QString toString() const{
           QString *string = new QString();
        return *string;
       }
       //static int compare(const QStringRef &s1, const QString &s2){}
};

#endif // _QSTRING_H
