#include <iostream>
 
using namespace std;

class Box {
   public:
      
	enum EnumType {
  	First,
  	Second,
  	Third
	};
 
	void f(int intVar) {
  	EnumType enumVar = static_cast<EnumType>(intVar);
 
  	if (enumVar < First || enumVar > Third) {
    	// Handle error
  	}
	}
};


int main(void)
{

	EnumType novo;

	f(1);

   	return 0;
}
