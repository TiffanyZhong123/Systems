#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Problem 1-find the sum of all the multiples of 3 or 5 below 1000.
int sumofmultiples(){
  int sum = (3*floor(999/3)*((floor(999/3) + 1)/2)) + (5*floor(999/5)*((floor(999/5) + 1)/2)) - (15*floor(999/15)*((floor(999/15) + 1)/2));
  return sum;
}
//Problem 6 - Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
int squaredifference(){
  int sumofsquare = 0;
  int squareofsum = 0;
  for(int x = 1; x < 101; x++){
    sumofsquare += (int) pow(x,2);
    squareofsum += x;
  }
  squareofsum = (int) pow(squareofsum,2);
  return squareofsum-sumofsquare;
}
int main(){
  printf("Problem 1 %d\n", sumofmultiples());
  printf("Problem 6 %d\n", squaredifference());
  return 0;
}
