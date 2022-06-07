#ifndef __TASK_TEST_HPP__
#define __TASK_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "task.cpp"
#include <sstream>
#include<iostream>

TEST(TaskTest, emptyTask){
   Task test;
   
   std::stringstream out("");
   test.printTask(out);
   
   EXPECT_EQ(out.str(), "Task title: none\nDate: 0/0/0\nDescription: \ndone: no\npriority: no\n");
}

TEST(TaskTest, Task){
   Task test;
   test.setType(3);
   test.setTitle("Homework");
   test.setDescription("It will take 15min");
   test.setPriority(true);
   
   std::stringstream out("");
   test.printTask(out);

   EXPECT_EQ(out.str(),"Task title: Homework\nDate: 0\nDescription: It will take 15min\ndone: no\npriority: no" ); 
}


TEST(TaskTest, Taskwithstudy){
   task test;
   
   test.setinfo("general Math");
  
   EXPECT_EQ(test.getInfo(), "general Math");
}

TEST(TaskTest, Taskwithbusiness){
   Task test;
   
   test.setInfo("Scrum");
   
   EXPECT_EQ(test.getInfo(), "Scrum");
}

TEST(TaskTest, Taskwithappointment){
   Task test;

   test.setInfo("Dentist");

   EXPECT_EQ(test.getInfo(), "Dentist");
}

#endif
