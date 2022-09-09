#include "database.hxx"
#ifdef UNIT_TEST
#define main() main_ut()
#endif

using namespace std;

int find_user_intent(vector <int> g_value_vect)
{
    map <string, int> :: iterator in_itr;
    if(g_value_vect.empty())
    {
        return ERR;    
    }

    sort(g_value_vect.begin(), g_value_vect.end());
    cout<<"intent : ";
    for (auto i = g_value_vect.begin(); i != g_value_vect.end(); ++i)
    {
 
        for (auto in_itr:intent_DB)
        {
            if (in_itr.second == *i)
            {
                cout << in_itr.first <<" ";
                break;
            }
        }
            
    }  
    cout<<endl; 
    return EOK;

}


int  parse_user_input( string u_input)
{


    istringstream iss(u_input);
    vector<int> general_value_vector;
    string input_word;
    int ret = EOK;
    multimap <string, int> :: iterator itr;
    if(u_input. empty()) 
    {
        return ERR;
    }
    else
    {
    
        while(iss >> input_word) {

            for (auto itr:general_DB)
            {
                if (itr.first == input_word)
                {
                    general_value_vector.push_back(itr.second);
                    break;
                }
            }

            
        }
    
        ret = find_user_intent(general_value_vector);
        if (ret != EOK)
        {
            return DB_ERROR;
        }
    
    }
    
    return EOK;
    
}

int main()
{
    string user_input;
    int ret = EOK;
    
    cout<<"Enter the Sentence"<<endl;
    getline(cin,user_input);
    
    ret =  parse_user_input(user_input);
    if (ret == ERR)
    {
        cout<<"Sentence is empty, Please enter a valid sentence"<<endl;
    }
	else if (ret == DB_ERROR)
	{
	    cout<<"Please enter another sentence"<<endl;	
	}
	else
	{
		//
	}    


   return 0;    
}	
