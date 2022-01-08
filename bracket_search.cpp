#include <iostream>
#include <time.h>
#include <math.h>

int main() {
  srand(time(NULL));
  int n = (rand() % 100) + 1;
  int guesses = 0;
  int guess;
  while (guess != n) {
    std::cout<<"Please guess a number between 1 and 100: ";
    std::cin>>guess;
    if (guess < n) {
      std::cout<<"Too low!"<<std::endl;
    }
    if (guess > n) {
      std::cout<<"Too high!"<<std::endl;
    }
    guesses++;
  }
  std::cout<<"You guessed my secret number. It took you "<<guesses<<" guesses.";
  return 0;
}
