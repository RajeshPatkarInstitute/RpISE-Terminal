enum Col { black='0',red='1',green='2',yellow='3',blue='4',magenta='5',cyan='6',white='7'};
enum Att { reset='0',bright='1',dim='2',underscore='4',blink='5',reverse='7',hidden='8'};


void rubs();
void rubu();
void rubd();
void rubf();
void rubb();
void rubl();
void attr(char ch);
void rite(char ch);
void raze();
void hide();
void show();
void fcol(enum Col foreground);
void bcol(enum Col background);
void wait(unsigned int secs);
void move(int x, int y);
int  read();
int  reed();
void up();
void down();
void head();
void back();
void home();