#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>

class Admin
{
public:
    Admin();    
    void signUp();  // 为借书人办理注册
    void load();    // 已有借书人信息读入功能(信息用文件保存)
    void del();     // 借书人信息的注销（删除）
    void modify();  // 借书人信息修改
    void quary_id();// 按学号查询
    void quary_name();// 按姓名查询
    void save();    // 借书人信息保存功能
private:
    int ID;         // 学号（自动生成）
    std::string Name;// 姓名
    std::string Sex;// 性别
    int Max;        // 可借书总数
};

class Book
{
public:
    Book();
    void add();     // 新进图书的添加功能
    void load();    // 已有图书信息读入功能(图书信息用文件保存)
    void list();    // 图书信息浏览功能——输出
    void del();     // 图书信息的删除
    void modify();  // 图书信息修改
    void query_title();   // 按书名查询
    void query_author();  // 按作者名查询
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


class User
{
public:
    User() {
        menu();
    };
    void menu();    // 开始菜单 
    void load();    // 加载用户信息
    void add();     // 添加用户信息
    void del();     // 删除用户信息
    void modify();  // 修改用户信息
    void quary();   // 查询用户信息
    void save();    // 保存用户信息
private:
    std::string Account;    // 用户账户
    std::string Password;   // 用户密码
    int ID;                 // 学号（自动生成）
    std::string Name;       // 姓名
    std::string Sex;        // 性别
    std::string Vip;        // 会员等级
    int Max;                // 可借书总数
    // vector<std::string> list;// 当前借阅目录（图书编号、借阅日期……）
};