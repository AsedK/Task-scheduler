#ifndef __TASK_TEST_HPP__
#define __TASK_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "task.cpp"
#include <sstream>
#include<iostream>

TEST(TaskTest, emptyTask){
   subTask test;
   
   std::stringstream out("");
   test.printTask(out);
   
   EXPECT_EQ(out.str(), "Task title: none\ndetails: none\nDate: 0\nDescription: \ndone: 0\npriority: 0\n");
}

TEST(TaskTest, Task){
   subTask test;
   
   test.setTitle("Homework");
   test.setDetails("MathHomework");
   test.setDescription("It will take 15min");
   test.setPriority();
   
   std::stringstream out("");
   test.printTask(out);

   EXPECT_EQ(out.str(),"Task title: Homework\ndetails: MathHomework\nDate: 0\nDescription: It will take 15min\ndone: 0\npriority: 1\n" ); 
}


TEST(TaskTest, Taskwithstudy){
   subTask test;
   
   test.setsubstudy("general Math");
  
   EXPECT_EQ(test.getsubstudy(), "general Math");
}

TEST(TaskTest, Taskwithbusiness){
   subTask2 test;
   
   test.setsubbusiness("Scrum");
   
   EXPECT_EQ(test.getsubbusiness(), "Scrum");
}

TEST(TaskTest, Taskwithappointment){
   subTask3 test;

   test.setsubappointment("Dentist");

   EXPECT_EQ(test.getsubappointment(), "Dentist");
}

#endif
