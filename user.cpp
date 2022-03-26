#include "main.h"
using namespace std;

class User
{
public:
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
    vector<std::string> list;// 当前借阅目录（图书编号、借阅日期……）
};