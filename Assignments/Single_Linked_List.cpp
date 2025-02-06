#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *link;
};
class LinkedList {
	private:
		Node* head;
	public:
		LinkedList() {
			head=NULL;
		}
		bool isEmpty();
		void insert(int a); //Insert at last
		void insertfirst(int b);//Insertion at the beginning of the linked list
		void insertafter(int x,int b);//insert after the given node
		Node* find(int a);
		int search(int a);
		bool delet(int a);
		void print();
};
void LinkedList::print() {
	Node* temp = head;
	while(temp!=NULL) {
		cout<<temp->data<<endl;
		temp = temp->link;
	}

	cout<<"----------------"<<endl;
}
bool LinkedList::isEmpty() {
	if(head == NULL)
		return true;
	return false;
}
Node* LinkedList::find(int a) {
	Node* temp = head;
	while(temp!=NULL) {
		if(temp->data == a)
			return temp;
		temp = temp->link;
	}
	return NULL;

}
int LinkedList::search(int a) {
	Node *temp=head;
	int pos=0;
	while(head!=NULL) {
		if(temp->data==a) {
			return pos;
		}
		temp=temp->link;
		pos++;
	}
}
void LinkedList::insertfirst(int b) {
	Node *tempnode=new Node;
	Node *temp=head;
	tempnode->data= b;
	tempnode->link=head;
	head=tempnode;
}
void LinkedList::insertafter(int x,int b) {
	Node *temp=head;
	while(temp!=NULL && temp->data!=x) {
		temp=temp->link;
	}
	if(temp!=NULL) {
		Node *tempnode=new Node;
		tempnode->data=b;
		tempnode->link=temp->link;
		temp->link=tempnode;
	}
}
void LinkedList::insert(int a) {
	Node* tempNode = new Node;
	tempNode->data = a;
	tempNode->link = NULL;
	if(head == NULL) {
		head = tempNode;
		return;
	}
	Node* temp = head;
	while(temp->link != NULL)
		temp = temp->link;
	temp->link = tempNode;
}
bool LinkedList::delet(int a) {
	Node* temp = head;
	while(temp!= NULL && temp->link->data != a) {
		temp = temp->link;
	}
	if(head==NULL) {
		return false;
	} else {
		Node *todelet=temp->link;
		temp->link=temp->link->link;
		delete todelet;
	}
}

int main() {
	LinkedList list;
	for(int i=1; i<100; i+=10)
		list.insert(i);
	list.print();
//	list.insert(300);
//	list.print();
//	cout<<endl<<endl;
	list.insertfirst(5000);
	list.print();
//	list.insertafter(41,900);
//	list.print();
//	if(list.delet(41))
	//	cout<<"successfully deleted";
//	else
//	cout<<"Not found!!!";
//	list.print();
//	int pos = list.search(1);
//	if (pos!=-1)
//		cout<<"Element found at location  "<<pos<<endl;
//	else
//		cout<<"Not found";
//	list.print();
}

