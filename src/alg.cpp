// Copyright 2022 NNTU-CS
#include <cstdint>

#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value % value == 0 && value % 1 == value) {
    return true;
  } else {
    return false;
  }
}

uint64_t nPrime(uint64_t n) {
  int num = 0;
  int count = 0;
  for (int i = 2; i < n; i++) {
    if (i % i == 0 && i % 1 == i) {
      count = count + 1;
      if (num == n) {
        num = i;
        return num;
      }
    } else {
      return 0;
    }
  }
  return 0;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t num = 0;
  while (num % num != 0 && num % 1 != num) {
    value = value + 1;
    if (value % value == 0 && value % 1 == value) {
      num = value;
    }
  }
  return num;
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
  for (int i = 2; i < hbound; i++) {
    if (i % i == 0 && i % 1 == i) {
      sum = sum + i;
    }
  }
  return sum;
}
