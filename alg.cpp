// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  if (a == 0) {
    return b;
  }
  if (b == 0) {
    return a;
  }
  while (a != b) {
    if (a > b) {
      a = a - b;
      } else {
      b = b - a;
      }
    }
  return a;
}
