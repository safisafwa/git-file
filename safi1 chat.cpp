include <iostream>

using namespace std;

void func();

int main()
{

    string bot[1000];
    cout<<"Talk to the chatbot "<<endl;

    for (int t=0; t<=1000; t++) {
    getline(cin, bot[t]);
    if(bot[t] == "Hi" || bot[t] == "hi" || bot[t] == "hey" || bot[t] == "hello" || bot[t]=="Hey" || bot[t] =="Hello")
    {
        cout<<"Hey There!"<<endl;
    }

    else if (bot[t]=="how are you" || bot[t]=="How are you?" || bot[t]=="how are you?" || bot[t] == "how are u ?" || bot[t] == "how are u?" || bot[t]=="How are you" || bot[t]=="how r u?")
    {
        cout<<"I am fine, How about you ?"<<endl;
    }
    else if (bot[t] == "I am fine" || bot[t] == "also fine" || bot[t] == "fine" || bot[t] == "good" || bot[t] == "not bad")
    {
        cout<<"Great to see you fine"<<endl;
    }
    else if (bot[t] == "Who are you?" || bot[t] == "who are you" || bot[t] == "Who Are You?" || bot[t] == "who are you?") {
        cout<<"I am a bot!"<<endl;
    }
      else if (bot[t] == "Can you solve math questions?" || bot[t] == "can you solve math questions" || bot[t] == "can you solve math ?")
    {
        cout<<"Sure, why not!, for that type in calculator"<<endl;
    }
    else if (bot[t] == "calculator")
    {
        cout<<"opening calculator... "<<endl;
        func();
        char yes;
        do{
        cout<<"Do you want to continue [Y/N] ?"<<endl;
        cin>>yes;
        if (yes == 'y' || yes == 'Y')
        {
            func();
        }
        if (yes == 'n' || yes == 'N')
        {
            goto next;
        }
        }while(yes !='n' || yes !='N');
        next:
        cout<<"closing calculator..."<<endl;
        cout<<"how was my calculation ? "<<endl;
    }
        if (bot[t] == "good" || bot[t] == "Good" || bot[t] == "not bad" || bot[t] == "Not bad" || bot[t] == "I liked it")
        {
            cout<<"Thank you! :)" <<endl;
        }
        else if (bot[t] == "you are doing perfect" || bot[t] == "you are awesome" || bot[t] == "I like you")
        {
            cout<<"Thank you, you are so kind" <<endl;
        }
        else if (bot[t] == "can you talk ?" || bot[t] == "can you talk?")
        {
            cout<<"I am talking right now"<<endl;
        }
        else if (bot[t] == "close" || bot[t] == "Close")
        {
            cout<<"closing chatbot..."<<endl;
            goto close;
        }
        else if (bot[t] == "bye" || bot[t] == "Bye")
        {
            cout<<"Bye there!, see you soon"<<endl;
            cout<<"chatbot is closing..."<<endl;
            goto close;
        }
        else if (bot[t] == "where are you from?" || bot[t] == "Where are you from?")
        {
            cout<<"I am from your device"<<endl;
        }
    }

close:
    return 0;
}

void func()
{
    int a, b;
    char c;
    cout<<"Enter first value: "<<endl;
    cin>>a;
    cout<<"Choose arithmetic operator (+,-,*,/): "<<endl;
    cin>>c;
    cout<<"Enter second value: "<<endl;
    cin>>b;

    switch(c) {
    case '+':
    cout<<a<<"+"<<b<<"= "<<a+b<<endl;
    break;
    case '-':
    cout<<a<<"-"<<b<<"= "<<a-b<<endl;
    break;
    case '*':
    cout<<a<<"*"<<b<<"= "<<a*b<<endl;
    break;
    case '/':
    cout<<a<<"/"<<b<<"= "<<a/b<<endl;
    break;
    default:
    cout<<"Invalid character"<<endl;
}

