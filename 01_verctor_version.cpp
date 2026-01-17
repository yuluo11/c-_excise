#include<iostream>
#include<vector>
#include<numeric>
int main()
{
    std::cout << "请输入学生成绩 (输入 -1 结束): " << std::endl;
    std::vector<int> score;
    int input;
    while(std::cin>>input)
    {
        if(input==-1)
            break;
        score.push_back(input);
        if(score.empty())
        {
            std::cout<<"no any score input";
            return -1;
        }
    }
    long long sum=std::accumulate(score.begin(),score.end(),0LL);
    double average = static_cast<double>(sum) / score.size();
    std::cout<<score.size()<<sum<<average;
}