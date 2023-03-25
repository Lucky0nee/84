#include <iostream>
#include <queue>

int main() {
	srand(time(NULL));
	std::priority_queue<int, std::deque<int>, std::greater<int>> qe;

	for (int i = 0; i < 25; i++) {
		qe.push(rand() % 100 + 1);
	}

	for (int i = 0; i < 25; i++) {
		std::cout << qe.top() << " ";
		qe.pop();
	}

	return 0;
}

/*
Створіть чергу із пріоритетами. Додайте в неї 25 випадкових дійсних чисел.
Виведіть їх на екран у порядку зростання.
*/
