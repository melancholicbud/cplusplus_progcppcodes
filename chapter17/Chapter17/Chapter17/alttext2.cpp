//#include "alttext2.h"
//
//AltText2::AltText2(TextType type, const std::string& t) : type(type), text(t) {}
//
//AltText2::AltText2(TextType type, const std::string& t, const std::string& left, const std::string& right,
//	const std::string& conn) : type(type), text(t), left_bracket(left), right_bracket(right),
//	connector(conn) {}
//
//AltText2::AltText2(TextType type) : type(type), text("FIXED") {}
//
//AltText2::AltText2(TextType type, const std::string& t, size_t limit) :
//	type(type),
//	text(t.substr(0, limit)), // ensure text initially doesn't exceed bound
//	length_limit(limit) {}
//
//std::string AltText2::get() const {
//	switch (type)
//	{
//	case TextType::Plain:
//	case TextType::Fixed:
//	case TextType::Bounded:
//		return text;
//	case TextType::Fancy:
//		return left_bracket + text + right_bracket;
//	default:
//		return "UNKNOWN TYPE";
//	}
//}
//
//void AltText2::append(const std::string& extra) {
//	switch (type)
//	{
//	case TextType::Plain:
//		text += extra; // just concatenate
//		break;
//	case TextType::Fancy:
//		text += connector + extra; // join with connector
//		break;
//	case TextType::Fixed:
//		break; // ignore attempt to append
//	case TextType::Bounded:
//		// Ensure the length doesn't exceed the established limit
//		int avail = length_limit - text.length();
//		text += extra.substr(0, avail);
//		break;
//	}
//}