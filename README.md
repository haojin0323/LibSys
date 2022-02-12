# 图书信息管理系统设计结构方案

<a href="./Design_Scheme.md">设计要求</a>

**2022-02-11**
- 新增 **用户信息** 模块，把 **读者管理模块** 和 **借阅关系管理模块** 进行有机结合。

### 用户信息模块：

```c++
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
``` 


**2022-02-11**
- 创建 **图书管理模块** 、 **读者管理模块** 、 **借阅关系管理模块** 。

### 图书管理模块：

```c++
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
```

### 读者管理模块：

```c++
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
```

### 借阅关系管理模块：

```c++
class User
{
public:
    User();
    void login();   // 登录模块（判断是否会员）
    void load();    // 读入借阅关系（读文件）
    void borrow();  // 办理借书手续（非注册会员不能借书）。
    void judge();   // - 要求能判断借书人合法性（是否有超期未还图书）、图书是否在馆
    void giveback();  // 办理还书手续
    void overtime();// - 要求能判断是否超期，计算超期费用。
    void list();    // 查询当前登录会员目前在借书籍
    void quary();   // 查询图书目前状态
                    // - 按书名查询
                    // - 按作者名查询
    void save();    // 保存借阅关系
private:
    int ID;             // 借书人学号
    int Number;         // 所借图书编号
    std::string Date;   // 借阅日期等。
};
```
