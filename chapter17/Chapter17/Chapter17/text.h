#pragma once
#ifndef TEXT_H_INCLUDED
#define TEXT_H_INCLUDED

#include <string>

// Base calss for all Text derived classes
class Text {
	std::string text;

public:
	// Create a Text object from a client supplied-string
	Text(const std::string& t);
	
	// Allow clients to see the text field
	virtual std::string get() const;

	// Concatenate another string onto the back of the existing text
	virtual void append(const std::string& extra);
};
// adding this code for git training
#endif // !TEXT_H_INCLUDED
