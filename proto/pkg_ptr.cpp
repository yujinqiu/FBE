//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: pkg.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

#include "pkg_ptr.h"

namespace pkg {

Info::Info()
    : info()
    , sex()
    , flag()
    , extra()
{}

Info::Info(const stdb::memory::string& arg_info, ::osa::Sex&& arg_sex, ::osa::MyFLags&& arg_flag, ::osa::Extra&& arg_extra)
    : info(arg_info)
    , sex(std::move(arg_sex))
    , flag(std::move(arg_flag))
    , extra(std::move(arg_extra))
{}

Info::Info([[maybe_unused]] Info&& other) noexcept
    : info(std::move(other.info))
    , sex(std::move(other.sex))
    , flag(std::move(other.flag))
    , extra(std::move(other.extra))
{}

Info::~Info()
{
}

bool Info::operator==([[maybe_unused]] const Info& other) const noexcept
{
    if (info != other.info)
        return false;
    if (sex != other.sex)
        return false;
    if (flag != other.flag)
        return false;
    if (extra != other.extra)
        return false;
    return true;
}

bool Info::operator<([[maybe_unused]] const Info& other) const noexcept
{
    return false;
}

Info& Info::operator=(Info&& other) noexcept
{
    if (this != &other)
    {
        info = std::move(other.info);
        sex = std::move(other.sex);
        flag = std::move(other.flag);
        extra = std::move(other.extra);
    }
    return *this;
}

std::string Info::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Info::swap([[maybe_unused]] Info& other) noexcept
{
    using std::swap;
    swap(info, other.info);
    swap(sex, other.sex);
    swap(flag, other.flag);
    swap(extra, other.extra);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Info& value)
{
    stream << "Info(";
    stream << "info="; stream << "\"" << value.info << "\"";
    stream << ",sex="; stream << value.sex;
    stream << ",flag="; stream << value.flag;
    stream << ",extra="; stream << value.extra;
    stream << ")";
    return stream;
}

Detail::Detail()
    : extrav()
    , extram()
{}

Detail::Detail(std::vector<::osa::Extra> arg_extrav, std::map<int32_t, ::osa::Extra> arg_extram)
    : extrav(std::move(arg_extrav))
    , extram(std::move(arg_extram))
{}

Detail::Detail([[maybe_unused]] Detail&& other) noexcept
    : extrav(std::move(other.extrav))
    , extram(std::move(other.extram))
{}

Detail::~Detail()
{
}

bool Detail::operator==([[maybe_unused]] const Detail& other) const noexcept
{
    // compare container extrav
    if (extrav != other.extrav)
        return false;
    // compare container extram
    if (extram != other.extram)
        return false;
    return true;
}

bool Detail::operator<([[maybe_unused]] const Detail& other) const noexcept
{
    return false;
}

Detail& Detail::operator=(Detail&& other) noexcept
{
    if (this != &other)
    {
        extrav = std::move(other.extrav);
        extram = std::move(other.extram);
    }
    return *this;
}

std::string Detail::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Detail::swap([[maybe_unused]] Detail& other) noexcept
{
    using std::swap;
    swap(extrav, other.extrav);
    swap(extram, other.extram);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Detail& value)
{
    stream << "Detail(";
    {
        bool first = true;
        stream << "extrav=[" << value.extrav.size() << "][";
        for (const auto& it : value.extrav)
        {
            stream << std::string(first ? "" : ",") << it;
            first = false;
        }
        stream << "]";
    }
    {
        bool first = true;
        stream << ",extram=[" << value.extram.size()<< "]<{";
        for (const auto& it : value.extram)
        {
            stream << std::string(first ? "" : ",") << it.first;
            stream << "->";
            stream << it.second;
            first = false;
        }
        stream << "}>";
    }
    stream << ")";
    return stream;
}

} // namespace pkg
