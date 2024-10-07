/* Introduction class.
 * @file
 * @date 2021-09-04
 * @author Anonymous
 */

#ifndef __INTRODUCTION_HPP__
#define __INTRODUCTION_HPP__

#include <string>
// новые изменения
//{
class introduction
{
public:
    std::string name() const
    {
        return "Anton";
    }

    std::string surename() const
    {
        return "Andreev";
    }

    std::string fullname() const
    {
        return "Andreev";
    }

private:
};
//}

#endif // __INTRODUCTION_HPP__
