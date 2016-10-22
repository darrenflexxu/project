#include <string>
#include "font_attribute_parser.h"

// css_parser

class css_parser
{
public:

	css_parser();

	~css_parser();

	void parse( const std::string & css );

private:

    font_attribute_parser m_font_parser;
};