#pragma once
#include <iostream>

using namespace std;

enum BEVERAGE { COLA = 1, SPRITE, FANTA, RETURN_MONEY };
enum BEVERAGE_PRICE { COLA_PRICE = 100, SPRITE_PRICE = 200, FANTA_PRICE = 300 };

void SetMoney(int& money);
void ShowMenu(int& money);
bool Update(int& sel, int& money);
bool BuyDrink(BEVERAGE_PRICE price, int& money);