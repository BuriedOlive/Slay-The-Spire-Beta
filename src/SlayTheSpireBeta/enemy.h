#pragma once

class Player;

class Enemy {
private:
    int hp;
    int block = 0;
    int baseAttack;

public:
    Enemy();
    Enemy(int h, int ba);
    ~Enemy();

    int getHp() const;
    int getBlock() const;

    void setHp(int value);

    int damageCalc() const;

    void attack(Player& p);
    void addBlock();
    void takeDamage(int damage);

    bool isDead() const;
    void resetBlock();

};
