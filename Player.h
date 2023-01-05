#pragma once
#include <QDataStream>
#include <Card.h>
using namespace std;
namespace Poker
{
	class Player
	{
	private:
		const QString& name;
		const char* bet;
		bool bIsDealer();


	public:
		Player();
		Player(const Player& player) = delete;

		virtual ~Player();
		//getters
		const QString& GetName();
		const char* Getbet();

		//setters
		void setName(QString& name) const;
		void setbet(const char* bet) const;

		typedef unique_ptr<collection<Card>> listcollection
		//unique_ptr< Hand> hand;
		listcollection cardvector;

		friend QDataStream& operator<<(QDataStream&, const Player&);
		friend QDataStream& operator==(Card c1, Card C2);

	}
}