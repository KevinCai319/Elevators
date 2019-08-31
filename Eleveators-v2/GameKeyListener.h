#pragma once
#include <queue>
#include <unordered_map>
class KeyListener {
	class key {
	public:
		void update();
		KeyState getState();
		void setState(KeyState state);
		std::string toString();
	private:
		KeyState state;
		std::unordered_map<KeyState, std::string> map;
	};
public:
	KeyListener();
	~KeyListener();
	void keyUpdate(bool type);
	void update();
	bool isHeld(int item);
	KeyState getState(char item);
	bool isHeld(char item);
	std::string toString();
private:
	std::unordered_map<int, key> input;
	std::queue <key> updateKeys;
	int events[];
	static enum KeyState;

};