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
		this->insertHead = NULL;
		
	}
Node* insertHead(Node* head, int value){
    Node *last = new Node;
    last->value = value;
    last->next = NULL;
    if (last == NULL) {
        last = head;
    } else { 
        Node *temp = new Node;
        temp = last;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = head;
    }
    return last;
}
    void print()
	{
		assert(this != NULL);
		Node* read = this;
		while (read != NULL)
		{
			cout << read->data << " ";
			read = read->insertHead;
		}
		cout << "\n------------------\n";
	}
};
int main(){
	Node* f= new Node();
	f=f->insertHead("rengar",5);
	f->print();
}
