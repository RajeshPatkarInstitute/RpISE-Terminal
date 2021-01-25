# rpise-console 

A simple C library for cursor control on the Terminal. 


* [download latest Pre-release v0.1.2](https://github.com/RajeshPatkarInstitute/RpISE-Terminal/releases/tag/v0.1.2)




## void rubs(void)

    This function rubs and clears the screen.

## void show(char ch)

    This function prints its argument at the current location of the cursor on the screen.  

## void hide(void)

    This function hides the character being displayed at the current location of the cursor on the screen.

## void hidec(void)

    This function makes the cursor invisible.

## void showc(void)

    This function makes the cursor visible.

## void fcolor(enum Color foreground)

    This function sets the foreground color for the characters to be displayed on the screen.

## void bcolor(enum Color background)

    This function sets the background color for the characters to be displayed on the screen. 

## void sleep (unsigned int secs)

    This function changes the state of the current thread to blocked state. 
    The thread stays blocked or is in waiting for atleast the amount of seconds specified in the argument.


## void moveto(int x, int y)

    This function moves the cursor to the location specified in the argument.

## int read(void)

    This function reads a key from the keyboard. Pressing Enter is not required after the data entry. 
    The key entered is not echoed on the screen.

## int eread(void)

    This function reads a key from the keyboard. Pressing Enter is not required after the data entry. 
    The key entered is echoed on the screen.
