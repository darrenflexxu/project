#include <string>
#include "FontAttributeParser.h"

// CSSParser

class CSSParser
{
public:

	CSSParser();

	~CSSParser();

	void Parse( const std::string & css );

private:

    FontAttributeParser font_parser_;
};