
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

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members

## Class Diagram
 > ![Blank diagram](https://user-images.githubusercontent.com/59095877/166174127-325d1f8e-fdf1-4162-b02f-56f9a86a6059.png)
 > Description: The task list class is an aggregator for tasks, and has the functions of printing a menu for the user to interact with, adding/removing tasks from a  list, and printing the task list in order of date/if it's an extremely important task. The task class contains the public data members of title, details, date, done, top priority, and the next and previous task nodes. Title is the title of the task, details is the specific information of that task (can be left blank), date is the day that the task is due/happening, done is regarding whether or not the task is complete, top priority entails whether or not the task is extremely important (top priority is printed first in list), next and previous nodes are pointing to the nodes before and after the current task. (next and prev used for ordering) There are three subclasses, consisting of appointments, assignments/tests, and work-related tasks. Appointments has the extra member of type, relating to the kind of appointment (ex: Doctor's, insurance, dentist, etcetera). Study has the member of class which would show the class that the assignment or test was for in order to prioritize study or work for that particular class. (different from details as it would be shown earlier to allow for easier access for students) Work has the member of team in order to show what team has that particular task nd allows for the organizing of tasks by team. Final class included is a date class in order to compare dates and allow for prioritization by due date.
 >  
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design pattern(s) did you use? For each pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
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
 
