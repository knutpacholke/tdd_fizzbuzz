#include "fizzbuzz.h"
//function fizzbuzz to be implemented
#include <string>

std::string fizzBuzz(int n)
{
  if (n%3==0 && n%5==0) {
    return "FizzBuzz";
  } 
  else if ((n%3)==0) {
    return "Fizz";
  } 
  else if ((n % 5) == 0) {
    return "Buzz";
  }
  return std::to_string(n);
}
