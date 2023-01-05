#include "Card.h"

Card::Card(Rank rNumber, Suit rSuit):rank(rNumber), suit(rSuit)
{


}
Card::~Card()
{
	delete[] bet;
}
Card::Rank getRank(Face&, Suit&) const
{
	return rank;

}
Card::Suit getSuit(Face&, Suit&) const
{

	return suit;
}