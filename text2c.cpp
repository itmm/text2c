#include <iostream>

int main() {
	bool line_open { false };
	for (int ch { std::cin.get() }; ch != EOF; ch = std::cin.get()) {
		if (! line_open) {
			std::cout << '\"'; line_open = true;
		}
		switch (ch) {
			case '\n': std::cout << "\\n\"\n"; line_open = false; break;
			case '\t': std::cout << "\\t"; break;
			case '\\': std::cout << "\\\\"; break;
			case '"': std::cout << "\\\""; break;
			default: std::cout.put(ch);
		}
	}
	if (line_open) { std::cout << "\"\n"; }
}
