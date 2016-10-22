#include "FontAttributeParser.h"

// FontFlag

enum FontFlag
{
    emFontFlagFont = 0 ,        // 可以包含所有字体属性.
    emFontFlagFontFamily ,      // 字体系列
    emFontFlagFontSize ,        // 字体尺寸
    emFontFlagFontSizeAdjust ,  // 
    emFontFlagFontStretch ,
    emFontFlagFontStyle ,
    emFontFlagFontVariant ,
    emFontFlagFontWeight ,
};

static const char * gFontFlagStrs[] =
{
    "font",
    "font-family",
    "font-size",
    "font-size-adjust",
    "font-stretch",
    "font-style",
    "font-variant",
    "font-weight"
};

template <typename _T>
_T GetType( const char ** strs , size_t count , const std::string & str )
{
    size_t ret = 0;
    for ( size_t i = 0; i < count; i++ )
    {
        if ( str == strs[ i ] )
        {
            ret = i;
            break;
        }
    }
    return _T( ret );
}

static FontFlag GetFontFlagType( const std::string & str )
{
    return GetType<FontFlag>( gFontFlagStrs , sizeof( gFontFlagStrs ) / sizeof( gFontFlagStrs[ 0 ] ) , str );    
}

// FontAttributeParser

FontAttributeParser::FontAttributeParser()
{

}

FontAttributeParser::~FontAttributeParser()
{

}

void FontAttributeParser::parse( const StyleSheet::NodeList & list )
{
    std::for_each( list.begin() , list.end() , [ & ] ( const StyleSheet::NodePtr & item )
    {
        auto decl = std::static_pointer_cast< StyleSheet::Declaration >( item );
        if ( decl )
        {
            auto type = GetFontFlagType( decl->name_ );
            switch ( type )
            {
            case emFontFlagFont:
                break;
            case emFontFlagFontFamily:
                break;
            case emFontFlagFontSize:
                break;
            case emFontFlagFontSizeAdjust:
                break;
            case emFontFlagFontStretch:
                break;
            case emFontFlagFontStyle:
                break;
            case emFontFlagFontVariant:
                break;
            case emFontFlagFontWeight:
                break;
            default:
                break;
            }
        }
    } );
}
