#include <iostream>
using namespace std;
class HealingSpell;

class Card
{
private:
    int damage, health;

public:
    Card(int damage, int health)
    {
        this->damage = damage;
        this->health = health;
    }

    void showHealth()
    {
        cout << "Health: " << this->health << endl;
    }

    int getHealth()
    {
        return this->health;
    }

    void setHealth(int health)
    {
        this->health = health;
    }
};

class HealingSpell
{
private:
    int heal;

public:
    HealingSpell(int heal)
    {
        this->heal = heal;
    }

    // binary + overloading

    Card operator+(Card c)
    {
        c.setHealth(c.getHealth() + heal);
        return c;
    }
};

int main()
{
    Card c1(1000, 5000);
    HealingSpell heal(1000);
    c1.showHealth();
    c1 = heal + c1;
    c1.showHealth();
    return 0;
}