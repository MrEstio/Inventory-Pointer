#include <iostream>
#include <string>
#include <vector>
using namespace std;
string* ptrToElement(vector<string>* const pVec, int i);
int main()
{
	vector<string> inventory;
	inventory.push_back("Sword");
	inventory.push_back("Armour");
	inventory.push_back("Shield");
	cout << "Sending the object pointed to by returned pointer to count:\n";
	cout << *(ptrToElement(&inventory, 0)) << "\n\n";
	cout << "Assigning the returned pointer to another pointer.\n\n";
	string* pStr = ptrToElement(&inventory, 1);
	cout << "Sending the object pointed to by new pointer to cout:\n";
	cout << *pStr << "\n\n";
	cout << "Assigning object pointed to by pointer to à string object.\n\n";
	string str = *(ptrToElement(&inventory, 2));
	cout << "Sending the new sring object to cout:\n";
	cout << str << "\n\n";
	cout << "Altering an object through a returned pointer.\n\n";
	*pStr = "Healing Potion";
	cout << "Sendi ng the altered object to cout: \n";
	cout << inventory[1] << endl;
	return 0;
}
string* ptrToElement(vector<string>* const pVec, int i)
{
	return &((*pVec)[i]);
}
