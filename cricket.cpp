#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

class cricketer
{
protected:
    string name;
    int shirt_no;
    string dob;
    int odi_rating;
    int test_rating;
    int t20_rating;
    int startyear;
public:
    cricketer()    //Default Ctor
    {
        name = " ";
        shirt_no = 0;
        dob = " ";
        odi_rating = 0;
        test_rating = 0;
        t20_rating = 0;
        startyear = 0;
        cout << " Default Constructor of cricketer "<<endl;
    }
    cricketer(string n, int sn, string D, int OR, int tr, int t20r, int sy)   //Parameterized Ctor
    {
        name = n;
        shirt_no = sn;
        dob = D;
        odi_rating = OR;
        test_rating = tr;
        t20_rating = t20r;
        startyear = sy;
        cout << " Parameterized Constructor of cricketer"<<endl;
    }
  
    int calculateage()
    {
        int calculateage;
        string cricketer_age;
        cricketer_age = dob.substr(6);
        return calculateage;
    }
    int calculate_experience()
    {
        int exp = 0;
        exp = 2022 - startyear;
        return exp;
    }
    void changeODIrating(int rating)
    {
        odi_rating = rating;
    }
    void changetestrating(int rating)
    {
        test_rating = rating;
    }
    void changeT20Rating(int rating)
    {
        t20_rating = rating;
    }
    void display(){

        cout << "\nName of Player is : " << name << endl;
        cout << "Shirt no. is " << shirt_no << endl;
        cout << "Date of Birth is " << dob << endl;
        cout << "Age of player is " << calculateage() << endl;
        cout << "Experience of player is " << calculate_experience() << endl;
        cout << "The starting year of player is " << startyear << endl;
        cout << "ODI rating is " << odi_rating << endl;
        cout << "Test rating is " << test_rating << endl;
        cout << "T20 rating is " << t20_rating << endl;
    }
    ~cricketer()
    {
        cout << "Destructor of cricketer"<<endl;
    }
};
class bowler :public cricketer
{
protected:
    string bowler_type;
    int total_wickets;
    int match_played;
    cricketer obj_temp1;
public:
    bowler()   // Default Ctor
    {
        bowler_type = " ";
        total_wickets = 0;
        match_played = 0;
        cout << " Default Constructor of bowler "<<endl;
    }
    bowler(string bt, int tw, int mpball, string n, int sn, string D, int OR, int tr, int t20r, int sy) : obj_temp1(n, sn, D, OR, tr, t20r, sy)  // Parameterized Ctor
    {		
        bowler_type = bt;
        total_wickets = tw;
        match_played = mpball;
        cout << " Parameterized Constructor of bowler "<<endl;
    }
    int calculatebowlavg()
    {
        int runs = 0;
        float bowlavg = 0;
        cout << " Enter no. of runs : ";
        cin >> runs;
        bowlavg = runs / total_wickets;
        return bowlavg;
    }
    void updatematches(int matches)
    {
        match_played = matches;
    }
    void updatewickets(int wickets)
    {
        total_wickets = wickets;
    }
    void changeODIrating(int rating)
    {
        obj_temp1.changeODIrating(rating);
    }
    void changetestrating(int rating)
    {
        obj_temp1.changetestrating(rating);
    }
    void changeT20Rating(int rating)
    {
        obj_temp1.changeT20Rating(rating);
    }
    void display() {

        obj_temp1.display();
        cout << "Bowler type is " << bowler_type << endl;
        cout << "Total wickets taken are " << total_wickets << endl;
        cout << "Total matches played are " << match_played << endl;
    }

    ~bowler()  //Destructor
    {
        cout << " Destructor of bowler "<<endl;
    }
};
class batsman :public cricketer
{
protected:
    string batsman_type;
    int total_runs;
    int match_played;
    int best_score;
    cricketer obj_temp2;
public:
    batsman()  //Default Ctor
    {
        batsman_type = " ";
        total_runs = 0;
        match_played = 0;
        best_score = 0;
        cout << " Deafault Constructor of Batsman "<<endl;
    }
    batsman(string bt, int truns, int mpbat, int bs, string n, int sn, string D, int OR, int tr, int t20r, int sy) :obj_temp2(n, sn, D, OR, tr, t20r, sy)  //Parameterized Ctor
    {
        batsman_type = bt;
        total_runs = truns;
        match_played = mpbat;
        best_score = bs;
        cout << " Parameterized Constructor of batsman "<<endl;
    }
    int calculatebatavg()
    {
        float bat_avg;
        bat_avg = total_runs / match_played;
        return bat_avg;
    }
    void updatematches(int matches)
    {
        match_played = matches;
    }
    void updateruns(int runs)
    {
        total_runs = runs;
    }
    void changeODIrating(int rating)
    {
        obj_temp2.changeODIrating(rating);
    }
    void changetestrating(int rating)
    {
        obj_temp2.changetestrating(rating);
    }
    void changeT20Rating(int rating)
    {
        obj_temp2.changeT20Rating(rating);
    }
    void display() {

        obj_temp2.display();
        cout << "Batting type of batsmen is "<<batsman_type<<endl;
        cout << "Total runs are " << total_runs << endl;
        cout << "Total matches played are " << match_played << endl;
        cout << "Best score is " << best_score << endl;
        cout << "Batting average is " << calculatebatavg() << endl;

    }
    ~batsman()  //Destructor
    {
        cout << " Destructor of batsman "<<endl;
    }
};

class allrounder:virtual public bowler, batsman
{
public:
    allrounder()  //Default Constructor
    {
        cout << " Default Constructor of allrounder "<<endl;
    }
    ~allrounder()  //Destructor
    {
        cout << " Destructor of allrounder "<<endl;
    }
}; 
int main()
{
    
    bowler obj("Fast Pace", 1021, 127, "Shaheen Afridi", 54, "06/04/2000", 9, 11, 6, 2020);
    batsman obj2("Opener", 4788, 234, 147, "Babar Azam", 54, "15/10/1994", 15, 23, 3, 2016);

    obj.display();
    obj2.display();

    obj.changeODIrating(6);
    obj.changetestrating(7);
    obj.changeT20Rating(2);
    obj.updatematches(146);
    obj.updatewickets(1060);

    obj2.changeODIrating(8);
    obj2.changetestrating(14);
    obj2.changeT20Rating(2);
    obj2.updatematches(250);
    obj2.updateruns(5123);
    
     
    cout << "\nAfter updating data :-\n___________________________________________________________________________________________________________\n";

    obj.display();
    obj2.display();

    system("pause");
    return 0;
}
