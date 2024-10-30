#ifndef HAND_HPP
#define HAND_HPP
#include "Game.hpp"

namespace CardGame
{
	class Hand
	{
	public:
		Hand() = default;
		Hand(std::vector<Card> cards) :cards(cards) {}

		void PlaceCard(Card card);
		auto GetCard(int num)->Card;
		auto LookCard(int num)->Card*;

	private:
		std::vector<Card> cards;
	};
}

#endif //HAND_HPP