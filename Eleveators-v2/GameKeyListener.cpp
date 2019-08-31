#include "GameKeyListener.h"
#include <unordered_map>
#include <queue>
#include <string>
class KeyListener {
	static enum KeyState {
		HELD, NOTHELD, PRESSED, RELEASED
	};
	class key {
		KeyState state = NOTHELD;
		std::unordered_map<KeyState, std::string> map = { {HELD,"HELD"} ,
														  {NOTHELD,"NOTHELD"} ,
														  {PRESSED,"PRESSED"} ,
														  {RELEASED,"RELEASED"} };
		void update() {
			if (state == PRESSED) {
				state = HELD;
			}
			if (state == RELEASED) {
				state = NOTHELD;
			}
		}

		KeyState getState() {
			return state;
		}

		void setState(KeyState state) {
			this->state = state;
		}

		std::string toString() {
			return map[state];
		}

	};
	std::unordered_map<int, key> input;

	// List used to determine which keys need to be updated.
	std::queue<key> updateKeys;

	// List used to determine which keys are listened to.
	//UP,DOWN,LEFT,RIGHT,A,Z
	const int events[6] = { 38, 40, 37, 39, 65, 90 };

	KeyListener() {
		for (int i : events) {
			input.insert({ i,new key() });
		}
	}

	void keyUpdate(bool type) {
		for (int i : events) {
			if (sf::Keyboard::isKeyPressed(i)) {
				key currentKey = input.get(i);
				KeyState state = currentKey.getState();
				if (type) {
					if (state == KeyState.NOTHELD || state == KeyState.RELEASED) {
						currentKey.setState(KeyState.PRESSED);
						updateKeys.add(currentKey);
					}
				}
				else {
					currentKey.setState(KeyState.RELEASED);
					updateKeys.add(currentKey);
				}
			}
		}
	}

	void update() {
		while (updateKeys.size() > 0) {
			updateKeys.front().update();
		}
	}

	bool isHeld(int item) {
		try {
			return input.get(item).getState() == KeyState.HELD;
		}
		catch (Exception e) {
			return false;
		}
	}

	public KeyState getState(char item) {
		try {
			return input.get((int)item - 32).getState();
		}
		catch (Exception e) {
			return KeyState.NOTHELD;
		}
	}

	public bool isHeld(char item) {
		return isHeld((int)item - 32);//convert letter to keyCode
	}

	@Override
		public String toString() {
		return input.toString();
	}
};