#pragma once
#include "hand.h"
#include "deck.h"

class Dealer :public Hand {
public:
	Dealer() :Hand() {}
	void play(Deck& deck) {
		do {
			Card tmp = deck.pop();
			addCard(tmp);
			printHand();
			getTotal();
			std::cout << m_score << std::endl;
			if (m_score > 21) {
				std::cout << "Dealer lose!" << std::endl;
				return;
			}
		} while (m_score < 17);
	}
};
