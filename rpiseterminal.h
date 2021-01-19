enum Color { black='0',red='1',green='2',yellow='3',blue='4',magenta='5',cyan='6',white='7'};
enum Praman{tathya=1,vitathya=0};
void eraseDisplay();
void show(char ch);
void hide();
void hideCursor();
void showCursor();
void setForegroundColor(enum Color foreground);
void setBackgroundColor(enum Color background);
void sleep (unsigned int secs);
void gotoxy(int x, int y);
int getch(void);
int getche(void);
