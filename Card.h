#pragma once
#include <QDataStream>
using namespace std;
namespace Poker
{
	enum Rank { Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };
	enum Suit { Diamonds, Hearts, Clubs, Spades };
	class Card
	{
	private:
		const Rank rank;
		const Suit suit;

	public:
		Card(Rank, Suit);
		const Rank getRank(Face&, Suit&) const;
		const Suit getSuit(Face&, Suit&) const;
	
		friend QDataStream& operator==(const Card&, const Card&);


	};
}
