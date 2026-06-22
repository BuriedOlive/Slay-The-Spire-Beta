#include "Enemy.h"
#include <cstdlib>

Enemy::Enemy(int h, int ba) : maxHp(h), hp(h), baseAttack(ba) {

}

Enemy::~Enemy()
{

}

void Enemy::setBlock(int &newBlock)
{
    block = newBlock;
}

int Enemy::getHp() const
{
    return hp;
}

int Enemy::getMaxHp() const
{
    return maxHp;
}

int Enemy::getBlock() const
{
    return block;
}

int Enemy::damageCalc() const
{
    int currentDamage = baseAttack;

    currentDamage += rand()%5 - 2;

    if (currentDamage < 0) currentDamage = 0;

    return currentDamage;
}



