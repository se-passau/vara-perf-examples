#include <iostream>
#include <unistd.h>

using namespace std;

/*
 * Commands :
 * ___REGION_START __RT_High "0"
 * ___REGION_END __RT_High "0"
 */

enum Food { PIZZA = 15000000, PASTA = 10000000 };

enum Drink { WATER = 3000000, BEER = 4000000, COKE = 2000000 };

Food food;
Drink drink;

// Indicates if already chosen
bool food_chosen = false;
bool drink_chosen = false;

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
  usleep(5000000);
}

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
  usleep(2000000);
}

void order_food() {
  if (food == PIZZA) {
    cout << "Your pizza is coming in " << PIZZA / 1000000
         << " seconds. Thank you for your patience." << endl;
    usleep(PIZZA);
  } else if (food == PASTA) {
    cout << "Your pasta is coming in " << PASTA / 1000000
         << " seconds. Thank you for your patience." << endl;
    usleep(PASTA);
  } else {
    cout << "Your order is not on the menu, sorry." << endl;
  }
}

void order_drink() {
  if (drink == WATER) {
    cout << "I´ll be back in " << WATER / 1000000 << " seconds." << endl;
    usleep(WATER);
  } else if (drink == BEER) {
    cout << "I´ll be back in " << BEER / 1000000 << " seconds." << endl;
    usleep(BEER);
  } else if (drink == COKE) {
    cout << "I´ll be back in " << COKE / 1000000 << " seconds." << endl;
    usleep(COKE);
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