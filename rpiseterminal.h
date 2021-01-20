enum Color { black='0',red='1',green='2',yellow='3',blue='4',magenta='5',cyan='6',white='7'};
enum Praman{tathya=1,vitathya=0};

void rubs();
void show(char ch);
void hide();
void hideC();
void showC();
void fColor(enum Color foreground);
void bColor(enum Color background);
void sleep (unsigned int secs);
void moveTo(int x, int y);
int  read();
int  eread();