#include <iostream>
#include "funcs.h"


/*
Author: Muhammed Cheema
Course: CSCI-136
Instructor: Tong Yi and Micheal Zamanksy
Assignment: Lab 5 Functions and Prime numbers
*/

    // Task A tells you if num 1 is evenly divisible by num 2
bool isDivisibleBy(int n, int d){
    if(n % d == 0){
        return true;
    }
    else{
        return false;
    }
}    
    // Task B every number that is not prime is divisible by either 2 or 3.
bool isPrime(int n){
    bool result = false
    if (n == 2) {
        result = true;
    }
    if(n % 2 == 0) { 
        result = false;
    }
    for (int i = 2; i <= n-1; i++){
        if (n % i != 0){
            break;
            result = true;
        }
    }
        else {
            result = false;
        }
    else {
        result = false;
    }
    return result;      
}

    // Task C tells what is the following prime number based off the number you put in for x
int nextPrime(int n){
    int num = n + 1;
    while(isPrime(num) == false){
        num++;
    }
    return num
}

    //Task D gives a range of numbers and tells you the largest prime number out of it
int countPrimes(int a, int b) {
  int biggerprime = 0;
  for (int i = a;i <= b;i++) {
    if (isPrime(i) == true) {
      biggerprime++;
    }
  }
  return biggerprime;
}

    //Task E if there are primes within a range of 2
bool isTwinPrime(int n) {
  if (isPrime(n) == true) {
    if (isPrime(n-2) == true || isPrime(n+2) == true) {
      return true;
    }
  }
  return false;
}
    //Task F The next twin prime
int nextTwinPrime(int n) {
  int num = n + 1;
  while (isTwinPrime(target) == false) {
    num++;
  }
  return num;
}
    //Task G Next twin prime in a sequence
int largestTwinPrime(int a, int b) {
  int larger = -1;
  for (int i = a;i <= b;i++) {
    if(isTwinPrime(i) == true) {
      larger = i;
    }
  }
  return larger;
}
