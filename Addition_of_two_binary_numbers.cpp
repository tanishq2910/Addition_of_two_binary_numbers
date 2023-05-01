
#include <iostream>
using namespace std;

int reverse(int r){
    int answer =0;

    while(r>0){
        int last_number = r%10;
        answer = answer*10 +last_number;
        r/=10;
    }
    return answer;
}
int addbinary(int x,int y){
    int ans=0;
    int carry=0;

    while(x>0 && y>0){

        int last_digit_1= x%10;
        int last_digit_2= y%10;

        if(last_digit_1==0 && last_digit_2==0){
            ans = ans*10 + carry;
            carry = 0;
        }
        else if(last_digit_1==1&&last_digit_2==0 || last_digit_1==0&&last_digit_2==1){
            if(carry){
                ans = ans*10 +0;
                carry = 1;
            }
            else{
                ans = ans*10 +1;
                carry = 0;
            }
            
        }
        else{
            ans = ans*10 +carry;
            carry= 1;
        }
        x /= 10;
        y/= 10;
        
    }
    while(x>0){
        if(carry==1){{
            if(x%10==1){
                ans = ans*10+0;
                carry = 1;
            }
            else{
                ans = ans*10+1;
                carry=0;
            }
        }
        }
        else{
            if(x%10==1){
                ans = ans*10+1;
            }
            else{
                ans = ans*10+0;
            }
        }
        x/=10;
    }
    while(y>0){
        if(carry==1){{
            if(y%10==1){
                ans = ans*10+0;
                carry = 1;
            }
            else{
                ans = ans*10+1;
                carry=0;
            }
        }
        }
        else{
            if(y%10==1){
                ans = ans*10+1;
            }
            else{
                ans = ans*10+0;
            }
        }
        y/=10;
    }
    if(carry==1){
        ans = ans*10+1;
    }
    return reverse(ans);
}

int main() {
    int a,b,c;
    cin>>a>>b;

    cout<<addbinary(a,b);

    return 0;    
}