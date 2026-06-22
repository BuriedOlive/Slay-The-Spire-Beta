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

void Enemy::takeDamage(int damage)
{
    if (damage > block) {
        damage -= block;
        block = 0;
        hp -= damage;
    } else {
        block -= damage;
    }
}

void Enemy::addBlock(const int &b)
{
    block += b;
}

bool Enemy::isDead() const
{
    if (hp <= 0) return true;
    else return false;
}



