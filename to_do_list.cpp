#include <iostream>
using namespace std;

int
main ()
{
  int num_task; // variable for number of task
  cout << "Enter the number of task to add in your routine: ";
  cin >> num_task; // get input through user
  string task[num_task]; // create array name task 
  string task_done; // variable for done task

  for (int i = 0; i < num_task; i++) // for loop for add elements in  array
    {
      cout << "Enter task number " << i + 1 << " :" << endl;
            // getline(cin,task[i]);
      cin>>task[i];
    }
  cout << "Your To Do List: " << endl;
  for (int i = 0; i < num_task; i++) // for loop for print  list
    {

      cout << task[i] << endl;
    }
  int j = 0; // variable j for runnig do while loop 
  do // using do while loop for complete all task 
    {
    
      cout << "Enter task which you done" << endl;
      cin >> task_done;
      for (int i = 0; i < num_task; i++) // for loop for checking task done
	{
	  if (task_done == task[i])
	    {
	      cout << task[i] << " task done" << endl;
	      task[i] ={""};

	    }
	}
      cout << "your updated to do list" << endl;  // print updated to do list
      for (int i = 0; i < num_task; i++)
	{ if (task[i]==""){
	    cout << task[i];
	}else{
	    cout << task[i] << endl;
	}
// 	  cout << task[i] << endl;

	}
      j++;
    }
  while (j < num_task);
  cout << "all task done"; // last print when all task done
  return 0;
}
