#include <iostream>
#include <cassert>
using namespace std;

struct Node {
    int value;
    Node* next;
    const char* data;
    Node(const char* string)
	{
		data = string;
		this->insertTail = NULL;
		
	}
Node* insertTail(Node* head, int value){
    Node *last = new Node;
    last->value = value;
    last->next = NULL;
    if (head == NULL) {
        head = last;
    } else { 
        Node *temp = new Node;
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = last;
    }
    return head;
}
};
int main(){
	Node* f= new Node();
	f=f->insertTail("rengar",5);
}
