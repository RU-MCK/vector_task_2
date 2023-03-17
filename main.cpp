#include <iostream>
#include "vector"
using namespace std;

vector<float> get_price(vector<float> vec) {
  cout << "Input prices: " << endl
       << "after finishing input, press -1" << endl;
  float pr = 0.0;
  while (true) {
    cin >> pr;
    if (pr == -1) break;
    vec.push_back(pr);
  }
  return vec;
}

vector<int> get_order(vector<int> vec, int sz) {
  cout << "Input the purchase index up to " << sz << " inclusive:" << endl
       << "after finishing input, press -1" << endl;
  int in;
  while (true) {
    cin >> in;
    if (in == -1)break;
    if (in > sz) {
      cout << "Error!" << endl;
      continue;
    } else
      vec.push_back(in);
  }
  return vec;
}

int main() {
  vector<float> price;
  vector<int> order;

  price = get_price(price);
  order = get_order(order, (int) price.size());

  float sum = 0.0;
  for (int i = 0; (i < order.size()); i++) {
    sum += price[order[i] - 1];
  }
  cout << "Total sum: " << sum << " ";
}
