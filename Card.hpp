#ifndef CARD_HPP
#define CARD_HPP
#include <iostream>
#include <vector>
#include <string>

namespace CardGame 
{
	enum Suit //набор целочисленных констант, перечисление
	{
		clubs = 0, diamonds = 1, hearts = 2, spades = 3 // масти
	};

	enum Ranks 
	{
		two = 2,
		three = 3,
		four = 4,
		five = 5,
		six = 6,
		seven = 7,
		eigth = 8,
		nine = 9,
		ten = 10,
		jack,
		queen,
		king, 
		ace
	};

	class Card 
	{
	public:
		Card() = default;
		Card(Ranks rank, Suit suit) :value(rank),suit(suit) {}

		Suit GetSuit()const;
		Ranks getValue()const;

	private:
		Ranks value; // значение
		Suit suit; // масть
	};
}

#endif //CARD_HPP