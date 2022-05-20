#include<iostream>
#include<string>
using namespace std;
struct seat {
	int id;
	bool seats ;
};
struct car_id {
	int id2;
	seat c[30];
};
struct train {
     car_id z[10];
};


int main() {
	int seat_number,car_number,n,count1=0,count2=0;
	train t;
	bool stat;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 30; j++) {
			t.z[i].c[j].seats = true;
		}
	}


	do {
	cout << "1: Reserve a ticket." << endl;
		cout << "2:you want to Cancel the reservation." << endl;
		cout << "3:you need to  Check whether a specific car has available seat or not." << endl;
		cout << "4:you need to Check whether a specific seat is available or not." << endl;
		cout << "5:you need to Get the number of the available seats in a specific car." << endl;
		cout << "6:you need to see all the seats status of a specific car." << endl;
		cout << "7: Exit." << endl;
		cin >> n;

		switch (n) {
		case 1:
		{
			cout << "enter the trian car number: " << endl;
			cin >> car_number;
			cout << "enter the seat number:" << endl;
			cin >> seat_number;
			if (t.z[car_number].c[seat_number].seats == true)
			{
				t.z[car_number].c[seat_number].seats = false;
				cout << "your seat has been reseved ." << endl;
				cout << endl;

			}

			else {

				cout << "this seat is not available now ." << endl;
				cout << endl;

			}
			break;
		}

		case 2:
		{
			cout << "enter your car number :" << endl;
			cin >> car_number;
			cout << "enter the seat number:" << endl;
			cin >> seat_number;
			if (t.z[car_number].c[seat_number].seats == false) {
				t.z[car_number].c[seat_number].seats = true;
				cout << "reservation is canceled" << endl;
				cout << endl;
			}
			else {
				cout << "this seat is not reserved to be canceleld " << endl;
				cout << endl;
			}
		}
		break;
		case 3:
		{	cout << "enter the car number: " << endl;
		cin >> car_number;
		for (int i = 0; i < 30; i++) {
			if (t.z[car_number].c[i].seats == true) {
				count1++;
				break;
			}
		}
		if (count1 != 0) {
			cout << "there are available seats in this car" << endl;
			cout << endl;
		}
		else {
			cout << "there are'not available seats in this car." << endl;
			cout << endl;
		}
		}
		count1 = 0;
		break;
		case 4:
		{	cout << "enter the car number:" << endl;
		cin >> car_number;
		   cout << "enter the seat number:" << endl;
		cin>> seat_number;
		if (t.z[car_number].c[seat_number].seats == true)
		{
			cout << "the seat that you choosed is available" << endl;
			cout << endl;
		}
		else {
			cout << "the seat that you choosed is not available" << endl;
			cout << endl;
		}
		}
		break;
		case 5:
		{	cout << "enter the car number " << endl;
		cin >> car_number;
		for (int i = 0; i < 30; i++) {
			if (t.z[car_number].c[i].seats == true) {
				count2++;

			}
		}
		cout << "the number of available seats in this car is:" << count2 << endl;
		cout << endl;
		}
		count2 = 0;
		break;
		case 6:
		{cout << "enter the car number:" << endl;
		cin >> car_number;
		for (int i = 0; i < 30; i++) {
			if (t.z[car_number].c[i].seats == true) {
				cout << "the number of seat in this car:" << "  " << i << "   is available" << endl;

			}
			else {
				cout << "the seat you reserved:" << "  " << i << "   is not available" << endl;

			}
		}
		cout << endl;
		}
		break;
		case 7: {

			return 0;
		}

		}
	}
	while (n != 7);


	return 0;
}
