#include "main.h"
using namespace std;

class Admin
{
public:
    Admin();    
    void signUp();  // 为借书人办理注册
    void load();    // 已有借书人信息读入功能(信息用文件保存)
    void del();     // 借书人信息的注销（删除）
    void modify();  // 借书人信息修改
    void quary();   // 查询功能：
                    // - 按学号查询
                    // - 按姓名名查询
    void save();    // 借书人信息保存功能
private:
    int ID;         // 学号（自动生成）
    std::string Name;// 姓名
    std::string Sex;// 性别
    int Max;        // 可借书总数
};