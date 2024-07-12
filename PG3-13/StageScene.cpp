#include "StageScene.h"

StageScene::StageScene()
{
}

void StageScene::Init()
{
	inputHandler_ = new InputHandler();

	//Assign command
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	player_ = new Player();
}

void StageScene::Update()
{
	//getInput
	iCommand_ = inputHandler_->HandleInput();

	//setcommand
	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}

	player_->Update();
}

void StageScene::Draw()
{

	player_->Draw();

}
