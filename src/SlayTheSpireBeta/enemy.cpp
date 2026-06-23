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
    p.takeDamage(damageCalc());
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

void Enemy::addBlock()
{
    block += (baseAttack * 3) / 4;
}

bool Enemy::isDead() const
{
    return (hp <= 0);
}

void Enemy::resetBlock()
{
    block = 0;
}



