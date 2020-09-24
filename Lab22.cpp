#include<iostream>
#include<string>

using namespace std;

class node
{
public:
	node(int d, node* nxt)
		: data(d), next(nxt) {}
	int data;
	node* next;
};

node* insertAtHead(int number, node* head);

node* insertAtTail(int number, node* head);

node* insertAtIndex(int number, int index, node* head);

bool isEmpty(node* head);

void printList(node* current);

void showMenu();

int main()
{
	node* head = NULL;
	int menuChoice, number, index;

	while (true)
	{
		try
		{
			showMenu();
			cin >> menuChoice;

			switch (menuChoice)
			{
			case 1:
				cout << "Enter an integer to insert: ";
				cin >> number;
				head = insertAtHead(number, head);
				break;
			case 2:
				cout << "Enter an integer to insert: ";
				cin >> number;
				head = insertAtTail(number, head);
				break;

			case 3:
				if (isEmpty(head))
				{
					cout << "The list is empty." << endl;
				}
				else {
					cout << "Enter an integer to insert: ";
					cin >> number;
					cout << "Enter an index to insert the integer at: ";
					cin >> index;
					head = insertAtIndex(number, index, head);
				}
				break;
			case 4:
				if (isEmpty(head))
					cout << "The list is empty." << endl;
				else
					printList(head);
				cout << endl;
				break;
			case 5:
				cout << "The list " << (isEmpty(head) ? "is" : "is not") << " empty.\n";
				break;
			case 6:
				return 0;
			default:
				cout << menuChoice << " is an invalid menu choice. Try again.\n";
			}
		}
		catch (invalid_argument ia)
		{
			cout << ia.what() << endl;
			cout << "Please enter a valid integer." << endl;
		}
	}
}

void showMenu() {
	cout << endl;
	cout << "1. Insert at head.\n";
	cout << "2. Insert at tail.\n";
	cout << "3. Insert at a specific index.\n";
	cout << "4. Print list.\n";
	cout << "5. Check if the list is empty.\n";
	cout << "6. Quit\n";
	cout << "Please enter a choice: ";
}

bool isEmpty(node* head)
{
	return (head == NULL);
}

node* insertAtHead(int number, node* head)
{
	// TODO:  Implement the insertAtHead function.
	// This function inserts a new node containing the
	// data value passed in the parameter at the beginning
	// of a linked list. The list's head is 
	// returned (40 points).
	// Hint: To make a new head node, it should point to 
	// the address of the original head node.
	// Once the new head node is returned, the main() function
	// will adjust the head to the new head node.

	node* newNode = new node(number, head);
	head = newNode;
	return head;

}

node* insertAtTail(int number, node* head)
{
	// This function is provided for you, in order
	// to show the logic behind iterating through a list
	// and inserting into it.

	// This function inserts a new node containing the
	// data value passed in the parameter at the end
	// of a linked list.  The list's head 
	// is returned.
	node* current = head;

	//if the current node does not exist, insert it at the head
	if (current == NULL)
		return insertAtHead(number, current);

	//iterate the current node until the the end of the list
	while (current->next != NULL)
		current = current->next;

	//make the current node (the last node) point to a new node with the passed data value
	current->next = new node(number, NULL);
	return head;
}

node* insertAtIndex(int number, int index, node* head)
{
	// TODO:  Implement the insertAtIndex function.
	// This function inserts a new node containing the
	// data value passed in the parameter at the given index
	// in the linked list. The list's head is returned at the end. (60 points)

	// Example
	// Starting list: 5 2 6
	// After inserting 3 at index 0: 3 5 2 6
	// After inserting 8 at index 2: 3 5 8 2 6

	// Make sure to handle the following cases:
	// 1. If the the index is 0, insert a new node at the head and return from the function.
	// 2. If the index is not 0, iterate until the nth index and insert a new node.
	// If the index exceeds the number of elements in the list, insert at the end.

	//Case 1
	//-----------TODO-----------
	//if the index is 0, insert a node at the head of the list
	if (index == 0) {
		return insertAtHead(number, head);
	}




	//Case 2
	//The node that will be inserted into the list. 
	//Its "next" pointer will need to be modified when the node at the correct index is found.
	node* nodeToInsert = new node(number, NULL);
	// This node represents the current node that is being iterated to.
	// This node will eventually be the node after the nodeToInsert.
	node* current = head;
	// This node represents the node just before current.
	// This node will eventually be the node before the nodeToInsert.
	node* previous = NULL;
	// Iterator
	int i = 0;

	//-----------TODO-----------
	// Use a while loop that iterates up to the given index.
	// During the while loop, update previous and current so traverse through the list.
	// If the index is greater than the number of elements, break from the while loop.
	// Hint: checking if the index is greater than the number of elements involves current's position.
	// How can we check if the current node is at the end of the list?
	while (i < index) {
		previous = current;
		current = current->next;
		i++;
	}


	//-----------TODO-----------
	// Update the nodes that nodeToInsert and previous are pointing to.
	// If the while loop iteration was done correctly, current should represent the node after nodeToInsert.
	// previous should represent the node before nodeToInsert.
	
	previous->next = nodeToInsert;
	nodeToInsert->next = current;
	i++;





	return head;
}


void printList(node* current)
{
	if (current == NULL)
		return;

	cout << current->data << " ";
	printList(current->next);
}