//#include <iostream>
//#include <queue>
//#include <vector>
//struct Cmp {
//	bool operator()(int i1, int i2) {
//		return i2 < i1;
//	}
//};
//int main() {
//	std::priority_queue<int, std::vector<int>, Cmp> queue;
//	//std::priority_queue<int> queue;
//	// Insert some integers into the priority queue
//	queue.push(3);
//	queue.push(12);
//	queue.push(55);
//	queue.push(11);
//	queue.push(2);
//	queue.push(4);
//	// Serve items from the queue until it is empty
//	while (!queue.empty()) {
//		std::cout << queue.top() << ' '; // See what's on top
//		queue.pop(); // Remove highest priority element
//	}
//	std::cout << '\n';
//}