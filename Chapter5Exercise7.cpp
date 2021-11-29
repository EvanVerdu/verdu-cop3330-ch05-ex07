#include "iostream"
#include "math.h"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Evan Verdu
 */

/*
 Quadratic equations are of the form
a*x^2 + b*x + c = 0

 To solve these, one uses the quadratic formula:

 x = - b +- sqrt(b^2-4ac) / 2a

 There is a problem, though: if b2–4ac is less than zero, then it will fail.
Write a program that can calculate x for a quadratic equation. Create a
function that prints out the roots of a quadratic equation, given a, b, c.
When the program detects an equation with no real roots, have it print
out a message. How do you know that your results are plausible? Can
you check that they are correct?
*/


int main() {

  double a, b, c;
  double fail_value;
  double first_root, second_root;
  double single_solution;

  std::cout << "Enter a value for a, b and c of the quadratic equation (a, b, c): ";
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;    

  fail_value = (b*b)-(4*a*c); //Determines if there are 0, 1 or 2 solutions.

  if (fail_value < 0){ // No real solutions
     std::cout << "The value has no real solutions, please enter new values";
     exit (EXIT_FAILURE);
  }


  single_solution = (-1*b)/(2*a);//Gets the single quadratic solution  

  if (fail_value == 0){ //One real solution
     std::cout << "The solution is: " << single_solution;
     exit (EXIT_FAILURE);
  }


  //Gets both the values for the quadratic formula
  first_root = ((-1*b)+sqrt(fail_value))/(2*a);
  second_root = ((-1*b)-sqrt(fail_value))/(2*a);


  if (fail_value > 0){ //two real solutions
     std::cout << "The two solutions are: " << first_root << " and " << second_root;
     exit (EXIT_FAILURE);
  }
 
  return 0;

}