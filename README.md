# Number-Guessing-Game
This is a small game I also made for fun at the start of September 2026.

## How to play:

* You have to guess four numbers that range from 0-9
  
* We'll be using 1 as an example number.

* input 1234 (Or any four-digit code) and press enter:

* 1 Means the number is in the correct spot.
* (1) Means the number is somewhere in the code but not there.
* x means the number isn't in the code.

* For example
```
1234
```
  Outputs 
```
1x(3)x
```
  So 2 and 4 are not in the code, 1 is in the correct spot and 3 is somewhere in the code.

* The code changes every single time you guess a code right.

## Known bugs:

* If a character is input many times and only one is correct it will show other numbers as being in the wrong spot even if there's no more of that number as in
```
1111
1(1)(1)(1)
```
  even if there's only one number one.

* You can input more or less than four numbers.

## How to compile:

If you don't have g++ installed on Ubuntu/Debian systems you can install it from the terminal:
```
sudo apt update
sudo apt install g++
```
Compiling on Linux terminal:
```
cd /Path/To/Project
g++ "Number guessing game.cpp" -o "Number-game"
```
## Run:
```
./Number-game
```
## AI assistance:

LLM was used for making this project by giving me an example piece of code that I took pieces out of into my own code and used the LLM code as my building blocks for this project.

I also asked for help as in "Don't give me something I can copy and paste but make me learn. How do you make a random number generator on C++?"

## Reflections:

I don't know how to compile for other OSes but internet probably has some great tutorials for it.

When I built this C++ code I had couple hundred of lines worth of coding knowledge in C# and the calculator project on C++.
I built this for fun and because I wanted to code. I didn't publish it then because I didn't think much of it but now I want to 
1. Share what I've done,
2. Keep a portfolio for the future and
3. To see my progress as I hopefully get better at coding and less dependent on AI.
