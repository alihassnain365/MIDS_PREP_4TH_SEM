#include "LinkedList.h"
int main()
{
	LinkedList ll;
	ll.insertAtHead(1);
	ll.insertAtHead(2);
	ll.insertAtHead(3);
	ll.insertAtHead(4);
	ll.insertAtHead(5);
	ll.insertAtHead(6);
	ll.insertAtHead(7);
	ll.insertAtTail(199);

	cout << endl << "In ascending : ";
	ll.displayFromHead();
	cout << endl << "In descending form : ";
	ll.displayFromTail();

	cout<<endl<<"Now inserting at the specific location : ";
	ll.insertAtSpecific(0,1122);
	cout<<endl;
	ll.displayFromHead();
		cout<<endl;

	ll.insertAtSpecific(9,1133);
	ll.displayFromHead();
		cout<<endl;

	ll.insertAtSpecific(4,1144);
	ll.displayFromHead();
		cout<<endl;

	ll.insertAtSpecific(10,1133);
	return 0;
}