#include<iostream>
using namespace std;

class Array {
private:
	int arr[10];
	int length;
	int size;


public:
	Array() {
		length = 5;
		size = 10;
	}
	int get_size() {
		return size;
	}
	int get_length() {
		return length;
	}
	void display(int arr[]) {
		cout << "The values are :" << endl;
		for (int i = 0; i < 10; i++) {    // 10 for one loop merg and length with odher
			cout << arr[i] << endl;
		}
	}
	void delete_arry(int arr[])
	{
		int num;
		cout << "Enter Number to delete :" << endl;
		cin >> num;
		for (int i = num; i < length; i++) {
			arr[i] = arr[i + 1];

		}

	}
	void reverse_oder(int arr[], int i, int j) {

		while (i < j) {

			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
			cout << "The reversed values are : " << endl;
		}

	}
	void get(int arr[]) {
		int a;
		cout << "Enter number to find index of number : ";
		cin >> a;
		for (int i = 0; i < length; i++) {
			if (arr[i] == a) {

				a = i;
				cout << "The index of " << arr[i] << " is " << a << endl;
			}
		}
	}

	void merge_array(int arr1[]) { // with two loops...

		int ar2[10];
		int ar3[20];                       // time complexity high in this case..

    	cout << "Enter values in array 2 " << endl;
		for (int i = 0; i < length; i++) {
			cin >> ar2[i];
			
		}
	
		for (int i = 0; i < length; i++) {
			ar3[i] = arr1[i];
			ar3[i+5] = ar2[i];

		}
		cout<<"The value of arrays 3 are :";
		for (int i = 0; i < 10; i++) {
			cout << ar3[i];
		     
		}
	}
	
	
	void merge_oneloop(int arr1[]){ // with one loop...
	int arr2[20];
	int arr3[20];
	
	cout << "Enter values in array 2 " << endl;
	
		for (int i = 0; i < length; i++) {
			cin >> arr2[i];                             /// low time complexity..
			arr3[i]=arr1[i];
			arr3[i+5]=arr2[i];
	}
	
	cout<<"The value of arrays 3 are :";
		 display(arr3);

				
		}
	

};

int main() {

	Array ar;
	int a[10];
		int b[10];
	
	int legth = ar.get_length();
	int size = ar.get_size();
	cout << "Enter value in 1st array " << endl;
	for (int i = 0; i < legth; i++)
		cin >> a[i];
	
//	ar.merge_array(a);
ar.merge_oneloop(a);

	//	ar.display(a);
	//	ar.get(a);
	//	ar.delete_arry(a);
	//	ar.display(a);
	//	ar.reverse_oder(a, 0, legth-1);
	//	ar.display(a);


}