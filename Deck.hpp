#ifndef DECK_HPP
#define DECK_HPP
#include "Card.hpp"

namespace CardGame
{
	class Deck
	{
	public:
		Deck() = default;
		Deck(std::vector<Card> cards) :cards(cards) {}

		void PlaceCard(Card card);
		auto GetCard(int num) -> Card;
		auto LookCard(int num) -> Card*;

	private:
		std::vector<Card> cards;
	};
}

#endif //DECK_HPP