#pragma once
#include "pch.h"
#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Xls{
class EXPORTS RtfTextWriter : public virtual Object
{
public:
    virtual LPCWSTR_S ToString ();
    virtual void Write (bool value);
    //virtual void Write (System.Char value);
    //virtual void Write (std::vector<System.Char> buffer);
    virtual void Write (double value);
    virtual void Write (int value);
    virtual void Write (long value);
    //virtual void Write (System.Object value);
    //virtual void Write (float value);
    virtual void Write (LPCWSTR_S s);
    //virtual void Write (System.UInt32 value);
    //virtual void Write (LPCWSTR_S format,System.Object arg0);
    //virtual void Write (LPCWSTR_S format,std::vector<System.Object> arg);
    //virtual void Write (LPCWSTR_S format,System.Object arg0,System.Object arg1);
    //virtual void Write (std::vector<System.Char> buffer,int index,int count);
    virtual void WriteLine ();
    virtual void WriteLine (bool value);
    //virtual void WriteLine (System.Char value);
    //virtual void WriteLine (std::vector<System.Char> buffer);
    virtual void WriteLine (double value);
    virtual void WriteLine (int value);
    virtual void WriteLine (long value);
    //virtual void WriteLine (System.Object value);
    //virtual void WriteLine (float value);
    virtual void WriteLine (LPCWSTR_S s);
    //virtual void WriteLine (System.UInt32 value);
    //virtual void WriteLine (LPCWSTR_S format,std::vector<System.Object> arg);
    //virtual void WriteLine (LPCWSTR_S format,System.Object arg0);
    //virtual void WriteLine (LPCWSTR_S format,System.Object arg0,System.Object arg1);
    //virtual void WriteLine (std::vector<System.Char> buffer,int index,int count);
    int AddFont (intrusive_ptr<Font> font);
    int AddColor (intrusive_ptr<Color> color);
    void WriteFontTable ();
    void WriteColorTable ();
    void WriteText (intrusive_ptr<Font> font,LPCWSTR_S strText);
    void WriteText (intrusive_ptr<Font> font,intrusive_ptr<Color> foreColor,LPCWSTR_S strText);
    void WriteText (intrusive_ptr<Font> font,intrusive_ptr<Color> foreColor,intrusive_ptr<Color> backColor,LPCWSTR_S strText);
    void WriteText (intrusive_ptr<IFont> font,LPCWSTR_S strText);
    void WriteFontAttribute (intrusive_ptr<Font> font);
    void WriteFont (intrusive_ptr<Font> font);
    void WriteFont (intrusive_ptr<IFont> font);
    void WriteSubSuperScript (intrusive_ptr<XlsFont> font);
    void WriteFontItalicBoldStriked (intrusive_ptr<Font> font);
    void WriteUnderline (intrusive_ptr<XlsFont> font);
    void WriteUnderlineAttribute ();
    void WriteUnderlineAttribute (UnderlineStyle style);
    void WriteStrikeThrough (StrikeThroughStyle style);
    void WriteBackColorAttribute (intrusive_ptr<Color> color);
    void WriteForeColorAttribute (intrusive_ptr<Color> color);
    void WriteLineNoTabs (LPCWSTR_S s);
    void WriteTag (RtfTags tag);
    //void WriteTag (RtfTags tag,std::vector<System.Object> arrParams);
    bool GetEscape ();
    void SetEscape (bool value);
    virtual intrusive_ptr<Encoding> GetEncoding ();
private:
};
}}
