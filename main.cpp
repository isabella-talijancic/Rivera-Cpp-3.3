/*Payroll Report - program calculates Net Pay by subtracting 
 	Deductions from Gross Pay.
  Input:  Interactive
  Output: Payroll Report
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string employeeName;
	double grossPay;
	double deductions;
	double netPay;
	const double RATE = 0.25;
	const string END = "END";

	cout << "Enter Employee’s Last Name :";
	cin >> employeeName;
	
	while(employeeName != "END")
	{
		cout << "Enter Employee’s Gross Pay : $";
		cin >> grossPay;
		
		deductions = grossPay * RATE;
		netPay = grossPay - deductions;
	   
		cout << "\n* * * * *  Payroll Report  * * * * *\n\n";
	   
		cout << "Employee Name : " << employeeName;
		cout << "\nGross Pay : $" << grossPay;
		cout << "\nDeductions : $" << deductions;
		cout << "\nNet Pay : $" << netPay;
		   
		cout << "\n\nEnter employee's name or 'END' to exit:";
		cin >> employeeName;
		cout << "\nEnd of Payroll Report";
	}
   
    return 0;
} 