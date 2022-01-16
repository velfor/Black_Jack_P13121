#pragma once
#include "player.h"
#include "dealer.h"


class Game {
private:
	Deck d1;
	Player p1;
	Dealer de1;
public:
	void play() {
		p1.play(d1);
		if (p1.canContinue())
		{

			de1.play(d1);
			if (de1.canContinue())
			{
				if (p1.getScore() == de1.getScore()) {
					std::cout << "Draw" << std::endl;
				}
				else if (p1.getScore() > de1.getScore()) {
					std::cout << "You win!" << std::endl;
				}
				else if (p1.getScore() < de1.getScore()) {
					std::cout << "Dealer win!" << std::endl;
				}
			}
		}
	}
};