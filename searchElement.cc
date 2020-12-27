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

void searchElement(Node *& head, int key){
	while(head != NULL){
		if(head->data == key){
			cout << endl;
			cout << "Existe"; 
		}
		head = head->next;
	}
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

	searchElement(head, 3);
}
