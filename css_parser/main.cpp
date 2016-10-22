#include "css_parser.h"

void main()
{
	const char * p = "{  font:italic bold 12px/20px arial , sans - serif; }";
	css_parser parser;
	parser.parse( p );
}