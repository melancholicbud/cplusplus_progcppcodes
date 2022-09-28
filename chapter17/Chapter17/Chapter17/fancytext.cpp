//#include "fancytext.h"
//
//// Client supplies the string to wrap plus some extra decorations
//FancyText::FancyText(const std::string& t, const std::string& left, const std::string& right,
//	const std::string& conn) : Text(t), left_bracket(left), right_bracket(right),
//	connector(conn) {}
//
//// Allow Clients to see the decorated text field
//std::string FancyText::get() const {
//	return left_bracket + Text::get() + right_bracket;
//}
//
//// Concatenate another string onto the back of the existing text,
//// inserting the connector string
//void FancyText::append(const std::string& extra) {
//	Text::append(connector + extra);
//}