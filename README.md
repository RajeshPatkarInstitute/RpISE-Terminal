# RpISE-Terminal

A simple C library for cursor control on the Terminal.

### void rubs(void)

    This function rubs and clears the screen.

### void show(char ch);

    This function prints its argument at the current location of the cursor on the screen.
    
### void hide();

    This function hides the character being displayed at the current location of the cursor on the screen.  
    
    
### void hideC();
### void showC();
### void fColor(enum Color foreground);
### void bColor(enum Color background);
### void sleep (unsigned int secs);
### void moveTo(int x, int y);
### int read();
### int eread();
