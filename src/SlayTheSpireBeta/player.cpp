#include "player.h"
#include "enemy.h"
#include <cstdlib>

Player::Player()
{
    hp = 50;
    block = 0;
    baseAttack = 6;
}

Player::Player(int h, int ba): hp(h), baseAttack(ba)
{

}

Player::~Player()
{

}
int Player::getHp() const
{
    return hp;
}

int Player::damageCalc() const
{
    int currentDamage = baseAttack;

    currentDamage += rand()%5 - 2;

    if (currentDamage < 0) currentDamage = 0;

    return currentDamage;
}
void Player::takeDamage(int dmg)
{
    if (block >= dmg)
    {
        block -= dmg;
        dmg = 0;
    }
    else
    {
        dmg -= block;
        block = 0;
    }

    hp -= dmg;
}
void Player::attack(Enemy& enemy)
{
    enemy.takeDamage(damageCalc());
}
void Player::addBlock()
{
    block += 5;
}
bool Player::isDead() const
{
    return hp <= 0;
}
void Player::resetBlock()
{
    block = 0;
}