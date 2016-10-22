#include "CSSParser.h"

void main()
{
	const char * p = "{  font:italic bold 12px/20px arial , sans - serif; }";
    CSSParser parser;
	parser.parse( p );
}