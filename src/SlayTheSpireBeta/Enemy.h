#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
private:
    int hp;
    int maxHp;
    int block = 0;
    int baseAttack;

public:
    Enemy(int h, int ba);
    ~Enemy();

    void setBlock(int& newBlock);

    int getHp() const;
    int getMaxHp() const;
    int getBlock() const;

    int damageCalc() const;


    void takeDamage(const int& damage);
    void addBlock(const int& damage);
    // void attack(const int& damage, Player& p);
    bool isDead() const;



};










#endif // ENEMY_H