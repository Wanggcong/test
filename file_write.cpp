#include <fstream>
#include <iostream>
using namespace std;
class PERSON
{
	public:
		PERSON(float w,float h):m_weight(w),m_height(h){}
		float GetWeight(){return m_weight;}
		float GetHeight(){return m_height;}
		void SetWeight(float w){m_weight =w;}//这里有分号吗
		void SetHeight(float h){m_height=h;}
	private:
		float m_weight;
		float m_height;
};
int main(int argc, char *argv[])
{
#if 0
	ofstream fout(argv[1],ios::binary);//二进制类型
	if(!fout)
	{
		cout<<"error! can not open the file\n";
		return 0; 
	}
	PERSON wang(48,171);
	fout.write((char*)&wang,sizeof wang);
	fout.close();
#else
	ifstream fin(argv[1],ios::binary);//二进制类型
	if(!fin)
	{
		cout<<"error! can not open the file\n";
		return 0; 
	}
	PERSON li(0,0);
	fin.read((char*)&li,sizeof li);
	cout<<li.GetWeight()<<endl;
	cout<<li.GetHeight()<<endl;
	fin.close();
#endif
	return 0;
}
