#include<iostream>
using namespace std;
int main()
{
	int arr[3][2]={{ 1,2},{ 3,4},{ 5,6}};
	int rows=3,cols=2;
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << " ";
        }
        cout << endl;
    }
	// Base Address is 500;
	//Row Major
	int j=2,k=1,l=1,s=2;
	arr[2][1]=500+4*(s*(j-l)+(k-l));
	cout<<"Address of the arr[2][1] is "<<arr[2][1]<<endl;
	//Collum major
	//Base Address 400
	arr[0][1]=400+4*(3*(k-l)+(0-l));
	cout<<"Address of the arr[0][1] is "<<arr[0][1];
	
	
}