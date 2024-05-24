#include <iostream>
#include <string>

using namespace std;
  
void read(float g[3]){
    cout << "plase read 1\n";
    cin >> g[0];
    cout << "plase read 2\n";
    cin >> g[1];
    cout << "plase read 3\n";
    cin >> g[2];
} 
  float num(float g[3]){
  return (g[0] + g[1] + g[2]) /3;
   
  }
int main() {
    float g[3];
read(g);
cout << " avg is " << num(g) << "\n";

    return 0;
}