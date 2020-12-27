#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node * next;
};

void printList(Node *head){
	while(head != NULL){
		cout << head->data << "->";
		head = head->next;
	}
}

void deletingNode(Node ** head, int position){
	Node * searched = *head;
	Node * prev = NULL;
       	int count=0; 
	while(searched != NULL && count != position){
		prev = searched;
		count++;
		searched = searched->next;
	}
	prev->next = searched->next;
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

	deletingNode(&head, 1);

	cout << endl;
	printList(head);
}
