//#include <iostream>
//#include <queue>
//#include <string>
//struct Message {
//	int rank; // Lower number = higher priority
//	std::string text;
//	// Constructor
//	Message(const std::string& t, int rank) : text(t), rank(rank) {}
//};
//// Custom comparer object to properly prioritize Message objects
//struct Cmp {
//	bool operator()(Message m1, Message m2) {
//		return m2.rank < m1.rank;
//	}
//};
//int main() {
//	std::priority_queue<Message, std::vector<Message>, Cmp> queue;
//	// Insert some messages into the priority queue
//	queue.push({ "Be there soon", 2 });
//	queue.push({ "Gimme a few minutes", 3 });
//	queue.push({ "Will be late!", 1 });
//	queue.push({ "Have to work next week", 7 });
//	queue.push({ "I bought a new computer", 5 });
//	queue.push({ "The project deadline is the first", 3 });
//	// Serve items from the queue until it is empty
//	while (!queue.empty()) {
//		// See what's on top
//		Message msg = queue.top();
//		std::cout << msg.text << ": " << msg.rank << '\n';
//		queue.pop(); // Remove highest priority element
//	}
//	std::cout << '\n';
//}