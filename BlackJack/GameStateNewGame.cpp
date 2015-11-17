#include "GameStateNewGame.h"
#include "Game.h"

GameStateNewGame::GameStateNewGame(Game* game, PokerTable* table)
	:GameState(game, table)
{
}

GameStateNewGame::~GameStateNewGame()
{
}

GameState* GameStateNewGame::run()
{
	m_game->initFirstPlayer();
	return m_nextState->init();
}
