#include <iostream>

using namespace std;

#define PI 3.1415
#define ALIVE_MESSAGE cout << "Eu estou Vivo!!!"
#define DEAD_MESSAGE cout << "Infelizmente eu murriiii!!!"

int main(int argc, char const *argv[])
{
  int life, shot = 0;
  char phase = ' ';
  bool alive = 0;

  cout << life << endl;
  cout << phase << endl;
  cout << alive << endl;

  cout << "Digite as vidas: ";
  cin >> life;

  cout << "Qual fase deseja jogar? ";
  cin >> phase;

  cout << "Você está vivo? ";
  cin >> alive;

  cout << "\n\nTemos " << life << " vidas!" << endl;
  cout << "Vamos jogar a fase " << phase << endl;

  alive ? ALIVE_MESSAGE : DEAD_MESSAGE;

  return 0;
}
