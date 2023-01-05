#include <Player.h>

Player::Player() :name(nullptr), bet(nullptr)
{


}
Player::~Player()
{
	delete[] bet;
}