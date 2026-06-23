<<<<<<< HEAD
#ifndef BATTLEMANAGER_H
#define BATTLEMANAGER_H

class battlemanager
{
public:
    battlemanager();
};

#endif // BATTLEMANAGER_H
=======
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

    Player getPlayer() const;
    Enemy getEnemy() const;

    void playerAttack();
    void playerDefend();

    void enemyTurn();

    void checkStatus();

};


>>>>>>> f90977e31471f3f1156294f8c9a89d2abb668045
