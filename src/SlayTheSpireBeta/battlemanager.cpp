#include "battlemanager.h"
#include <cstdlib>

BattleManager::BattleManager(Player p, Enemy e) : status(BattleStatus::PLAYERTURN), player(p), enemy(e)
{
}

void BattleManager::playerAttack()
{
    player.attack(enemy);
    status = BattleStatus::ENEMYTURN;
    enemy.resetBlock();
}

void BattleManager::playerDefend()
{
    player.addBlock();
    status = BattleStatus::ENEMYTURN;
    enemy.resetBlock();
}

void BattleManager::enemyTurn()
{

    if (rand() % 3) {
        enemy.attack(player);
    } else {
        enemy.addBlock();
    }

    status = BattleStatus::PLAYERTURN;

    player.resetBlock();
}

void BattleManager::checkStatus()
{
    if (player.getHp() <= 0) {
        status = BattleStatus::PLAYERLOSE;

    } else if (enemy.getHp() <= 0) {
        status = BattleStatus::PLAYERWIN;
    }

}

