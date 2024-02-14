# include <iostream>
using namespace std;
class Crickter
{
	protected:
    string name;
    int shirtno;
    int dob;
    int odi_rating;
    int test_rating;
    int t20_rating;
    int startyear;
   
   public:
   	
   	Crickter()
    {
      cout<< "this is default crickter constructure " <<endl;
    }
    Crickter(string name,int shirtno,int dob,int odi_rating,int test_rating,int t20_rating,int startyear)
    {
    	
    	this-> name=name;
    	this-> shirtno=shirtno;
    	this-> dob=dob;
    	this-> odi_rating=odi_rating;
    	this-> test_rating=test_rating;
    	this-> t20_rating=t20_rating;
    	this-> startyear=startyear;
   
   	    cout<<name;
        cout<<shirtno ;
        cout<<dob ;
        cout<<odi_rating ;
        cout<<test_rating ;
        cout<<t20_rating ;
        cout<<startyear ;
    
	}
    int calculateAge(int year)
    {
      int age;
	  cout<<"Enter your birth year"<<endl;
	  cin>> dob;
	  age = year-dob ;

        if(dob > year )
      {
	    cout<<" Be seriuos & kindly give the right information next time "<<endl;
	  }
	  else if(dob<year)
	  {
	  	cout<< " your age is "<< age << "years "<<endl;
	  }
	  cout<< "" <<endl;
	  return 0;
//      cout<<"enter your date of birth "<<endl;
//      cin>> dob;
//      cout<< " Today date : "<<__DATE__ <<endl;
//      cout<< __DATE__ {0:5};
    }
    int calculateExperience( int year)
    {
       int exp,sy;
       startyear=sy;
	  cout<<"On which year you start to play cricket "<<endl;
	  cin>>startyear;
	   exp= year - startyear;
	   
	   if(sy>=year)
      {
	    cout<<" Be seriuos & kindly give the right information "<<endl;
	  }
	  else if(sy<year)
	  {
	  	cout<< " your experience are "<< exp << "years "<<endl;
	  }
	  cout<< "" <<endl;
	  return 0;
	}
    void changeODIRating(int odi)
    {
    	int rating=10;
    	odi_rating=rating+odi; 
      cout<<" New ODI rating is :"<<odi_rating<<endl;
    }
    void changeTestRating(int test)
    {
      int rating=9;
      test_rating=rating+test; 
      cout<<" New TEST rating is :"<<test_rating<<endl;
    }
    void changeT20Rating(int t20)
    {
      int rating=12;
      t20_rating=rating+t20; 
      cout<<" New T20 rating is :"<<t20_rating<<endl;
    }
    ~Crickter()
    {
      cout<< " =========================== " <<endl;
      cout<< " this is crickter destructor " <<endl;
	  cout<< " --------------------------- " <<endl;	
	}
};

    class Bowler: public Crickter
{
   private:
    string type;
    int total_wickets;
    int match_played;
   public:
    Bowler()
    {
      cout << " this is default bowler constructure "<<endl;
    }    
    Bowler(string type,int total_wickets,int match_played )
    {
      this->type= type;
      this->total_wickets = total_wickets;
      this->match_played = match_played;
      
      cout<< type;
      cout<< total_wickets;
      cout<< match_played;
    }
    int calculateBowlAverage()
    {
    	double average;
      average = total_wickets / match_played;
      cout<<"The average of bowler is:"<< average <<endl;
      return 0;
    }
    void updateMatches(int new_matches)
    {
    	int updateMatches;
      updateMatches = match_played + new_matches ;
      cout<< " update matches are : "<< updateMatches <<endl;
    }
    void updateWickets(int new_wickets)
    {
    	int updateWickets; 
      updateWickets = total_wickets + new_wickets ;
      cout << " update wickets are : "<< updateWickets <<endl;
    }
    ~Bowler()
    {
      cout<< " =========================== " <<endl;
      cout<< " this is Bowler destructor " <<endl;
	  cout<< " --------------------------- " <<endl;
	}
};    
   
   class Batsman:public Crickter
{
   private:
    string type;
    int total_runs;
    int match_played;
    int best_score;
    
   public:
    Batsman()
    {
    	cout<< " this is default batsman constructure "<<endl;	
    }
     Batsman(string type,int total_runs,int match_played,int best_score )
    {
       this->type=type;
       this->total_runs = total_runs;
       this->match_played = match_played;
       this->best_score=best_score;

       cout<<type;
       cout<<total_runs;
       cout<<match_played;
       cout<<best_score;
    }
    int calculateBatAverage()
    {
    	double average;
      average = total_runs/match_played;
      cout<<"The Average of this Batsman is:"<< average <<endl;
	  	return 0;
    } 
    void updateMatches(int new_matchs)
    {
    	int updateMatches;
      updateMatches = match_played+new_matchs ;
      cout<< " update matches are : "<< updateMatches <<endl;
    }
    void updateRuns(int new_runs)
    {
    	int updateRuns;
      updateRuns = total_runs + new_runs ;
      cout << " update runs are : "<< updateRuns <<endl;
    }
    ~ Batsman()
    {
      cout<< " =========================== " <<endl;
      cout<< " This is BATSMAN destructor " <<endl;
	  cout<< " --------------------------- " <<endl;
	}
};  
   
   class AllRounder:public Bowler,public Batsman
{
   public:
    AllRounder()
    {
    	cout<< " default constructor "<<endl;
    }
    ~ AllRounder()
    {
      cout<< " =========================== " <<endl;
      cout<< " this is Allrounder destructor " <<endl;
	  cout<< " -----------END------------- " <<endl;
	}
};

   	

int main()
{
	AllRounder p1;
	p1.Crickter("ali",4,2001,45,54,13,2006)
	p1.calculateAge(2023);
	p1.calculateExperience(2022);
	p1.changeODIRating(7);
	p1.changeT20Rating(11);
	p1.changeTestRating(23);
    p1.Bowler("swing",19,11)
	p1.calculateBowlAverage();
	p1.updateMatches(3);
	p1.updateWickets(8);
	p1.Batsman("fast",209,5,500);
	p1.calculateBatAverage();
	p1.updateMatches(7);
	p1.updateRuns(345);
	p1.AllRounder()
	return 1;
}








