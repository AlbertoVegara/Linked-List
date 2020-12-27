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
	cout << endl;
}

int lengthOfList(Node * head){
	int length=0;
	while(head != NULL){
		length++;
		head = head->next;
	}
	return length;
}

void getNthNode(Node *& head){
	int count=0;
	int searched;
	int length;
	length = lengthOfList(head);

	searched = (length/2) + 1;
	cout << "Searched: " << searched << endl;

	while(head != NULL){
		count++;
		if(count == searched){
			cout << "Output: " << head->data << endl;
		}
		head = head->next;
	}
}

int main(){
	Node * head = new Node();
	Node * second = new Node();
	Node * third = new Node();
	Node * fourth = new Node();
	
	head->data = 10;
	head->next = second;
	
	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = fourth;

	fourth->data = 40;
	fourth->next = NULL; 
	
	printList(head);

	getNthNode(head);
}
