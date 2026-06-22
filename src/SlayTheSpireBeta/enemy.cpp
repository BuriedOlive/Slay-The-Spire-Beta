#include "enemy.h"

#include <cstdlib>
#include "player.h"

Enemy::Enemy()
{
    hp = 50;
    block = 0;
    baseAttack = 6;
}

Enemy::Enemy(int h, int ba) : hp(h), baseAttack(ba) {

}

Enemy::~Enemy()
{

}

int Enemy::getHp() const
{
    return hp;
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

void Enemy::attack(Player &p)
{

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



