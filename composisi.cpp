#include <iostream>
#include <string>
using namespace std;

#include "JANTUNG.H"
#include "MANUSIA.H"

int main() {
	manusia* varManusia = new manusia("jono");
	delete varManusia;
	return 0;
}