#include "CSSParser.h"
#include "css/css.h"

// CSSParser

CSSParser::CSSParser()
{

}

CSSParser::~CSSParser()
{

}

void CSSParser::Parse( const std::string & css )
{
	StyleSheet ss;
	auto list = ss.parse_style( css );
    font_parser_.Parse( list );
}
