#pragma once
#ifndef FANCYTEXT_H_INCLUDED
#define FANCYTEXT_H_INCLUDED

// Compiler needs to know specifics of the Text class
// in order to derive a new class from it
#include "text.h"

// Provides minimal decoration for the text
class FancyText :public Text {
	std::string left_bracket;
	std::string right_bracket;
	std::string connector;

public:
	// Client supplies the string to wrap plus some extra decorations
	FancyText(const std::string& t, const std::string& left, const std::string& right,
		const std::string& conn);
	// Allow Clients to see the decorated text field
	std::string get() const override;

	// Concatenate another string onto the back of the existing text,
	// inserting the connector string
	void append(const std::string& extra) override;
};

#endif // !FANCYTEXT_H_INCLUDED
