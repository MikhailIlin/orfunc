/*
 * oufrunc.cpp
 *
 *  Created on: 16 июл. 2018 г.
 *      Author: user
 */
#include <iostream>
//simon says
void simon(int); //прототип функции simon

int main()
{
	using namespace std;
	simon(3);	//вызов функции simon
	cout << "pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "done!" << endl;
	return 0;
}

void simon(int n) //определение фукнкции simon
{
	using namespace std;
	cout << "Simon says touch you toes " << n << " times." << endl;
}//функции void не требуют опрераторов return



