#include <iostream>
using namespace std;

class Queue {
    int size;
    int* queue;

public:
    Queue() {
        size = 0;
        queue = new int[100];
    }

    void remove() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }
        else {
            cout << "Player " << queue[0] << " leaves the queue!" << endl;
            for (int i = 0; i < size - 1; i++) {
                queue[i] = queue[i + 1];
            }
            size--;
        }
    }

    void print() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Current queue: ";
        for (int i = 0; i < size; i++) {
            cout << "[" << queue[i] << "] ";
        }
        cout << endl;
    }

    void add(int value) {
        if (size >= 100) {
            cout << "Queue is full!" << endl;
            return;
        }
        queue[size] = value;
        size++;
    }

    bool isEmpty() {
        return size == 0;
    }

    int front() {
        if (size == 0) return -1;
        return queue[0];
    }
};

int main() {
    Queue q;
    int playerID = 1;

    cout << "=== Simple Math Queue Game ===" << endl;
    cout << "Players must solve 2 + 2 to leave the queue." << endl;
    cout << "Enter -1 anytime to quit." << endl << endl;

    // Added 3 players to start
    q.add(playerID++);
    q.add(playerID++);
    q.add(playerID++);

    while (!q.isEmpty()) {
        q.print();

        int currentPlayer = q.front();
        int answer;

        cout << "Player " << currentPlayer << ", solve: 2 + 2 = ";
        cin >> answer;

        if (answer == -1) {
            cout << "Game ended by user." << endl;
            break;
        }

        if (answer == 4) {
            cout << "Correct! Player " << currentPlayer << " leaves." << endl;
            q.remove();
        } else {
            cout << "Wrong! Try again next turn." << endl;
        }
    }

    if (q.isEmpty()) {
        cout << "All players finished the game!" << endl;
    }

    return 0;
}
