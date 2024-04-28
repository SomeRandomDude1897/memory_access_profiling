#include <iostream>
#include <vector>

#define n 10000
#define m 10000

long int iterate_through_table_vertically() {
  std::vector<std::vector<int>> matrix(n, std::vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      matrix[i][j] = 1;
    }
  }
  long int summ = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      summ += matrix[j][i];
    }
  }
  return summ;
}

long int iterate_through_table_horisontally() {
  std::vector<std::vector<int>> matrix(n, std::vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      matrix[i][j] = 1;
    }
  }
  long int summ = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      summ += matrix[i][j];
    }
  }
  return summ;
}

int main() {
  std::cout << iterate_through_table_horisontally() << '\n';
  std::cout << iterate_through_table_vertically() << '\n';
  return 0;
}
