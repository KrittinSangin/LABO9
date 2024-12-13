#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	cout << fixed << setprecision(3);
	double loan, rate,pay,prevbalance,interest,total,newbalance = 1;
	int endofyear = 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	prevbalance = loan;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	

	while(newbalance >= 0){
	cout << setw(13) << left << endofyear;
	interest = prevbalance * (rate/100);
	total = prevbalance + interest;
	newbalance = total - pay;
	cout << setw(13) << left << prevbalance;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	
	if(newbalance > 0){
		cout << setw(13) << left << pay;
		cout << setw(13) << left << newbalance;
		}
	else 
	{
	cout << setw(13) << left << total;
	cout << setw(13) << left << 0.00;
	}
	cout << "\n";

	prevbalance = newbalance;
	if (newbalance < 0){
	newbalance = 0;
	break;
	}
	endofyear++;
	}
	

	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	 

	return 0;
}
