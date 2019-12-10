# TestDriver_for_Ctype_Class
Contains testDriver.cpp, class.h, fileIn and what the fileOut should look like.  Good example in terms of software development as to the structured testing that can be easily used.

Run from terminal use:
  g++ -o testDriver testDriver.cpp
then of course:
  ./testDriver
  
You will be prompted to name your input file.  For this construct, the input file is named 'fracIn'
You will then be prompted to name your output file.  You can use anything, but for this example I used 'fracOut'
It will then ask you what you want to name your test.  Think 'iterative process'.  This way, you can keep up with 
  what you have tested at 3am.

After it runs, you will see which test were run and if it was able to complete.  To see the output file, simply
  type in terminal: 'cat fracOut'. Then compare this output file to the input file that the program called in the beginning
  to see the transform and how the data moves around.
  
In the .cpp, the only things to have to update in the future when testing different classes will be to #include "class.h" file and then 
  add the declaration of the new object type (in this case it was 'FractionType fraction; ')
  
The only other part to personalize comes following the 'while (command != "Quit") { '
  This is where you will use a series of if/else if/ else control structures to feed the data from the input file into your driver, 
  through your class, back through your driver and out.

Have fun.  
Sean 
experiencethebridge1@gmail.com
