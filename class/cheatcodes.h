#ifndef CHEATCODES
#define CHEATCODES

class Cheatcodes
{
  unsigned int* temptrainermenuint;
  unsigned int* menuint;
  unsigned int* cheatint;
  int cheatselectram;
  int cheatintlength;

public:
  void init(char* cheatcodes, char* selectram, int cheat_type);
  unsigned int* getTempTrainerMenuInt();
  int getCheatLength();
  int getSelectRam();
  unsigned int* getMenuInt();
  unsigned int* getCheatInt();

private:
  int test(char* cheatcodechar, char* srchstr);
  char* import(char* cheatcodechar);
  char* format(char* cheatcodechar);
};
#endif // CHEATCODES
