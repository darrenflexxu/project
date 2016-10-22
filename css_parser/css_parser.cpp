#include "css_parser.h"
#include "css/css.h"

// css_parser

css_parser::css_parser()
{

}

css_parser::~css_parser()
{

}

void css_parser::parse( const std::string & css )
{
	StyleSheet ss;
	auto list = ss.parse_style( css );
    m_font_parser.parse( list );
}
