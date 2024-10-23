#ifndef CARD_HPP
#define CARD_HPP

namespace CardGame {//пространство имен 
	enum Suit {//набор целочисленных констант, перечисление
		clubs= 0, diamonds = 1, hards = 2, spikes = 3//масти


	};

	enum Ranks {
		two = 2,
		three = 3,
		four = 4,
		five = 5,
		sizx = 6,
		seven = 7,
		eigth = 8,
		nine = 9,
		ten = 10,
		jack,
		queen,
		king, 
		ace
	};

	class Card {
	public:
		Card() = default;
		Card(Ranks rank, Suit suit):value_(rank),suit_(suit){}

		Suit GetSuit()const;
		Ranks getValue()const;



	private:
		Ranks value_;//значение
		Suit suit_;//масть


	};


}


#endif //CARD_HPP