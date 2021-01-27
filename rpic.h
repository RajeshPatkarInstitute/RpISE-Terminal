enum Color { black='0',red='1',green='2',yellow='3',blue='4',magenta='5',cyan='6',white='7'};

void rubs();
void show(char ch);
void hide();
void hideCursor();
void showCursor();
void foregroundColor(enum Color foreground);
void backgroundColor(enum Color background);
void sleep (unsigned int secs);
void moveto(int x, int y);
int  read();
int  eread();