#include "deck.h"
Deck::Deck() {
	for (int i = suitDiamonds; i < MAX_SUITS; i++) {
		for (int j = rank2; j < MAX_RANK; j++) {
			Card temp_card(static_cast<CardRank>(j), static_cast<CardSuit>(i));
			deck.push_back(temp_card);
		}
	}
}
void Deck::shuffle() {
	//�������������� ������
	for (int j = 0; j < 5; j++) {
		for (size_t i = 0; i < deck_size; i++) {
			size_t rand = getRandomCardNumber();
			std::swap(deck[i], deck[rand]);
		}
	}
}
void Deck::printDeck() {
	// ������ ������
	for (size_t i = 0; i < deck_size; i++) {
		deck[i].printCard();
	}
}
Card Deck::pop() {
	//��������� ��������� ����� �� ������
	Card temp = deck.back();
	// ������� ��������� �����
	deck.pop_back();
	//���������� �����
	return temp;
}