#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
private:
    int hp;
    int maxHp;
    int block = 0;

public:

    void takeDamage(int damage);
    void addBlock(int damage);
    // void attack(int damage, Player& p);
    bool isAlive();
};










#endif // ENEMY_H