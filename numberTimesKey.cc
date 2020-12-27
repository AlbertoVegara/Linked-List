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

void getNthNode(Node *& head, int key){
	int count=0;

	while(head != NULL){
		if(key == head->data){
			count++;
		}
		head = head->next;
	}
	cout << "Output: " << count << endl;
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

	fourth->data = 10;
	fourth->next = NULL; 
	
	printList(head);

	getNthNode(head, 10);
}
