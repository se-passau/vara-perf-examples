#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

 /*
 * Commands :
 * ___REGION_START __RT_High "0"
 * ___REGION_END __RT_High "0"
 */

enum Food {
		PIZZA = 15, PASTA = 10
};

enum Drink {
		WATER = 3, BEER = 4, COKE = 2
};

//Pauses the program
void sleep(int time) {
	this_thread::sleep_for(chrono::seconds(time));
}

Food food;
Drink drink;

//Indicates if already chosen
bool food_chosen = false;
bool drink_chosen = false;

//It takes 5 time units to choose
void choose_food(Food choice) {
	if (food_chosen) {
		cout << "You have already chosen your food." << endl;
	} else if (choice == PIZZA) {
		cout << "You have chosen Pizza as your food." << endl;
		food = PIZZA;
		food_chosen = true;
	} else if (choice == PASTA) {
		cout << "You have chosen Pasta as your food." << endl;
		food = PASTA;
		food_chosen = true;
	} else {
		cout << "Food is not on menu." << endl;
	}
	sleep(5);
}

//It takes 2 time units to choose
void choose_drink(Drink choice) {
	if (drink_chosen) {
		cout << "You have already chosen your drink." << endl;
	} else if (choice == WATER) {
		cout << "You have chosen Water as your drink." << endl;
		drink = WATER;
		drink_chosen = true;
	} else if (choice == BEER) {
		cout << "You have chosen Beer as your drink. -Good choice-" << endl;
		drink_chosen = true;
		drink = BEER;
	} else if (choice == COKE) {
		cout << "You have chosen Coke as your drink." << endl;
		drink = COKE;
		drink_chosen = true;
	} else {
		cout << "Drink is not on menu." << endl;
	}
	sleep(2);
}

void order_food() {
	if (food == PIZZA) {
		cout << "Your pizza is coming in " << PIZZA << " minutes. Thank you for your patience." << endl;
		sleep(PIZZA);
	} else if (food == PASTA) {
		cout << "Your pasta is coming in " << PASTA << " minutes. Thank you for your patience." << endl;
		sleep(PASTA);
	} else {
		cout << "Your order is not on the menu, sorry." << endl;
	}
}

void order_drink() {
	if (drink == WATER) {
		cout << "I´ll be back in " << WATER << " minutes." << endl;
		sleep(WATER);
	} else if (drink == BEER) {
		cout << "I´ll be back in " << BEER << " minutes." << endl;
		sleep(BEER);
	} else if (drink == COKE) {
		cout << "I´ll be back in " << COKE << " minutes." << endl;
		sleep(COKE);
	} else {
		cout << "Your order is not on the menu, sorry." << endl;
	}
}

int main() {
	___REGION_START __RT_High "0"
	___REGION_START __RT_High "1"
	choose_food(PIZZA);
	___REGION_END __RT_High "1"

	___REGION_START __RT_High "2"
	choose_drink(BEER);
	___REGION_END __RT_High "2"

	___REGION_START __RT_High "3"
	order_food();
	___REGION_END __RT_High "3"

	___REGION_START __RT_High "4"
	order_drink();
	___REGION_END __RT_High "4"

	___REGION_END __RT_High "0"

	return 0;
}