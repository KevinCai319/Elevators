#ifndef WINDOW_REF_H
#define WINDOW_REF_H
#include <SFML/Graphics.hpp>
#include <exception>

struct WindowRef {
private:
	using BaseWindow = sf::RenderWindow;
	BaseWindow* window;

public:
	// Default Constructor
	WindowRef() : window(nullptr) {}

	// Make reference
	WindowRef(BaseWindow& win) : window(&win) {}

	// Default copy constructor
	WindowRef(const WindowRef& other) 
	{ window = other.window; }
	
	WindowRef& operator=(const WindowRef& other) 
	{ window = other.window; return *this; }

public:
	void draw(const sf::Drawable& shape) {
		checkPtr(window)->draw(shape);
	}

private:
	// If its not a null ptr, it passes through like normal
	static BaseWindow* checkPtr(BaseWindow* ptr) 
	{
		// if this pops up, your passing an empty reference, go to the top of the chain
		if (ptr == nullptr) 
 			throw std::runtime_error("WindowRef -> nullptr, Did You Initialize The Window Reference?");
		return ptr;
	}

public: // Lets this class work like a pointer
	BaseWindow* operator->() { return checkPtr(window); }
	BaseWindow& operator*() { return *checkPtr(window); }
};

#endif