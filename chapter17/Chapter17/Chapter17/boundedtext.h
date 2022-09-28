#pragma once
#ifndef BOUNDEDTEXT_H_INCLUDED
#define BOUNDEDTEXT_H_INCLUDED

// Compiler needs to know specifics of the Text class in order to derive a new class from it
#include "text.h"

// Provides minimal decoration for the text
class BoundedText : public Text {
	size_t length_limit;
public:
	// Client supplies the string to wrap plus the limit on how many
	// characters it can hold
	BoundedText(const std::string& t, size_t limit);

	// Concatenate another string onto the back of the existing text, 
	// but don't exceed the predetermined limit on the text's length.
	void append(const std::string& extra) override;
};

#endif // !BOUNDEDTEXT_H_INCLUDED

