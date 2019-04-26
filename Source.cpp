#include <iostream>
#include <iostream>
#include "students.h"
#include "alive.h"

using std::cout;
using std::endl;

int main() {
	Student s;
	Headman h;

	h.setName("Erzhan");
	h.setSurname("Kulzhan");
	h.setPhoneNumber("1234567890");
	cout << h.getName() << endl;
	cout << h.getSurname() << endl;
	cout << h.getPhoneNumber() << endl;

	Alive a;
	a.setAlive(true);

	Animal an;

	Dog d;

	d.setAlive(false);
	cout << d.isAlive();
	

	system("pause");
	return 0;
}