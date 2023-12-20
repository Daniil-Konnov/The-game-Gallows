#include <iostream>
#include "scaffold.h"
using namespace std;

void scaffold(int lives)
{
	if (lives == 8) {
		cout << "\n\n\n\n\n\n\n\n\n\n";
		cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
		cout << " $                          $\n";
	}
	else if (lives == 7) {
		cout << "\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
		cout << " $                          $\n";
	}
	else if (lives == 6) {
		cout << "	$$$$$$$$$$$$$$$\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
		cout << " $                          $\n";
		cout << "Ничего страшного, у тебя ещё есть шанс" << endl;
	}
	else if (lives == 5) {
		cout << "	$$$$$$$$$$$$$$$\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
		cout << " $                          $\n";
	}
	else if (lives == 4) {
		cout << "	$$$$$$$$$$$$$$$\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
		cout << " $                          $\n";
	}
	else if (lives == 3) {
		cout << "	$$$$$$$$$$$$$$$\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        O             $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
		cout << " $                          $\n";
		cout << "Не торопись, лучше обдумай выбор" << endl;
	}
	else if (lives == 2) {
		cout << "	$$$$$$$$$$$$$$$\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        O             $\n";
		cout << "       / \\            $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
		cout << " $                          $\n";
	}
	else if (lives == 1) {
		cout << "	$$$$$$$$$$$$$$$\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        O             $\n";
		cout << "       /|\\            $\n";
		cout << "        |             $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
		cout << " $                          $\n";
	}
	else if (lives == 0) {
		cout << "	$$$$$$$$$$$$$$$\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        |             $\n";
		cout << "        O             $\n";
		cout << "       /|\\            $\n";
		cout << "        |             $\n";
		cout << "       / \\            $\n";
		cout << "                      $\n";
		cout << "                      $\n";
		cout << " $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
		cout << " $                          $\n";
		cout << "Ну ты хотя бы пытался :(" << endl;
	}
}
