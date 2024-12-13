#include<iostream>
using namespace std;

//Write the function printO() here

//Write the function printO() here
void printO(int column, int row){
	if(column <= 0 || row <= 0){
		cout << "Invalid input";
	}else{
	for(int i = 0; i < column; i++){
		for(int j = 0; j < row; j++){
			cout << "O";
		}
		cout << "\n";
	}

	}

}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
