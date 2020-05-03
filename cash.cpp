#include <iostream>
using namespace std;

bool CheckMoney(int money) {
	if (money < 0)
		return false;
	return true;
}

int ConvertMoney(float money) {
	return money *= 100;
}

int Count25(int& money) {
	int counter = money / 25;
	money = money % 25;
	return counter;
}

int Count10(int& money) {
	int counter = money / 10;
	money = money % 10;
	return counter;
}