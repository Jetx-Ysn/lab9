#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,per,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> per;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effec
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	double newbalance=loan;
	int num=1;
	while(newbalance > 0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << num; 
	num ++;
	cout << setw(13) << left << newbalance;
	cout << setw(13) << left << newbalance * per / 100;
	cout << setw(13) << left << newbalance + (newbalance * per / 100);
	if(newbalance + (newbalance * per / 100) < pay){
		pay = newbalance + (newbalance * per / 100);
		newbalance = 0;
	}
	else{newbalance = (newbalance + (newbalance * per / 100)) - pay;}
	cout << setw(13) << left << pay;
	cout << setw(13) << left << newbalance;
	cout << "\n";
	
	}
	
	return 0;

}

