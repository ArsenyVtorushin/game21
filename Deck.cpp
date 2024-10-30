#include "Deck.hpp"

void CardGame::Deck::PlaceCard(Card card)
{
	this->cards.push_back(card);
}

auto CardGame::Deck::GetCard(int num) -> CardGame::Card
{
	CardGame::Card card = this->cards[num - 1];
	this->cards.erase(this->cards.begin() + num - 1);
	return card;
}

auto CardGame::Deck::LookCard(int num) -> CardGame::Card*
{
	return &this->cards[num - 1];
}
