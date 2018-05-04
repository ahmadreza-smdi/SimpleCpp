#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node (int d=0)
	{
	data = d ;next = 0;
	}
};
class Mylist{
private:
	
	Node head;
public:
	
	void append(int d)
	{
		Node *p;
		for(p = &head ; p->next ; p = p ->next);
			p -> next = new Node(d);
	}
	bool search_bool(int d)
	{
		Node *p;
		for (p = &head ; p->next ; p = p->next)
		{
			if (p->data == d)return true;
		}
		return false;
	};
	int search_int(int d)
	{
		int counter;
		Node *p;
		for (p = &head ; p->next ; p = p->next ,counter ++)
		{
			if(p->data == d)
			{
				return counter;
			} 
			cout << "Not found";
			return 0;
		}
	};
	Node * search_pointer (int d)
	{
		Node *p;
		for( p = &head ; p->next ; p = p->next)
		{
			if(p->data == d)return p;
		}
		cout << "Not found";
		return 0;
	}
	void pop (void)
	{
		Node *p;
		for(p = &head ; p->next->next; p = p ->next);
			delete p->next;
			p->next = 0;
		}
	void remove(int k)
	{
		Node *p;
		if(k <= 0)cout << "Invalid!" << endl;
		for(p = &head; k>0 && p;k--,p = p->next);
		p->next = p->next->next;
	}
	void insert (int k , int d)
	{
		Node *p;
		Node *np;
		for ( p = &head ; k > 0 ; k-- , p = p->next);
				np=p->next;
				p->next=new Node;
				p->next->data=d;
				p->next->next=np;
				p=p->next;
	};
	void print()
	{
		Node *p;
		for ( p =head.next ; p ; p = p->next)
		{
			cout << p->data << endl;
		}
	}
};
int main(){
	return 0;
}
