#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    //time function generates total second from 1970 till current time which is taken by srand()
    srand(time(0)); //srand() function to generate seed for rand()
    
    int num = rand ()%100 + 1;
    int test = 0 , guess;
    int first = 1, last = 100;
    int mid ;
    cout<<"Try to guess the number between 1 to 100 in 3 attempts \n";
    do
    {
        cout<<"Enter your guess"<<endl;
        cin>>guess;
         mid = (first + last) / 2;
        if(guess != num)
        {
            if(mid < num)
            {
                first = mid + 1;
                cout<<"The number is between "<<first <<" and " << last <<endl;
            }
            else if (mid > num)
            {
                last = mid - 1;
                cout<<"The number is between "<<first <<" and " << last <<endl;
            }
            else
            {
                first == mid - 10;
                last = mid + 10;
                cout<<" The number is between "<<first <<" and "<< last<<endl;

            }

        }
        else
        {
            cout<<"Hey Congrats you found the number in "<<test <<" time "<<endl;
        }

       test++;
    }while(num != guess);
}

