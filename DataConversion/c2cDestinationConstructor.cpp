#include <iostream>
using namespace std;
class Beast;
class Beast
{
private:
    int kills, deaths, wipe;

public:
    Beast(int kills, int deaths, int wipe)
    {
        this->kills = kills;
        this->deaths = deaths;
        this->wipe = wipe;
    }

    int getKills()
    {
        return this->kills;
    }
    int getDeaths()
    {
        return this->deaths;
    }
};

class Player
{
private:
    int kills, deaths;

public:
    Player(int kills, int deaths)
    {
        this->kills = kills;
        this->deaths = deaths;
    };

    Player(Beast b)
    {
        this->kills = b.getKills();
        this->deaths = b.getDeaths();
    }

    void print()
    {
        cout << kills << endl
             << deaths;
    }
};

int main()
{
    Beast b(10, 2, 1);
    Player p = b;
    p.print();
    return 0;
}