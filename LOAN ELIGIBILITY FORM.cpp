#include<iostream>

using namespace std;
int main(){
    double account_number,Y,S,debt,loan,DTY;
//the loan is the amount required by the borrower or the amount to be lent to the client*/
/*DTY stands for debt to income ratio, it guides the bank when lending*/
	cout<<"_____________________ASCEND BANK_____________________"<<"\n";
	cout<<"*******LOAN ELIGIBILITY FORM*******"<<"\n";
	cout<<"The following are the neccessary requirements to determine a client's eligibility to get a loan"<<"\n";
	cout<<"1. Client's account number\n\n2. Monthly income earned\n\n3. Current savings\n\n4. Monthly debt\n\n";
/*we use the client's alc number to track the a/c,
the monthly income earned enables us determone whether the client earns enough to cover the loan,
current savings incase the client is unable to pay off their debt, these can cover the loan,
the monthly debt helps in determing how much amount our client has to pay off*/
	cout<<"Enter the account number:"<<"\n";
	cin>>account_number;
	
	cout<<"Enter the amount of monthly inocme earned by the client(ugx):"<<"\n";
	cin>>Y;//Y stands for the income earned by the client/
	
	cout<<"Enter the client's current savings(ugx):"<<"\n";
	cin>>S;//S stands for the client's current savings//
	
	cout<<"Enter the client's current monthly debt(ugx):"<<"\n";
	cin>>debt;
	
	cout<<"Enter the loan amount(ugx):"<<"\n";
	cin>>loan;
	
	if(loan<S)//go ahead and compute the DTY to ensure that the client meets the safety threshold and account standing
	{
	
	DTY=(debt/Y)*100;
	cout<<"the debt to income ratio(%)="<<DTY<<"\n\n";
	if(50<=DTY&&DTY<=100)//range for overlending
	{
		cout<<"\nOverlending!\n\nThe Bank should not lend to this client";
	}
	else if(0<=DTY&&DTY<=50)//appropriate range for lending
	{
		cout<<"\nAppropriate range for lending\n\nThe Bank should lend to this client";
	}
	else if(DTY>100){
		cout<<"\nThe client has a huge debt to cover\n\n The Bank should not lend";
	}
	else{
		cout<<"!!Connection Problem\n\n Please Try again later!!";
	}
}
else{
	cout<<"the loan is greater than the current savings\n\n"<<loan<<">"<<S;
	cout<<"\n\n The Bank should not lend to the client";
}
	return 0;
}
