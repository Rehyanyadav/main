//* Launching Threads using Lambda Function

#include<iostream>
#include <thread>
using namespace std;

auto f = [](int x) {
	//statement
	cout << "Thread function called with value: " << x << endl;
};

int main() {
	int param = 10;
	std::thread thread_obj(f, param);
	thread_obj.join();
	return 0;
}

