#include<bits/stdc++.h>

using namespace std;

class Box{
    public:
        Box() : l_(0), b_(0), h_(0) {};
        Box(int l ,int b,int h){
            l_ = l;
            b_ = b;
            h_ = h;
        }
        Box(Box &bx){
             l_ = bx.l_;
             b_ = bx.b_;
             h_ = bx.h_;
        }
        int getLength(){
            return l_;
        }
        int getBreadth (){
            return b_;
        }
        int getHeight (){
            return h_;
        }
        long long CalculateVolume(){
            return (long long)l_ * b_ * h_;
        }
        bool operator<(Box &B) 
        {
            if (l_ < B.l_) {
            return true;
            } 
            else if (l_ == B.l_)
            {
                if (b_ < B.b_)
                {
                    return true;
                }
                else if (b_ == B.b_)
                {
                    if (h_ < B.h_) {
                        return true;
                    }
                }
            }
            return false;
        }
        
    private:
        int l_, b_, h_;
};

ostream & operator<<(ostream &out, Box &B) {
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
