#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

// Quest 7.Final: Sales_data (Header-Only)
// 目标：定义类并实现所有功能

// 任务清单：
// 1. 定义 Sales_data 类
// 2. 数据成员：bookNo (string), units_sold (unsigned), revenue (double)
// 3. 构造函数：默认, (string), (string, units, price), (istream&)
// 4. 成员函数：isbn(), combine(), avg_price()[private]
// 5. 友元函数：read, print, add

// 请在此处开始你的代码：
class Sales_item;
using std::ostream;
using std::istream;
std::ostream &print(std::ostream& ,const Sales_item&);
std::istream &read(std::istream&,Sales_item&);
Sales_item add(const Sales_item&,const Sales_item);
class Sales_item
{
friend std::ostream &print(std::ostream& ,const Sales_item&);
friend std::istream &read(std::istream&,Sales_item&);
friend Sales_item add(const Sales_item&,const Sales_item);
    
    public:
    Sales_item()=default;
    Sales_item(const std::string& s):bookNo(s){}    
    Sales_item(const std::string& s,unsigned n,double p):
                bookNo(s),units_sold(n),revenue(p*n){}
    std::string isbn()const {return bookNo;}
    Sales_item &combine(const Sales_item&);
    inline double avg_price()const;
    private:
    std::string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
};
std::istream &read(std::istream &is,Sales_item &item)
{
    double price=0.0;
    is>>item.bookNo
      >>item.units_sold
      >>price;
      item.revenue=price*item.units_sold;
    return is;
}
std::ostream&print(std::ostream& os, const Sales_item& item)
{
    os<<item.isbn()<<" "
      <<item.units_sold<<" "
      <<item.revenue<<" "
      <<item.avg_price();
      return os;
}

Sales_item add(const Sales_item &lsh, Sales_item &rsh)
{
    Sales_item sum=lsh;
    sum.combine(rsh);
    return sum;
}

Sales_item &Sales_item::combine(const Sales_item&rhs)
{
    units_sold+=rhs.units_sold;
    revenue+=rhs.revenue;
    return *this;
}

inline
double Sales_item::avg_price()const
{
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}

#endif
