#include<iostream>
#include<cmath>
#include<ctime>

using namespace std;

int main(){
	time_t t = time(NULL); //declarring time variable
	tm* tPtr = localtime(&t);
	cout<<"Hours : "<<(tPtr->tm_hour)<<endl;
	cout<<"Minutes : "<<(tPtr->tm_min)<<endl;
	cout<<"Seconds : "<<(tPtr->tm_sec)<<endl;

	cout<<"Day : "<<(tPtr->tm_mday)<<endl;
	cout<<"Month : "<<(tPtr->tm_mon)+1<<endl;
	cout<<"Year : "<<(1900+(tPtr->tm_year))<<endl;
cout << " weekday = " << (tPtr->tm_wday) << endl; // Displaying weekday
    cout << " day of year : " << (tPtr->tm_yday) << endl; // Displaying day of the year
    cout << " daylight savings : " << (tPtr->tm_isdst) << endl; // Displaying daylight savings

    cout << endl; // Outputting empty lines for formatting

    // Displaying current date and time in a formatted manner
    cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl; // Displaying the current date
    cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; // Displaying the current time


	return 0;
}
