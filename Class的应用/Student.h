#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>

using namespace std;


class Stu {      //定义一个学生的类
    friend ostream& operator<<(ostream& cout, Stu& st);

public:
    Stu(string name, string id, string sex, string key, int age, int grades);
    Stu();

public:
    void PassKey(string key);

public:
    string m_Name;
    string m_Id;

private:
    void Cout() const;
    string m_Sex;
    string m_Key;
    int m_Age;
    int m_Grades;
};

void Stu::Cout()const {
    cout << "姓名：" << m_Name << endl;
    cout << "ID：" << m_Id << endl;
    cout << "性别：" << m_Sex << endl;
    cout << "年龄：" << m_Age << endl;
    cout << "成绩：" << m_Grades << endl;
}

Stu::Stu(string name, string id, string sex, string key, int age, int grades) {
    m_Name = name;
    m_Id = id;
    m_Sex = sex;
    m_Key = key;
    m_Age = age;
    m_Grades = grades;
}

Stu::Stu() {}

void Stu::PassKey(string key) {
    if (key.compare(m_Key) == 0)
        Cout();
    else
        cout << "密码错误！" << endl;
}

ostream& operator<<(ostream& cout, Stu& st) {
    cout << "姓名：" << st.m_Name << endl;
    cout << "ID：" << st.m_Id << endl;
    cout << "性别：" << st.m_Sex << endl;
    cout << "年龄：" << st.m_Age << endl;
    cout << "成绩：" << st.m_Grades << endl;
    return cout;
}


#endif // !STUDENT_H