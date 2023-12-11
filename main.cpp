
#include <iostream>
#include <cmath>
using namespace std;
//If1.Дано ціле число. Якщо воно є додатним, то відняти від нього 8;
// інакше не змінювати його. Вивести отримане число.
void task_if6(); // завдання 1 оголошення функції
// Дано координати точки на площині (x, y).
// Визначити, чи потрапляє точка в фігуру заданого кольору (або групу фігур)
// і вивести відповідне повідомлення.
void task_geom32();// завдання 2 оголошення функції

int main() {
  int menu;
  cout << "Task number:";
  cin >> menu;
  switch (menu)
  { // перемикання між завданнями
  case 1: task_if6(); break; // Завдання 1
  case 2: task_geom32(); break; // Завдання 2
  default: cout << "Wrong task! (Only 1,2)" << endl; //повідомлення про помилку
  }
  system("pause");
  return 0;
}
void task_if6()// завдання 1 реалізація
{
  int num, num1;
  cout << "************* If 1 *****************" << endl;
  cout << "Integer first number:";
  cin >> num;
  cout << "Integer second number:";
  cin >> num1;
  if (cin) { // умова якщо введено ціле
    if (num > num1) {
      cout << "Larger number is " << num << endl;
    }
    else if (num == num1) {
      cout << "These numbers the same" << endl;
    }
    else {
      cout << "Larger number is " << num1 << endl;
    }
  }
  else // інакше – якщо не ціле
    cout << "Wrong integer!" << endl;
}
// завдання 2 реалізація
void task_geom32() {
  float x, y, a, b, r;
  cout << "*********** Point in geometry region 1 ************" << endl;
  cout << "Enter a radius: ";
  cin >> r;
  if (!cin) // перевірка коректності даних !!!
    cout << "Must be numeric"; //повідомлення про помилку
  else // дані коректні
  {
    cout << "Point x, y:";
    cin >> x >> y;
    if (!cin) cout << "Must be numeric!" << endl;
    else {
      if (pow((x - r + 1), 2) + pow((y - r + 1), 2) > pow(r, 2) && x < 0 && y > 0 && x > -2 - r && y < 2 * r && y < r + 2 + x)
        cout << "In region!" << endl;
      else if (pow((x - r + 1), 2) + pow((y - r + 1), 2) < pow(r, 2) && x > r - 1 && y > r - 1)
        // прямокутник за винятком кола
        cout << "In region!" << endl;
      else cout << "Out of region!" << endl;
    }
  }
}
