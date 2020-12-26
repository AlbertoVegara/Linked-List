#include<iostream>

using namespace std;

class Node{
	
	public:
		int data;
		Node * next;
};

int countNodes(Node * head){
	int count=0;
	while(head != NULL){
		count++;
		head = head->next;
	}
	return count;
}

void printList(Node * head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

void pushNode(Node ** head_ref, int new_data){ //Pass for reference (pointer to pointer)
       //Se puede hacer con "Rference to a pointer" es lo mismo que (pointer to pointer)	
	Node * new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void insertAfter(Node * prev_node, int new_data){
	Node * new_node = new Node();
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}

void append(Node ** head_ref, int new_data){
	Node * new_node = new Node();
	Node * last_node = *head_ref;
	new_node->data = new_data;
	new_node->next = NULL;
	while(last_node->next != NULL){
		last_node = last_node->next;
	}
	last_node->next = new_node;
}

void deleteNode(Node ** head_ref, int key){
	Node * deleting = *head_ref;
	Node * prev = NULL;
	
	while(deleting != NULL && deleting->data != key){
		prev = deleting;
		deleting = deleting->next;//Vamos iterando el nodo	
	}

	prev->next = deleting->next;

	delete deleting;
}

void deleteNodeGivenPosition(Node ** head_ref, int position){
	Node * deleting = *head_ref;

	if(position == 0){
		*head_ref = deleting->next;
		free(deleting);
		return;
	}

	for(int i=0;i<position-1;i++){
		deleting = deleting->next;
	}

	Node * next = deleting->next->next;//next after the node that we want to delete

	free(deleting->next);

	deleting->next = next;
}

int main(){
	
	int count;

	Node * head = new Node();

	head->data = 1;
	
	cout << "&head:  "  << &head << endl;
	cout << head << endl;
	pushNode(&head, 2);	
	printList(head);

}
