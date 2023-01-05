#pragma once
#include <Player.h>
#include <Card.h>
#include <Game.h>
using namespace std;
namespace Poker
{

	class FiveCard: public Game
	{
	public:
		FiveCard();
		virtual ~FiveCard();

		void draw();
		Player* Winner();
		void CompareCards(Card& c1, Card& c2);
	}
}
