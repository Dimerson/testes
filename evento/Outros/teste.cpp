#include <iostream>
using namespace std;

class Machine 
{
	private:
		int id;

	public:
		Machine(int id)
		{
			this->id = id;
		}

		void info()
		{
			cout << "ID = " << id << endl;
		}
};


class Vehicle: public Machine
{
	public:
		Vehicle(int id): Machine(id){};
};


int main()
{
	Vehicle vehicle(123);

	vehicle.info();

	return 0;
}
