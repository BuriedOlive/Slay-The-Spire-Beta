#pragma once

class Enemy;

class Player
{
private:
    int hp;
    int block = 0;
    int baseAttack;

public:
    Player();
    Player(int h, int ba);
    ~Player();

    int getHp() const;
    int getBlock() const;

    void setHp(int value);

    int damageCalc() const;

    void attack(Enemy& enemy);
    void addBlock();
    void takeDamage(int dmg);

    bool isDead() const;
    void resetBlock();
};