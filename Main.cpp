#include <iostream>
#include <vector>


using namespace std;

class PlayerInfo{
    public:
        string name;
        char obj;
        int victories;
        PlayerInfo(string _name, char obj, int victories){
            name = _name;
            obj = obj;
            victories = victories;
        }
        virtual string getName(){
            return name;
        }
};

int main() {
  vector <PlayerInfo*> Player;


  PlayerInfo *auxinfos = new PlayerInfo("Computador", 'X', 0);
  Player.push_back(auxinfos);
  auxinfos = new PlayerInfo("Nome1", 'O', 0);
  Player.push_back(auxinfos);

  printf("%s", Player[0]->getName());

  return 0x29A;
}
