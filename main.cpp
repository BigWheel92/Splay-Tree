#include <iostream>
using namespace std;
#include "SplayTree.h"

int main()
{

	SplayTree<int, int> a;  //both key and value are of int type. They can be of any type. They 
							// both can be of different type. If key is of nonprimitive type, then <, >, == operators must be overloaded. 
							// To ensure that value is always deep copied, assignment operator (=) must be overloaded.
	
	for (int i = 1; i <= 400; i++)
		a.insert(i, i);

		
	cout << "Level Order Print of keys: " << endl;
	a.levelOrderPrintKeys();

	cout << endl << endl;
	
	cout << "Inorder Print of keys:" << endl;
	a.inOrderPrintKeys();

	a.deleteKey(1);
	cout << endl << endl;

	cout << "After deleting 1, the level order printing of keys is: " << endl;
	a.levelOrderPrintKeys();

}