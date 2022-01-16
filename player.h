#pragma once
#include "hand.h"
#include "deck.h"

class Player :public Hand {
public:
	Player():Hand() {}
	void play(Deck& deck) {
		char choice;
		do {
			Card tmp = deck.pop();
			addCard(tmp);
			printHand();
			getTotal();
			std::cout << getScore() << std::endl;
			if (getScore() > 21) {
				std::cout << "You lose!" << std::endl;
				return;
			}
			std::cout << "Another card? (y/n) ";
			std::cin >> choice;

		} while (choice == 'y' || choice == 'Y');

	}
};
