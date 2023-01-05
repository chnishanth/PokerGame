#pragma once
#include <Player.h>
#include <Card.h>
#include <Game.h>
using namespace std;
namespace Poker
{

	class SevenCard : public Game
	{
	public:
		SevenCard();
		virtual ~SevenCard();

		void draw();
		Player* Winner();
		void CompareCards(Card& c1, Card& c2);
	}
}
