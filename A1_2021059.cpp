#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include<process.h>
using namespace std;

void menu();
struct Book{ 
                int ID;
                string BookName;
                string author;
                string ISBN;
                int price;
                int pages;
void PrintAllBook(){
    
    cout<<ID<<setw(20)<<BookName<<setw(20)<<author<<setw(20)<<ISBN<<setw(20)<<price<<setw(22)<<pages<<endl;
    }



 
};
struct BookList{
    Book books[5];
    void PrintAllBooks(){
        cout<<"ID"<<setw(20)<<"BOOK NAME"<<setw(20)<<"AUTHOR NAME"<<setw(20)<<"ISBN"<<setw(20)<<"PRICE"<<setw(20)<<"PAGES";
        cout<<endl<<endl;
        for(int i=0;i<5;i++){
                books[i].PrintAllBook();

        }
system("pause");
			 menu();
    }
    void AddBook(){
        for(int i=0;i<5;i++){
                if(books[i].ID==0){
                    cout<<"Enter book "<<i+1<<"'s ID: "<<endl;
                    cin>>books[i].ID;
                    cout<<"Enter Book "<<i+1<<"'s Name: "<<endl;
                    cin>>books[i].BookName;
                    cout<<"Enter Book "<<i+1<<"'s Author: "<<endl;
                    cin>>books[i].author;
                    cout<<"Enter Book "<<i+1<<"'s ISBN: "<<endl;
                    cin>>books[i].ISBN;
                    cout<<"Enter book "<<i+1<<"'s Price: "<<endl;
                    cin>>books[i].price;
                    cout<<"Enter book "<<i+1<<"'s Pages"<<endl;
                    cin>>books[i].pages;
                    system("pause");
                    menu();
                    
                }


        }
system("pause");
			 menu();
    }
    
	void SortBook(){
         for (int j = 5; j > 1; j--)
	{
		for (int i = 0; i < j; i++) 
		{
			if (books[0].ID == 0)
				break;
			if (books[i].ID < books[i+1].ID)
			{
					swap(books[i].ID, books[i + 1].ID);
					swap(books[i].author, books[i + 1].author);
					swap(books[i].pages, books[i + 1].pages);
					swap(books[i].price, books[i + 1].price);
					swap(books[i].ISBN, books[i + 1].ISBN);
					swap(books[i].BookName, books[i + 1].BookName);
			}

		}
	}
	cout<<"the lsit has been ordered in descending order.  "<<endl;
	system("pause");
			 menu();
    }
   
    void SortBookAscend(){
        for (int j = 5; j > 0; j--)
	{
		for (int i = 0; i < (j-1); i++) 
		{
			if (books[i+1].ID == 0)
				break;
			if (books[i].ID > books[i+1].ID)
			{
					swap(books[i].ID, books[i + 1].ID);
					swap(books[i].author, books[i + 1].author);
					swap(books[i].pages, books[i + 1].pages);
					swap(books[i].price, books[i + 1].price);
					swap(books[i].ISBN, books[i + 1].ISBN);
					swap(books[i].BookName, books[i + 1].BookName);
			}

		}
	}
	cout<<" the books have been arranged in ascending order :)"<<endl;
	system("pause");
			 menu();
    }

    void DeleteAll(){
                        for( int i=0;i<5;i++){
                        books[i].ID=0;
                        books[i].BookName="";
                        books[i].author="";
                        books[i].ISBN="";
                        books[i].price=0;
                        books[i].pages=0;
                        }
                        cout<<"Book list has been deleted successfully"<<endl;

system("pause");
			 menu();
    }
	
	};

struct Student {
                 
                    int ID;
                    string StdName;
                    int RollNo;
                    
                    void PrintAllStd(){
                    cout<<"Student's' ID"<<setw(20)<<"Student's' Name"<<setw(20)<<" Student's' RollNo"<<endl;
                    cout<<ID<<setw(20)<<StdName<<setw(20)<<RollNo<<endl;
                    }



};

struct StudentList{
	
                        Student std [5];
                        int x;
                        void ADDStd(){
                        	
                        	for(int i=0;i<5;i++){
                        		if(std[i].ID==0){
								
                        		cout<<"Enter student "<<i+1<<"'s ID:"<<endl;
                        		cin>>std[i].ID;
                        		cout<<"Enter student "<<i+1<<"'s Name: "<<endl;
                        		cin>>std[i].StdName;
								cout<<"Enter student "<<i+1<<"'s RollNO: "<<endl;
								cin>>std[i].RollNo;
								system("pause");
								menu();
							}
							
                        }
                        
						}
     void DeleteStd(){
     	char x;
     	cout<<"-----If you want to delete all students press 1 other wise press 2-----"<<endl;
						cin>>x;
						switch(x){
						case '1':	
						
						for(int i=0;i<5;i++){
                        		
								std[i].ID=0;								                       		
                        		std[i].StdName="";
								std[i].RollNo=0;
							}
							cout<<"------All Students have been deleted------"<<endl;
							break;
							case '2':
								int y;
								cout<<"-----Enter the ID which you want to delete -----"<<endl;
								cin>> y;
								
								for(int i=0;i<5;i++){
								if(std[i].ID==y){
									if (i==4){
										std[i].ID=0;
										std[i].RollNo=0;
										std[i].StdName="";		
									}
									else{
										for(int x=i;x<4;x++){
											std[x].ID=std[x+1].ID;
								std[x].RollNo=std[x+1].RollNo;
								std[x].StdName=std[x+1].StdName;
											
										}
									}
								
								
								
							}
								
								}
								
							cout<<"Student has been deleted"<<endl;
							break;
						}
					system("pause");
			 menu();
	}
								
                    
	

void printStudentList(){
    for(int i=0;i<5;i++){
            std[i].PrintAllStd();
    }
system("pause");
			 menu();
}

};
 StudentList a;
 
 BookList b;
 
 void menu(){
 	system("cls");
	
               cout<<"-----WELCOME TO THE MAIN MENU-----"<<endl;
                cout<<"\n 1.  Add New Student."<<endl;
                cout<<" 2.  Delete Existing Student."<<endl;
                cout<<" 3.  Show All Students."<<endl;
                cout<<" 4.  Add New Book."<<endl;
                cout<<" 5.  Delete all Existing Books."<<endl;
                cout<<" 6.  Show all Books."<<endl;
                cout<<" 7.  Sort Books in Ascending order."<<endl;
                cout<<" 8.  Sort Books in Descending order."<<endl;
                cout<<endl<<endl;
                cout<<"choose an option or press 0 to exit >>>> "<<endl;
                
                
                char i;
                cin>>i;
                
                  switch(i){
                      case '0':
                      exit(0);
                      break;
                      case '1':
                      a.ADDStd();
                      break;
                      case '2':
                      a.DeleteStd();
                      break;
                      case '3':
                      a.printStudentList();
                      break;
                      case '4':
                      b.AddBook();
                      break;
                      case '5':
                      b.DeleteAll();
                      break;
                      case '6':
					  b.PrintAllBooks();
                      break;
                      case '7':
                      b.SortBookAscend ();
                      break;
                      case '8':
                      b.SortBook();
                      break;
            			default:
            				cout<<"Enter a valid choice. Thanks"<<endl;
            				menu();
							break;
            				
                  }
}
 
int main(){
    menu();
}

