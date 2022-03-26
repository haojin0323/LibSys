#include "main.h"
using namespace std;

class Book
{
public:
    Book();
    void add();     // 新进图书的添加功能
    void load();    // 已有图书信息读入功能(图书信息用文件保存)
    void list();    // 图书信息浏览功能——输出
    void del();     // 图书信息的删除
    void modify();  // 图书信息修改
    void query();   // 查询功能：——算法
                    // - 按书名查询
                    // - 按作者名查询
    void save();    // 图书信息保存功能 
private:
    int Number;         // 编号（自动生成）
    std::string Title;  // 书名
    std::string Author; // 作者名
    std::string ISBN;   // 分类号
    std::string Pub;    // 出版单位
    std::string Pub_Time;// 出版时间
    std::string Price;  // 价格
    std::string State;  // 存在状态
};