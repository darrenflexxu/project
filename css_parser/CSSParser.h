#include <string>
#include "FontAttributeParser.h"

// CSSParser

class CSSParser
{
public:

	CSSParser();

	~CSSParser();

	void parse( const std::string & css );

private:

    FontAttributeParser font_parser_;
};