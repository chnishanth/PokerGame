#pragma once
#include <Player.h>
#include <Card.h>
using namespace std;
namespace Poker
{

	class Game
	{
		Game();
		virtual ~Game();

		virtual void draw() = 0;
		virtual Player* Winner() = 0;
		virtual void CompareCards(Card& c1, Card& c2) = 0;
	}
}
