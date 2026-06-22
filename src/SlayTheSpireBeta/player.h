#pragma once

class Enemy;

class Player
{
private:
    int hp;
    int block;
    int damage;

public:
    Player();

    int getHp() const;
    int getBlock() const;

    void setHp(int value);

    void attack(Enemy& enemy);
    void defend();
    void takeDamage(int dmg);

    bool isDead() const;
    void resetBlock();
};