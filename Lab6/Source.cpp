#include <iostream>
#include <string>

using namespace std;

int main() {

	struct timetable
	{
		int iNumber;
		char chType;
		string strDestination;
		char chTime[6];
	};

	const int iNumber_of_flights = 18;
	string strDestination;
	timetable Flight[iNumber_of_flights];

	Flight[0] = { 1,'B',"Prague","08:30" };
	Flight[1] = { 2,'A',"Warshaw","10:00" };
	Flight[2] = { 3,'A',"Kyiv","11:50" };
	Flight[3] = { 4,'B',"Paris","13:00" };
	Flight[4] = { 5,'A',"Frankfurt","14:20" };
	Flight[5] = { 6,'B',"Baden","16:00" };
	Flight[6] = { 7,'A',"Prague","10:30" };
	Flight[7] = { 8,'B',"Warshaw","12:00" };
	Flight[8] = { 9,'B',"Kyiv","12:50" };
	Flight[9] = { 10,'A',"Paris","14:00" };
	Flight[10] = { 11,'B',"Frankfurt","15:40" };
	Flight[11] = { 12,'A',"Baden","17:30" };
	Flight[12] = { 13,'A',"Prague","12:30" };
	Flight[13] = { 14,'A',"Warshaw","14:00" };
	Flight[14] = { 15,'B',"Kyiv","15:50" };
	Flight[15] = { 16,'B',"Paris","16:00" };
	Flight[16] = { 17,'B',"Frankfurt","18:20" };
	Flight[17] = { 18,'B',"Baden","20:00" };

	cout << "Our airline has flights to such cities: Prague, Warshaw, Kyiv, Paris, Frankfurt" << endl
		<< "To check the flight table, enter the destination path." << endl << "The first letter is uppercase. Don't use space or special characters" << endl;
	
	char chExit_control = 'Y';
	while (chExit_control == 'Y' || chExit_control == 'y') {

		cout << endl << "Input city name (Prague/Warshaw/Kyiv/Paris/Frankfurt)" << endl;
		cin >> strDestination;
		cout << endl;


		for (int i = 0; i < iNumber_of_flights; i++) {

			if (Flight[i].strDestination == strDestination) {

				cout << "Flight id - " << Flight[i].iNumber << " Type - " << Flight[i].chType << " Time - " << Flight[i].chTime << endl;

			}
		}

		cout << endl << "Would you like to check another city. Type Y to CONTINUE, something else to EXIT " << endl;
		cin >> chExit_control;
	}
	
	return 0;
}