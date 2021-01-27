## rpic

A simple C++ library for cursor control on the Terminal.

  This library's API offers the communication semantics for interaction with the cursor. The library's name is an acronym for
  **R**ajesh **P**atkar **I**nsitute's **C**onsole

### void rubs(void)

  Request the cursor to clear the screen, and move to position 1,1 after completing the task.
  **rubs** is short form for **Rub** **S**creen.

### void rite(char ch)

  Request the cursor to print the given character *ch* at it's current location.
  **rite** is a short form for **write**

### void raze(void)

   Request the cursor to write space character at the current location.
   Writing space effectively erases any previous character written at the current location.

### void hide(void)

   Request the cursor to hide itself

### void show(void)

  Request the cursor to show itself

### void fcol(enum Color foreground)

  Request the cursor to set the foreground color of the characters it writes.
  **fcol** is a short form for **Foreground Color**
  This setting is applicable to the subsequent write operations. It has no effect on the previous writes.
  The foreground color once set remains so until updated to a new value.

  |Name    |Value  |
  |--------|-------|
  | black   |0      |
  | red     |1      |
  | green   |2      |
  | yellow  |3      |
  | blue    |4      |
  | magenta |5      |
  | cyan    |6      |
  | white   |7      |

### void bcol(enum Color background)

   Request the cursor to set te background color of the characters it writes.
   **bcol** is a short form for **Background Color**
   This setting is applicable to the subsequent write operations. It has no effect on the previous writes.
   The background color once set remains so until updated to a new value.

  |Name    |Value  |
  |--------|-------|
  | black | 0 |
  | red     | 1      |
  | green   | 2      |
  | yellow  | 3      |
  | blue    | 4      |
  | magenta | 5      |
  | cyan    | 6      |
  | white   | 7      |

### void wait(unsigned int secs)

   Request the cursor to wait for a stipulated number of seconds before getting ready for work again.

### void move(int x, int y)

   Request the cursor to move to a given screen location.

### int read(void)

   Request cursor to read a key from the keyboard.
   Pressing Enter is not required after the data entry.
   The key entered is not echoed on the screen.

### int reed(void)

   Request cursor to read a key from the keyboard.
   Pressing Enter is not required after the data entry.
   The key entered is echoed on the screen.
