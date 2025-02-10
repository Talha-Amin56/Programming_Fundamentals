#include<iostream>
using namespace std;
struct DNode{
    int data;
    DNode *prev, *next;
};
class DLinkedList{
  private:
		DNode* head;
  public:
		DLinkedList(){head=NULL;}	 //Constructor to initialize head with NULL
		
		bool isEmpty();	 		//return true if list is empty and false otherwise
		
		DNode* find(int a);	 //Find and return address of node having data a

		void insertAtStart(int a);		 //Insert node having data a in the
																	 //beginning of the list
		void insertAtEnd(int a);	 //Insert node having data a at the end of the list

		bool deleteNode(int a);		 //Delete node having data a from the list	
		void print();
};
void DLinkedList::print(){
	DNode* temp = head;
   while(temp->next!=head){
	cout<<temp->data<<endl;
	temp = temp->prev;
   }
	
	cout<<"----------------"<<endl;
}
bool DLinkedList::isEmpty(){
   if(head == NULL)
	return true;
   return false;
}
DNode* DLinkedList::find(int a){
   DNode* temp = head;	 //setting a pointer temp at first node 
   
   while(temp->next!=head && (temp->data)!= a){
	temp = temp->next;	 //moving pointer temp to next node
   }
   return temp; 
}
void DLinkedList::insertAtStart(int a){
   DNode* nodePtr = new DNode;	 //create a node and store its 						reference in a pointer nodePtr
   nodePtr->data = a;		
   nodePtr->next = NULL;		 
   nodePtr->prev = NULL;
   if(isEmpty())
   {		 //if creating first node
	head = nodePtr;	 //then just point head pointer to this node
	nodePtr->next=head->prev;	
	nodePtr->prev=head->prev;
}
   else{
   	DNode *temp=head;
   	while(temp->next!=head->prev)
   	temp=temp->next;
    temp->next = nodePtr->prev;
    nodePtr->next = head->prev;
    head->prev = nodePtr->next;
    head = nodePtr;
   }
}
void DLinkedList::insertAtEnd(int a){
   DNode* nodePtr = new DNode;
   nodePtr->data = a;
 //  nodePtr->next = NULL;
  //
   nodePtr->prev = NULL;
   if(isEmpty())
	head = nodePtr;
	while(temp->next!=head)// new node points to the he
    // new node's previous is the last node
        // last node's next is the new node
	
   }
}
bool DLinkedList::deleteNode(int a){
	DNode *temp = find(a);	 //find and store address of required node in 															temp pointer
	if(temp == NULL)			 //if list has no such node with data a
		return false;
	if(temp == head){ 			//if first node is going to be deleted
		head = head->next; 		//then move head pointer to next node
		if(head != NULL)			//if head is not at NULL but at next node
			head->prev = NULL;	 //set previous part of head node to be NULL
	}
	else{		 				//if any other than the first node is going to be deleted
		DNode *nextToTemp = temp->next; // setting a pointer to next node
		DNode *prevToTemp = temp->prev;//setting a pointer to previous node
		prevToTemp->next = nextToTemp; 			// linking next node
		if(nextToTemp != NULL) 							// if not the last node
			nextToTemp->prev = prevToTemp; 	//then  linking previous node
	}
	delete temp;
	return true;
}  


int main()
{
	DLinkedList dl;
//	dl.insertAtStart(13);
//	dl.print();
    for(int i=
	dl.insertAtStart(15);
	dl.print();1;i<=100;i+=10)
	dl.print();    12
//  dl.print();
//	dl.deleteNode(13);
//	dl.print();
//    if(dl.find(41) != NULL) {
	return 0;}