// Kristi Mathis
// February 13th, 2018
// kamathis@dmacc.edu

//This program will calculate
//the average rainfall over
//a period of years, and display
//the number of months, total inches
//of rainfall, and average rainfall
//per month for the entire period.


#include <iostream>
using namespace std;

int main()
{
   //variable declarations
   const int MIN_YEARS = 1;
   const double MIN_RAIN = 1.0;
   const int TOTAL_MONTHS = 12;
   int years, month;
   double rain, total, average;
   //get the number of years to collect data for
   cout << "Enter the number of years: "; 
   cin >> years;
    //input validation
   	if (years >= MIN_YEARS)
	{
		//first loop for number of years to collect data for
		for (int count = 1; count <= years; count++)
		{
			//second loop for number of months to collect data for
			for (int month = 1; month <= TOTAL_MONTHS; month++)
			{
			//get the inches of rainfall for each month
	   		cout << "Enter the inches of rainfall for this month: ";
   			cin >> rain;
   				//input validation
   				while (rain < MIN_RAIN)
   				{
   				cout << "The rainfall must be greater than 0 inches.\n";
   				cout << "Enter the inches of rainfall. " << month << "?";
   				cin >> rain;
				}
				//store the total inches of rainfall
				total += rain; 
			}
		}
		//calculate number of months and average rainfall based on months and total rainfall
		//then display it
		month = TOTAL_MONTHS * years;
		cout << month << " months of rainfall, with " << total << " total inches of rainfall.\n";
		average = total / month;
		cout << average << " inches of average rainfall per month.";
	}else{
	cout << "The number of years must be greater than 0."; // validation failed
		 }
	

	

	

   return 0; 
}
