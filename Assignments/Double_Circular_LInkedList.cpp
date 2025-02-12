#include<iostream>
using namespace std;
void print(int info[],int link[],int start){
	int ptr=link[start];
	while(ptr!=start){
		cout<<info[ptr]<<endl;
		ptr=link[ptr];
	}
	cout<<"----------------"<<endl;
}
void count(int info[],int link[],int start,int &no){
	int ptr=link[start];
	no=0;
	while(ptr!=start){
		ptr=link[ptr];
		no++;
	}
}
void search(int info[],int link[],int start,int item, int &loc){
	int ptr=link[start];
	
	while(ptr!=start){
		if(item==info[ptr]){
			loc=ptr;
			return;
		}
		else	
		ptr=link[ptr];
	}
	loc=-1;
}
void insertFirst(int info[],int link[],int back[],int &start,int &avail,int item){
	if(avail==-1){
		cout<<"list over flow!!!"<<endl; 
		return;
	}
	int neo=avail;
	avail=link[avail];
	info[neo]=item;
	link[neo]=link[start];
	back[neo]=start;
	link[start]=neo;
}
void insertLast(int info[],int link[],int back[],int start,int &avail,int item)
{
	if(avail==-1){
		cout<<"list over flow!!!"<<endl; 
		return;
	}
	int ptr=link[start];
	int neo=avail;
	avail=link[avail];
	info[neo]=item;
	while(link[ptr]!=start)
	{
		ptr=link[ptr];
	}
	link[neo]=link[ptr];
	link[ptr]=neo;
	back[neo]=ptr;
}
void insertLoc(int info[],int link[],int back[],int &start,int &avail,int item, int loc){
	if(avail==-1){
		cout<<"list over flow!!!"<<endl; 
		return;
	}
	int neo=avail;
	avail=link[avail];
	info[neo]=item;
	if(loc==-1){	
	link[neo]=link[start];
	back[neo]=start;
	link[start]=neo;
	}
	else{
	link[neo]=link[loc];
	back[neo]=loc;
	link[loc]=neo;
	}
}
void deleteFirst(int link[],int back[],int &start,int &avail)
{
   int loc=link[start];
   link[start]=link[link[start]];
   back[link[link[start]]]=start;
   link[loc]=avail;
   avail=loc;
}
void deleteLast(int link[],int back[],int start,int &avail)
{
	int loc=link[start];
	int ptr=link[link[start]];
	while(link[ptr]!=start)
	{
		loc=ptr;
		ptr=link[ptr];
	}
	
	link[loc]=link[ptr];
	link[ptr]=avail;
	avail=ptr;
	
}

//void FindA(string info[],int link[],int start,string item, int &loc){
//	int save,ptr;
//	if (start==-1){
//	loc=-1;
//	return;
//	}
//	if(item<info[start]){
//		loc=-1;
//		return;
//	}
//	save=start;
//	ptr=link[start];
//	while(ptr!=-1){
//		if(item<info[ptr]){
//			loc=save;
//			return;
//		}
//		save=ptr;
//		ptr=link[ptr];
//	}
//	loc=save;
//}
//void insertSort(string info[],int link[],int &start,string item,int &avail){
//	int loc;
//	FindA(info,link, start, item, loc);
//	
//	insertLoc(info, link,start,avail,item,loc);
//}
int main()
{
	int info[10]={8,9,5,6};
	int avail=5;
	int next[10]={4,3,1,0,2,6,7,8,9,-1},back[10]={3,2,4,1,0},start=4,n;
	print(info,next,start);
//	insertSort(info, next,start,"alia",avail);
	//print(info,next,start);
//	count(info,next,start,n);
//	cout<<"No. of element in link list is: "<<n<<endl;
//	search(info,next,start,5,n);
//	if(n==-1)
//	cout<<"item not found"<<endl;
//	else
//	cout<<"The is element present at location "<<n<<endl;
//	insertFirst(info, next,back,start,avail,13);
//	print(info,next,start);
//	insertLoc(info, next,back,start,avail,14,3);
//	print(info,next,start);
//	insertLast(info,next,back,start,avail,11);
//	print(info,next,start);
    deleteFirst(next,back,start,avail);
    print(info,next,start);
//    deleteLast(next,start,avail);
//    print(info,next,start);
	return 0;
}

