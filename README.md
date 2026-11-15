#  Calcul Game

A simple command-line game developed in C to practice mental math (multiplication tables from $0$ to $9$).

##  Learning Objectives

This project was a great hands-on exercise that allowed me to **learn and practice how to use pointers in C**. Specifically, I used pointers to pass variables by reference into the `calcul_init()` function, enabling it to directly modify multiple values (`a`, `b`, and the `calcul` string) in the `main()` function's memory scope.

## Features

* **Random Generation:** Generates simple multiplications using two random single-digit numbers between $0$ and $9$.
* **Real-Time Score Tracking:** Displays the current count of right and wrong answers at every turn.
* **Smooth Navigation:** Allows returning to the main menu at any time during a game using a dedicated exit code (`6868`).
* **Input Validation:** Safely handles invalid user inputs (such as entering letters instead of numbers) by clearing the input buffer, preventing infinite loops or crashes.

##  Prerequisites & Compilation

To compile and run this project, you need a standard C compiler like **GCC** or **Clang**.

1. **Compile the code:**
   Open your terminal in the directory containing `main.c` and run:
   ```bash
   gcc main.c -o calcul_game
   ```

2. **Run the game:**
   * On Linux / macOS:
     ```bash
     ./calcul_game
     ```
   * On Windows:
     ```bash
     calcul_game.exe
     ```

##  How to Play

1. When launched, the main menu is displayed:
   * Enter `1` and press `Enter` to start playing.
   * Enter `2` and press `Enter` to quit the program.
2. A math problem appears (e.g., `4 x 7`). Type your answer and press `Enter`.
3. Your score (`good result` / `bad result`) updates immediately, and a new problem is generated.
4. To stop the current session and go back to the main menu, enter **`6868`** as your answer.
