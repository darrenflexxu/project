#include "css/css.h"

// FontAttributeParser

class FontAttributeParser
{
public:

    enum FontStyle
    {
        kFontStyleNormal = 0 ,
        kFontStyleItalic ,
        kFontStyleOblique ,
        kFontStyleInherit
    };

    enum FontStretch
    {
        kFontStretchNorm = 0 ,
        kFontStretchWider ,
        kFontStretchNarrower ,
        kFontStretchUltraCondensed ,
        kFontStretchExtraCondensed ,
        kFontStretchCondensed ,
        kFontStretchSemiCondensed ,
        kFontStretchSemiExpanded ,
        kFontStretchExpanded ,
        kFontStretchExtraExpanded ,
        kFontStretchUltraExpanded
    };

    enum FontVariant
    {
        kFontVariantNormal = 0 ,
        kFontVariantSmallCaps ,
        kFontVariantInherit
    };

    enum FontWeight
    {
        kFontWeightNormal = 0 , // 400
        kFontWeightBold , // 700
        kFontWeightBolder ,
        kFontWeightLighter ,
        kFontWeightInherit ,
        kFontWeight100 ,
        kFontWeight200 ,
        kFontWeight300 ,
        kFontWeight500 ,
        kFontWeight600 ,
        kFontWeight800 ,
        kFontWeight900
    };

    FontAttributeParser();

    ~FontAttributeParser();

    void Parse( const StyleSheet::NodeList & list );

    void SetFontFamily( const std::string & name );
    void SetFontSize( float sz );
    void SetFontSizeAdjust( float adjust );
    void SetFontStretch( FontStretch fs );
    void SetFontStyle( FontStyle fs );
    void SetFontVariant( FontVariant fv );
    void SetFontWeight( FontWeight fw );

    std::string GetFontFamily() const;
    float GetFontSize() const;
    float GetFontSizeAdjust() const;
    FontStretch GetFontStretch() const;
    FontStyle GetFontStyle() const;
    FontVariant GetFontVariant() const;
    FontWeight GetFontWeigth() const;

private:

    std::string font_family_;
    float font_size_;
    float font_size_adjust_;
    FontStretch font_stretch_;
    FontStyle font_style_;
    FontVariant font_variant_;
    FontWeight font_weight_;
};