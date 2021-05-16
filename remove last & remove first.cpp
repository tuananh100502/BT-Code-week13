#include <iostream>
#include <cassert>
using namespace std;
struct Linkedlist
{
	Linkedlist* head;
	Linkedlist* tail;
	Linkedlist(const char* string)
	{
		data = string;
		this->head = NULL;
		this->tail = NULL;
	}
	Linkerlist* remove first{
       this -> head -> tail=NULL;
	   return this->tail;	
	}
	Linkerlist* remove last{
	   this ->head->last =NULL;
	   return this->head;
	}
};
int main(){
	Linkedlist* f = new Linkedlist("Tuananh");
	f=f->remove first()
	f->print();
	f=f->remove last();
	f->print();
}
