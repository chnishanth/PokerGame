#pragma once
#include <QDataStream>
using namespace std;
namespace Poker
{
	class ClientUI: QSocket
	{

	private slots:
		void editcombonotification(QComboBox& ct);

	private:
		QComboBox* gameList = nullptr;
		QLineEdit *PlayerName;

		//socket
		QTcpSocket* tcpSocket = nullptr;

	public:
		ClientUI();
		virtual ~ClientUI();
	};
}
