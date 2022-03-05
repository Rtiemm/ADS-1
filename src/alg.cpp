// Copyright 2022 NNTU-CS
#include <math.h>

#include <cstdint>

#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value > 1) {
    for (int i = 2; i < value; i++)
      if (value % i == 0) return false;
    return true;
  } else
    return false;
}

uint64_t nPrime(uint64_t n) {
  uint64_t count = 0;
  int num = 0;
  while (count != n) {
    for (int i = 2; num != i - 1; i++) {
      int k = 0;
      for (int j = 2; j < i; j++)
        if (i % j == 0) k = k + 1;
      if (k >= 1) {
        count = count;
      } else {
        count = count + 1;
        num = i;
      }
    }
  }
  return num;
}

uint64_t nextPrime(uint64_t value) {
  for (int i = 1; i <= 337446; i++) {
    uint64_t num = 0;
    int k = 0;
    num = value + i;
    for (int j = 2; j < num; j++)
      if (num % j == 0) k = k + 1;
    if (k >= 1) {
      continue;
    } else {
      return num;
    }
  }
  return 0;
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
  for (int i = 2; i < hbound; i++) {
    int k = 0;
    for (int j = 2; j < i; j++)
      if (i % j == 0) k = k + 1;
    if (k >= 1) {
      continue;
    } else {
      sum = sum + i;
    }
  }
  return sum;
}

uint64_t nextPrime(uint64_t value) {
  for (int i = 1; i <= 337446; i++) {
    uint64_t num = 0;
    int k = 0;
    num = value + i;
    for (int j = 2; j < num; j++)
      if (num % j == 0) k = k + 1;
    if (k >= 1) {
      continue;
    } else {
      return num;
    }
  }
  return 0;
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
  for (int i = 2; i < hbound; i++) {
    int k = 0;
    for (int j = 2; j < i; j++)
      if (i % j == 0) k = k + 1;
    if (k >= 1) {
      continue;
    } else {
      sum = sum + i;
    }
  }
  return sum;
}
