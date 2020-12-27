#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

void displayList(Node *node){
	while(node != NULL){
		cout << node->data;
		node = node->next;
	}
}

void appendNode(Node **head_ref, int new_data){
	Node *new_node = new Node();
	Node *last_node = (*head_ref);
	new_node->data = new_data;
	new_node->next = NULL;
	while(last_node->next != NULL){
		last_node = last_node->next;
	}
	last_node->next = new_node;	
}

int main(){

	int n;
	int _data;

	cout << "Input the number of nodes: ";
	cin >> n;

	Node *head = new Node();

	for(int i=0;i<n;i++){
		if(i==0){
			cout << "Input data for node " << i+1 << ": ";
			cin >> _data;

			head->data = _data;
		}else{
			cout << "Input data for node " << i+1 << ": ";
			cin >> _data;
			appendNode(&head, _data);
		}	
	}
	displayList(head);
}
