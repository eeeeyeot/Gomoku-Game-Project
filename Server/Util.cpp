#include "Util.h"

vector<string> Util::getTokens(string input, char delimeter) {
	vector<string> tokens;
	istringstream f(input);
	string s;
	while (getline(f, s, delimeter)) {
		tokens.push_back(s);
	}
	return tokens;
}