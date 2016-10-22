#include "css/css.h"

// font_attribute_parser

class font_attribute_parser
{
public:

    struct font_attribute
    {

    };

	font_attribute_parser();

	~font_attribute_parser();

	void parse( const StyleSheet::NodeList & list );


};