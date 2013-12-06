#include <iostream>
#include<string.h>
#include<math.h>
#include <stdlib.h>
//#include<algorithm>
using namespace std;
int main()
{
    long long n,i,j,len,san,x,aa,k;
    char a[100001],b[400004],c[4],d[300004];c[3]='\0';
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        len=strlen(a);
        for(j=0;j<len;j++)
        {
            if(a[j]=='0') {b[4*j]='0';b[4*j+1]='0';b[4*j+2]='0';b[4*j+3]='0';}
            if(a[j]=='1') {b[4*j]='0';b[4*j+1]='0';b[4*j+2]='0';b[4*j+3]='1';}
            if(a[j]=='2') {b[4*j]='0';b[4*j+1]='0';b[4*j+2]='1';b[4*j+3]='0';}
            if(a[j]=='3') {b[4*j]='0';b[4*j+1]='0';b[4*j+2]='1';b[4*j+3]='1';}
            if(a[j]=='4') {b[4*j]='0';b[4*j+1]='1';b[4*j+2]='0';b[4*j+3]='0';}
            if(a[j]=='5') {b[4*j]='0';b[4*j+1]='1';b[4*j+2]='0';b[4*j+3]='1';}
            if(a[j]=='6') {b[4*j]='0';b[4*j+1]='1';b[4*j+2]='1';b[4*j+3]='0';}
            if(a[j]=='7') {b[4*j]='0';b[4*j+1]='1';b[4*j+2]='1';b[4*j+3]='1';}
            if(a[j]=='8') {b[4*j]='1';b[4*j+1]='0';b[4*j+2]='0';b[4*j+3]='0';}
            if(a[j]=='9') {b[4*j]='1';b[4*j+1]='0';b[4*j+2]='0';b[4*j+3]='1';}
            if(a[j]=='A') {b[4*j]='1';b[4*j+1]='0';b[4*j+2]='1';b[4*j+3]='0';}
            if(a[j]=='B') {b[4*j]='1';b[4*j+1]='0';b[4*j+2]='1';b[4*j+3]='1';}
            if(a[j]=='C') {b[4*j]='1';b[4*j+1]='1';b[4*j+2]='0';b[4*j+3]='0';}
            if(a[j]=='D') {b[4*j]='1';b[4*j+1]='1';b[4*j+2]='0';b[4*j+3]='1';}
            if(a[j]=='E') {b[4*j]='1';b[4*j+1]='1';b[4*j+2]='1';b[4*j+3]='0';}
            if(a[j]=='F') {b[4*j]='1';b[4*j+1]='1';b[4*j+2]='1';b[4*j+3]='1';}
            b[4*j+4]='\0';
        }
        //cout<<b<<endl;
        for(j=4*len-1,san=2,x=0;j>-1;j--,san--)
        {
            if (san==-1)
                {
                    c[3]='\0';
                    aa=atoi(c);
                    if (aa==0) d[x]='0';
                    if (aa==1) d[x]='1';
                    if (aa==10) d[x]='2';
                    if (aa==11) d[x]='3';
                    if (aa==100) d[x]='4';
                    if (aa==101) d[x]='5';
                    if (aa==110) d[x]='6';
                    if (aa==111) d[x]='7';
                    d[x+1]='\0';
                    x++;
                    san=2;c[0]=0;c[1]=0;c[2]=0;
                }
            c[san]=b[j];
        }
        //cout<<c<<"  "<<san<<endl;
        if (san==-1)
            {
                //c[1]='0';c[0]='0';
                aa=atoi(c);//cout<<aa<<"  "<<san<<endl;
                if (aa==0) d[x]='0';
                if (aa==1) d[x]='1';
                if (aa==10) d[x]='2';
                if (aa==11) d[x]='3';
                if (aa==100) d[x]='4';
                if (aa==101) d[x]='5';
                if (aa==110) d[x]='6';
                if (aa==111) d[x]='7';
                d[x+1]='\0';
            }
            if (san==0)
            {
                c[0]='0';
                aa=atoi(c);//cout<<aa<<"  "<<san<<endl;
                if (aa==0) d[x]='0';
                if (aa==1) d[x]='1';
                if (aa==10) d[x]='2';
                if (aa==11) d[x]='3';
                if (aa==100) d[x]='4';
                if (aa==101) d[x]='5';
                if (aa==110) d[x]='6';
                if (aa==111) d[x]='7';
                d[x+1]='\0';
            }
            if (san==1)
            {
                c[1]='0';c[0]='0';
                aa=atoi(c);//cout<<aa<<"  "<<san<<endl;
                if (aa==0) d[x]='0';
                if (aa==1) d[x]='1';
                if (aa==10) d[x]='2';
                if (aa==11) d[x]='3';
                if (aa==100) d[x]='4';
                if (aa==101) d[x]='5';
                if (aa==110) d[x]='6';
                if (aa==111) d[x]='7';
                d[x+1]='\0';
            }
            /*for(j=x;j>-1;j--)
            {
                cout<<d[j];
            }*/
        for(j=strlen(d)-1,k=0;j>-1;j--)
        {
            if (k!=0) cout<<d[j];
            if(k==0 && d[j]!='0') {cout<<d[j];k=1;}
        }
        cout<<endl;
    }
    return 0;
}
