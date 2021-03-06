#pragma once

#include "SaveProperties.h"

class Game;
class Level;
class Player;

namespace Save
{
	void serialize(void* serializeObj, const Properties& props,
		const Game& game, const Level& level, const Player& player);
}
