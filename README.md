
# Task Scheduler

  Authors: [Ased Karim](https://github.com/AsedK), [Pu Sun](https://github.com/MtdMikuru1096), [Daniel Velez](https://github.com/urfavoriteduckboi), [Tomoka Nakagawa](https://github.com/tnaka032)
 
## Project Description
Description: The task scheduler will allow the user to input different tasks into a kanban schedule. The reason why we think this would be a great fit as a project is not only would it give us valuable experience but it is something that we can use well beyond after this class and remember that it was   something that we individually created.\
 Our language will be c++. Below is a sample input and out between the user and the program.\
 **Enter the name of the task being entered**\
 Task 1\
 **What is the priority of this task Backlog, design, to do, doing, review, testing, done.**\
 doing\
 **Please add a note to task**\
 Fixing unexpected errors \
 **The item “Task 1” has now been added to “doing” section**



## Class Diagram
 ![Blank diagram](https://user-images.githubusercontent.com/59095877/168517340-02cf8e7b-d29d-4618-ad97-2ad2776405c1.png)
 Description: The task list class is an aggregator for tasks, and has the functions of printing a menu for the user to interact with, adding/removing tasks from a  list, and printing the task list in order of date/if it's an extremely important task. The task class contains the public data members of title, details, date, done, top priority, and the next and previous task nodes. Title is the title of the task, details is the specific information of that task (can be left blank), date is the day that the task is due/happening, done is regarding whether or not the task is complete, top priority entails whether or not the task is extremely important (top priority is printed first in list), next and previous nodes are pointing to the nodes before and after the current task. (next and prev used for ordering) There are three subclasses, consisting of appointments, assignments/tests, and work-related tasks. Appointments has the extra member of type, relating to the kind of appointment (ex: Doctor's, insurance, dentist, etcetera). Study has the member of class which would show the class that the assignment or test was for in order to prioritize study or work for that particular class. (different from details as it would be shown earlier to allow for easier access for students) Work has the member of team in order to show what team has that particular task nd allows for the organizing of tasks by team. Final class included is a date class in order to compare dates and allow for prioritization by due date.
 >  
 > ## Phase III
 > For this project, we have decided to use strategic design as it falls more in line with our task manager project. This was mostly due to the fact that our task manager has subtasks that are used to signify between specific types of tasks in order to give variety. The task list serves as the context interface as it gives the user the menu and ability to interact with the individual task nodes. The class of task serves as a strategy, which the three subclassess derive from in order to specify what they are. The subclasses of appointments, assignments, and work serve as concrete strategies, specifying what the task is for as well as its general purpose and the additional data along with it. This design pattern allowed us to create a more specific set of tasks and the ability for the task manager to be used in more contexts.
 >   * An updated class diagram that reflects the design pattern(s) you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 

 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
