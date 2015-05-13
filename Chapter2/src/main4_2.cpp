int k=22;
extern const int m=66;//这里必须用extern，否则默认为该文件的局部变量
int o=33;

const int &p=o; //cost 引用不需要申明为extern即能被其他地方使用?
