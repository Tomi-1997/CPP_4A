#if !defined GAME_H
#define GAME_H

#include <string>
#include <vector>
#include "Player.hpp"

namespace coup
{
    class Game
    {
        std::vector<Player> myPlayers;

        public:
        std::vector<std::string> players();
        Game();
        ~Game();
    };
}
#endif