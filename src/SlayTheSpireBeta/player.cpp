#include "player.h"
#include "enemy.h"

Player::Player()
{
    hp = 50;
    block = 0;
    damage = 6;
}
int Player::getHp() const
{
    return hp;
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
   //enemy.takeDamage(damage);
}
void Player::defend()
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