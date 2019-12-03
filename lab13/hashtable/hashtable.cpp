#include "hashtable.h"
#include <iostream>

using namespace std;

#define A 54059 
#define B 76963 
#define C 86969 

/**
Hash function for the CS104 hash table.
*/
unsigned hash_str(const char* s)
{
   unsigned h = 31;
   while (*s) {
     h = (h * A) ^ (s[0] * B);
     s++;
   }
   return h % C; 
}

/**
Creates a hash table of the given input size. Creates the array and vectors used for the hash table.
*/
HashTable::HashTable(int size) {
	this->size = size;
	data = new std::vector<std::pair<std::string, int>>[size];
}

/**
Deletes the vectors and array used for the hash table.
*/
HashTable::~HashTable() {
	delete [] data;
}

/**
Insert should do nothing if the name already exists in the hash table.
*/
void HashTable::insert(string key, int value) {
	unsigned hash = hash_str(key.c_str());
	hash = hash % size;

	// TODO

}

/**
Find should return true if the name exists in the hash table.
*/
bool HashTable::find(string key) {
	unsigned hash = hash_str(key.c_str());
	hash = hash % size;

	// TODO

}

/**
Remove should do nothing if the name does not exist in the hash table.
*/
void HashTable::remove(string key) {
	unsigned hash = hash_str(key.c_str());
	hash = hash % size;

	// TODO

}

/**
Remove should return 0 if the name does not exist in the hash table, or the value if the name exists
*/
int HashTable::get(std::string key) {
	unsigned hash = hash_str(key.c_str());
	hash = hash % size;

	// TODO

}
