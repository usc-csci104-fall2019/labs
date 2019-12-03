#include <iostream>
#include "hashtable.h"

using namespace std;

int main() {
	HashTable users(10);

	users.insert("Aaron", 1);
	users.insert("Andrew", 2);

	users.insert("Sandra", 3);
	users.insert("Sandra", 4);
	users.insert("Sandra", 5);
	users.insert("Sandra", 6);

	users.insert("David", 7);
	users.insert("Michael", 8);
	users.insert("Aaron", 9);
	users.insert("Tanya", 10);
	users.insert("Mark", 11);
	users.insert("Piazza", 12);
	users.insert("Topeka", 13);

	cout << "Trying to find Sven:\t" << ( users.find("Sven") ? "BAD"  : "GOOD" ) << endl;
	cout << "Trying to find Sandra:\t" << ( users.find("Sandra") ? "GOOD" : "BAD"  ) << endl;
	cout << "Value correct:\t\t" <<  ( users.get("Sandra") == 3 ? "GOOD" : "BAD"  ) << endl;
	cout << "Trying to find Mark:\t"  << ( users.find("Mark")  ? "GOOD" : "BAD"  ) << endl;
	cout << "Value correct:\t\t" <<  ( users.get("Mark") == 11 ? "GOOD" : "BAD"  ) << endl;
	cout << "Trying to find Aaron:\t" << ( users.find("Aaron") ? "GOOD" : "BAD"  ) << endl;
	cout << "Value correct:\t\t" <<  ( users.get("Aaron") == 1 ? "GOOD" : "BAD"  ) << endl;

	users.insert("Sven", 14);
	cout << "Trying to find Sven:\t" << (users.find("Sven")  ? "GOOD" : "BAD"  ) << endl;
	cout << "Value correct:\t\t" << ( users.get("Sven") == 14 ? "GOOD" : "BAD"  ) << endl;

	users.remove("Sandra");
	users.remove("Mark");
	cout << "Trying to find Sandra:\t" << (users.find("Sandra")  ? "BAD"  : "GOOD" ) << endl;
}