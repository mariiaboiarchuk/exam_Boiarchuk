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