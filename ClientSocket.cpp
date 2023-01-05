#include "Card.h"

ClientUI::ClientUI()
{

	connect(tcpsocket, &QIODevice::readyReas, this, &Client::gametype)
}
ClientUI::~ClientUI()
{
}
