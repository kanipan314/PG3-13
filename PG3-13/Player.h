#pragma once
#include "Vector2.h"

class Player
{

private:
	Vector2 pos_ = {100,100};
	float speed_ = 10.0f;

public:
	Player();

	void Init();
	void Update();
	void Draw();

	//メンバ関数
	void MoveRight();
	void MoveLeft();


};

