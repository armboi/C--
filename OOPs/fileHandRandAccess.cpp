#include<iostream.h>
#include<fstream.h>
using namespace std;

int main(){
fstream st;
st.open("random",ios::out);
if(!st)
{
cout<<"file creation failed";
}
else
{
cout<<"new file created";
st<<"hello friends";
cout<<endl;
cout<<"file pointer at"<<st.tellp()<<endl;
st.seekp(-1,ios::cur);
cout<<"now file pointer at"<<st.tellp()<<endl;
st.close();
}

st.open("random",ios::in);
if(!st)
{
cout<<"no such file";
}
else
{
st.seekg(5,ios::end);
cout<<"now file pointer is at"<<st.tellg()<<endl;

st.seekg(1,ios::cur);
cout<<"and now file pointer"<<st.tellg()<<endl;
st.close();
}
}

