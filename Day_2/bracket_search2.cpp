#include <iostream>
#include <time.h>
#include <math.h>

int main() {
  int n;
  int guesses = 0;
  int guess;
  std::cout<<"Please enter a secret number between 1 and 100: ";
  std::cin>>n;
  int floor = 1;
  int ceiling = 100;
  while (guess != n) {
    guess = (floor + ceiling)/2;
    if (n > guess) {
      floor = guess;
    }
    if (n < guess) {
      ceiling = guess;
    }
    guesses++;
  }
  std::cout<<"I guessed the secret number. It took me "<<guesses<<" guesses.";
  return 0;
}
