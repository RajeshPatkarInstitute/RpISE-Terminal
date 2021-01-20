# RpISE-Terminal

A simple C library for cursor control on the Terminal.

* void eraseDisplay();
* void show(char ch);
* void hide();
* void hideCursor();
* void showCursor();
* void setForegroundColor(enum Color foreground);
* void setBackgroundColor(enum Color background);
* void sleep (unsigned int secs);
* void moveTo(int x, int y);
* int getch();
* int getche();
