#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<iomanip>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
using namespace std;

using namespace std;

void showstory(int );

int main(){
    int i = 1;
    showstory(i);
    i = 2;
    showstory(i);
    i = 3;
    while(1){
    showstory(i);   
    }
    


}

void showstory(int a){
    char s1[] = " The king of the land who need to resurrect him a dog. He calls on the doctor research pill in the cellar and finds herbs at the north. People believe that herbs can help the body become alive again.";
    char s2[] = " The doctor essay and have the result But a dog becomes a zombie. And the servant doesn't beware so he becomes a zombie as well. And this epidemic has grown increasingly wide area. The doctor in the castle has searched for a solution. And that Zombie is dead when the brain is destroyed.";
    char s3[] = " And disease will disappear when mixing herbal medicine, so you had to find herbs and ingredients to cooked as an antidote to the plague to resolve  and public support, as well as to make the country can return to peace again.";
    char c[] = ".,";
    int count=0,k,num;

    for(int j=0;j < 96;j++){
        cout << "#";
    }
    cout << "\n" ;
    for(int i=0;i<24;i++){
        cout << "#";
        if(i==8 || i==15){
            cout << " ";
            for(int j=0;j<92;j++){
                textcolor(4,0);
                cout << "-";
            }
            cout << " ";
            num=1;
        }else if(i > 8 && i <= 14){
            textcolor(4,0);
            cout << "|";
            if(num <=3 && i > 9){
                textcolor(12,0);
                if(a == 1){
                    for(int n=0;n<92;n++){
                    
                    cout << s1[count];
                    count++;
                    k=n;
                        if(s1[count]==c[0]){
                            cout << s1[count];
                            count++;
                            num++;
                            break;  
                        }
                        
                    }
                    while(k<90){
                    cout << " ";
                    k++;
                    }
                }
                if(a == 2){
                    for(int n=0;n<92;n++){
                    cout << s2[count];
                    count++;
                    k=n;
                        if(s2[count]==c[0]){
                            cout << s2[count];
                            count++;
                            num++;
                            break;  
                        }
                        
                    }
                    while(k<90){
                    cout << " ";
                    k++;
                    }
                }
                if(a == 3){
                    for(int n=0;n<92;n++){
                    cout << s3[count];
                    count++;
                    k=n;
                        if(s3[count]==c[0] || s3[count]==c[1]){
                            cout << s3[count];
                            count++;
                            num++;
                            break;  
                        }
                        
                    }
                    while(k<90){
                    cout << " ";
                    k++;
                    }
                }    
                    
            }else{
                for(int n=0;n<92;n++) cout << " ";
            }
            textcolor(4,0);
            cout << "|";
        }else{
            for(int j=0;j<94;j++){
                cout << " ";
            }
        }
        textcolor(15,0);
        cout << "#";
        cout << "\n" ;
    }
    for(int j=0;j < 96;j++){
        cout << "#";
    }
    cout << "\n";
    
}







