#include "FontAttributeParser.h"

// FontFlag

enum FontFlag
{
    kFontFlagFont = 0 ,        // 可以包含所有字体属性.
    kFontFlagFontFamily ,      // 字体系列
    kFontFlagFontSize ,        // 字体尺寸
    kFontFlagFontSizeAdjust ,  // 
    kFontFlagFontStretch ,
    kFontFlagFontStyle ,
    kFontFlagFontVariant ,
    kFontFlagFontWeight ,
};

static const char * kFontFlagStrs[] =
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
    return GetType<FontFlag>( kFontFlagStrs , sizeof( kFontFlagStrs ) / sizeof( kFontFlagStrs[ 0 ] ) , str );
}

// FontAttributeParser

FontAttributeParser::FontAttributeParser()
{

}

FontAttributeParser::~FontAttributeParser()
{

}

void FontAttributeParser::Parse( const StyleSheet::NodeList & list )
{
    std::for_each( list.begin() , list.end() , [ & ] ( const StyleSheet::NodePtr & item )
    {
        auto decl = std::static_pointer_cast< StyleSheet::Declaration >( item );
        if ( decl )
        {
            auto type = GetFontFlagType( decl->name_ );
            switch ( type )
            {
            case kFontFlagFont:
                break;
            case kFontFlagFontFamily:
                break;
            case kFontFlagFontSize:
                break;
            case kFontFlagFontSizeAdjust:
                break;
            case kFontFlagFontStretch:
                break;
            case kFontFlagFontStyle:
                break;
            case kFontFlagFontVariant:
                break;
            case kFontFlagFontWeight:
                break;
            default:
                break;
            }
        }
    } );
}


void FontAttributeParser::SetFontFamily( const std::string & name )
{
    font_family_ = name;
}

void FontAttributeParser::SetFontSize( float sz )
{
    font_size_ = sz;
}

void FontAttributeParser::SetFontSizeAdjust( float adjust )
{
    font_size_adjust_ = adjust;
}

void FontAttributeParser::SetFontStretch( FontStretch fs )
{
    font_stretch_ = fs;
}

void FontAttributeParser::SetFontStyle( FontStyle fs )
{
    font_style_ = fs;
}

void FontAttributeParser::SetFontVariant( FontVariant fv )
{
    font_variant_ = fv;
}

void FontAttributeParser::SetFontWeight( FontWeight fw )
{
    font_weight_ = fw;
}

std::string FontAttributeParser::GetFontFamily() const
{
    return font_family_;
}

float FontAttributeParser::GetFontSize() const
{
    return font_size_;
}

float FontAttributeParser::GetFontSizeAdjust() const
{
    return font_size_adjust_;
}

FontAttributeParser::FontStretch FontAttributeParser::GetFontStretch() const
{
    return font_stretch_;
}

FontAttributeParser::FontStyle FontAttributeParser::GetFontStyle() const
{
    return font_style_;
}

FontAttributeParser::FontVariant FontAttributeParser::GetFontVariant() const
{
    return font_variant_;
}

FontAttributeParser::FontWeight FontAttributeParser::GetFontWeigth() const
{
    return font_weight_;
}