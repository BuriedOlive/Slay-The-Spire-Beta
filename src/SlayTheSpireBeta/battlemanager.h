#pragma once

class Player;

class Enemy;

enum class BattleStatus {
    PLAYERTURN,
    ENEMYTURN,
    PLAYERWIN,
    PLAYERLOSE
};

class BattleManager
{
private:
    BattleStatus status;

public:
    BattleManager();
    ~BattleManager();

    void playerAttack(Player& player, Enemy& enemy);
    void playerDefend(Player& player, Enemy& enemy);

    void enemyTurn(Player& player, Enemy& enemy);

    void checkStatus(const Player& player, const Enemy& enemy);



};


