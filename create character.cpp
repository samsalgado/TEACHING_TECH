#include <iostream>

using namespace std;
class Player {
public:
    string username;
private:

    string guild;
    string race;
    int level;

public:
    Player(string u, string g, string r, int l) {
    username= u;
    guild= g;
    race = r;
    level= l;

}
void printInfo() {
cout<<"The user name of the player is "<<username<<endl;
cout<<"The guild of the player is "<<guild<<endl;
cout<<"The race of the player is "<<race<<endl;
cout<<"The level of the player is "<<level<<endl;

}

};
class GamerClass: public Player{
public:
    string Gamertype;
    GamerClass(string u, string g, string r, int l) : Player(u,g,r,l){
    Gamertype= "Warrior";
    }
    void printGamerType(){
    cout<<"The gamer type of "<<username<< " is "<<Gamertype;
    }
};
int main()
{
    GamerClass ivan = GamerClass("Grirdar Flintreach", "RiverdaleStans", "Dwarf", 44);

    ivan.printInfo();
    ivan.printGamerType();


    return 0;
}
