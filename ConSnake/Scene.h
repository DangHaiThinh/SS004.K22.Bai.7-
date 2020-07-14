#pragma once
#include "Library.h"
#include "SnakeKun.h"
#include "Food.h"
class Scene
{
private:
	GameMode _gm;
	GameDifficult _gd;
	SnakeKun* _snake;
	Food* _food;
	MapData _map[MAX][MAX];
	SnakeDirection userInput, prevInput;
	void drawMap();
	void endGame();
public:
	Scene(MapData _fileMap[MAX][MAX],GameMode _gd,GameDifficult gameDiff, bool& _islgbt);
	void run();
	friend void UserInput(void* id);
};

