#include "Player.h"
#include "Novice.h"

Player::Player()
{
}

void Player::Init()
{
}

void Player::Update()
{
}

void Player::Draw()
{

	Novice::DrawBox((int)pos_.x, 100,200, 200, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight()
{

	this->pos_.x += this->speed_;

}

void Player::MoveLeft()
{
	this->pos_.x -= this->speed_;

}
