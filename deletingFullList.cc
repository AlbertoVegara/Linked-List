#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node * next;
};

void printList(Node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

void deletingNode(Node ** head){
	Node * current = *head;
	Node * next;
	while(current != NULL){
		next = current->next;
		delete current;
		current = next;
	}
	*head = NULL;
}

int main(){
	Node * head = new Node();
	Node * second = new Node();
	Node * third = new Node();
	Node * fourth = new Node();
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = fourth;

	fourth->data = 4;
	fourth->next = NULL; 
	
	printList(head);

	deletingNode(&head);

	cout << endl;
	printList(head);
}
