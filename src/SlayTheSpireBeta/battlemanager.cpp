#include "battlemanager.h"

#include <cstdlib>

bool BattleManager::isGameOver() const
{
    return status == BattleStatus::PLAYERWIN ||
           status == BattleStatus::PLAYERLOSE;
}
BattleManager::BattleManager(Player p, Enemy e)
    : status(BattleStatus::PLAYERTURN),
    player(p),
    enemy(e)
{
}

Player BattleManager::getPlayer() const
{
    return player;
}

Enemy BattleManager::getEnemy() const
{
    return enemy;
}

void BattleManager::playerAttack()
{
    if (status != BattleStatus::PLAYERTURN)
        return;

    player.attack(enemy);

    checkStatus();


        status = BattleStatus::ENEMYTURN;

    if (enemy.isDead())
    status = BattleStatus::PLAYERWIN;


}

void BattleManager::playerDefend()
{
    if (status != BattleStatus::PLAYERTURN)
        return;

    player.addBlock();

    checkStatus();

    if (status == BattleStatus::PLAYERTURN)
    {
        status = BattleStatus::ENEMYTURN;
        enemy.resetBlock();
    }
}

void BattleManager::enemyTurn()
{


    int action = rand() % 3;

    if (action < 2)
    {
        enemy.attack(player);
    }
    else
    {
        enemy.addBlock();
    }

    checkStatus();

        //player.resetBlock();
        status = BattleStatus::PLAYERTURN;

    if (player.isDead())
            status = BattleStatus::PLAYERLOSE;

}

void BattleManager::checkStatus()
{
    if (player.getHp() <= 0)
    {
        status = BattleStatus::PLAYERLOSE;
    }
    else if (enemy.getHp() <= 0)
    {
        status = BattleStatus::PLAYERWIN;
    }
}

void BattleManager::startBattle()
{
    // bool playerHasPlayed=false;
    // while (status!=BattleStatus::PLAYERWIN && status !=BattleStatus::PLAYERLOSE)
    // {
    //     if (status==BattleStatus::ENEMYTURN)
    //         enemyTurn();
    // }
}