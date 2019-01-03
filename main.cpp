#include <iostream>

using namespace std;
void createTriangle(int limit_rows);
void createSqueare(int max_limit);
int main()
{
    createTriangle(4);
    createTriangle(8);
    createTriangle(16);
    createSqueare(20);
    return 0;
}
void createTriangle(int limit_rows){
    int max_limit = 20;
    int stars_christmas_tree = 0;
for(int j = limit_rows; j > 0; j--)
    {
        stars_christmas_tree++;
        //center the tree
            for(int i = 0; i < max_limit - limit_rows;i++){
                cout << " " ;
            }
        //create triangle
        for(int i = j; i > 0; i--)
        {
            cout << " " ;
        }
        for(int i = 0; i < stars_christmas_tree; i++)
        {
            cout << "* " ;
        }

        cout <<endl;
    }
}
void createSqueare(int max_limit){
    for(int i = 0; i < 4;i++){
        for(int i = 0; i < max_limit/1.2;i++){
                cout << " " ;
        }
        for(int j = 0; j < 4;j++){
            cout << "* ";
        }
        cout <<endl;
    }
    cout <<endl;
    cout << "Merry Christmas :D ;) " <<endl<<endl;
}
