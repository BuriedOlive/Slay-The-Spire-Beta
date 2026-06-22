#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
private:
    int hp;
    int maxHp;
    int block = 0;
    int baseAttack;

public:
    Enemy(int h);
    ~Enemy();

    void takeDamage(int damage);
    void addBlock(int damage);
    // void attack(int damage, Player& p);
    bool isDead();


};










#endif // ENEMY_H