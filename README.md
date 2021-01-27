# rpic
**R**ajesh **P**atkar **I**nsitute's **C**onsole

A simple C++ library for cursor control on the Terminal. 


* [download latest Pre-release v0.1.2](https://github.com/RajeshPatkarInstitute/RpISE-Terminal/releases/tag/v0.1.2)


## The API offers communication semantics for interacting with the cursor as a central abstraction.
## void rubs(void) 

Request the cursor to clear the screen, and move to position 1,1 after completing the task. **rubs** is short form for **Rub** **S**creen.

## void rite(char ch)

    Request the cursor to print the given character *ch* at it's current location and move to the subsequent location.
## void raze(void)

    Request the cursor to write space character at the current location and move to the subsequent location.

## void hide(void)

    Request the cursor to hide itself

## void show(void)

    Request the cursor to show itself

## void fcol(enum Color foreground)

   Request the cursor to set the foreground color of the characters it writes. 

## void bcol(enum Color background)

   Request the cursor to set te background color of the characters it writes.

## void wait(unsigned int secs)

   Request the cursor to wait for a stipulated number of seconds before it is ready to work again.

## void move(int x, int y)

   Request the cursor to move to a given screen location.

## int read(void)

   This function reads a key from the keyboard. Pressing Enter is not required after the data entry. 
   The key entered is not echoed on the screen.

## int reed(void)

    This function reads a key from the keyboard. Pressing Enter is not required after the data entry. 
    The key entered is echoed on the screen.
