# photot_journal_final_project
Alex Eftimie's final project for PIC 10C- a photojournal

I like to journal a lot in my free time but I'm often discouraged from journaling daily
because of the effort it takes to pull out a pencil and paper and write out all my thoughts.
Most of my memories are linked to the pictures on my phone and I thought it would be a cool idea
to create an application in which you can caption upload, caption, and save pictures. Later,
you can browse through the pictures you captioned, reminiscing through a sort of "photo-journal"

* Note: Initially, I wanted to create a more comprehensive journal with a to-do list, event planner, 
and 

1. The first difficulty I encountered during my learning process was earlier in the quarter when I 
was getting used to using git. I was not completely comforatble using the terminal and at times it was 
frustrating trying to commit changes locally and then push them to my github account. This took a 
little while to get used to. Once I got the hang of it though I was able to to commit and transfer 
my edits painlessly. 

2. My original layout plan was to have the initial black window of the application say "Welcome to your 
Photo-Journal" in bright greenwith two red buttons on the lower half labeled "Add Entry" and "Browse".
"Add Entry" would allow you to upload an image fie from your computer and add a caption of your choosing.
You could then save that captioned image. The "Browse" button would take you to a window with your captioned 
image in the center and. There would be two opposing arrow buttons at the bottom of the window that you could 
click to go forward or backward through the images you've saved.

3. In coding up this project, one problem I ran into was trying to find a way to store a user's "memories" after the app was closed and then loading the memories again when the app was opened. The strategy I attempted was to try to write all of the filenames of the pictures to one text file and all of the user's text entries to another text file. Unfortunately, as the picture filenames had to be stored as QStrings, I was not able to figure out how to write QStrings out to a file like you would a normal std::string. It seems like there should be a simple solution but I was unable to find one. This would be a great feature to add in the future.

**Homework 1 evidence**: Note that I have also completed most of the version control features required by Assignment 1.
* I have this README file to explain the project
* I have well over 20 commits
* I have 2 branches: master and experimental
* I have merged experimental branch into master twice - the second time was a non fast forward merge
* I have resolved 2 issues. Issue #2 was closed directly from a commit so you can see the link
* I have a .gitignore file so that the photos I used for testing do not appear in the repository
