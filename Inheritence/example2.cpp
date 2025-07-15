#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length ;
    int breath ;
    public:
    Rectangle(int l=0, int b=0){
        length=l;
        breath=l;
    }
    int getlen(){
        return length;
    }
    int getbreath(){
        return breath;
    }

   void setlen(int l ){
        if (l>=0)
        {
            length=l;
        }
        else{
            cout<<"Enter valid number ";
        }
        
    }
    
    void setbreath(int b){
        if (b>=0)
        {
            breath=b;
            
        }
        else{
            cout<<"Enter valid number ";
            
        }
        
    };
    int area(){
        return length*breath;
    }
};   

class cuboid:public Rectangle{
 private:
 int height ;
      public:
      cuboid(int l=0,int b=0, int h=0){
        height=h;
        setlen(l);
       setbreath(b);
      }
      int getheight(){
        return height;
      };

      void setheight(int h){
        height=h;
      };
     int volume(){
      return getheight()*getlen()*getbreath();
     };


};
int main(){
    cuboid c(1, 12, 1);
    // cout<<c.volume()<<endl;
    cout<<c.getheight()<<endl;

    cout<<c.area()<<endl;
}
