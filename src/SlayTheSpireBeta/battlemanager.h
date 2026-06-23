#pragma once

#include "player.h"
#include "enemy.h"

enum class BattleStatus {
    PLAYERTURN,
    ENEMYTURN,
    PLAYERWIN,
    PLAYERLOSE
};

class BattleManager
{
private:
    BattleStatus status;
    Player player;
    Enemy enemy;

public:
    BattleManager(Player p, Enemy e);
    ~BattleManager() = default;

    void playerAttack();
    void playerDefend();

    void enemyTurn();

    void checkStatus();

};


