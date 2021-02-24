# dsoft-hoanghn
# CppTestOnline_Test1
link reposity:  https://github.com/dsoft-hoanghn/TestCpp1.git
## Question 2
User Interface contains two types of user Input controls: Textinput which a.
Implement the following methods:
- Add on class Textinput adds the given character to the current value.
- Get value on class Textinput return the current value 
- add on class Numberinput overides deccepts all characters and Numer Input, which accepts only digitss the base class method so that each non numeric character is ignored
## Solution
- Declare Add method adds the given character to the current value.
- Declare the add method as a virtual function, so the derived class can override the add method.
- Declare the CurrentValue property in protected access scope. so the derived class is accessible to the CurrentValue property.
- checks whether the text input is character or number. So non numeric character is ignored
## Installation
Int the terminal of your linux
- Check if your operating system has built-in gcc or g ++ compiler with the command:
```sh
which gcc
which g++
```
If the results return means we have the compiler, otherwise if there is no message, we must type the following command to proceed with the installation.
```sh
sudo apt-get install build-essential
```
## Run program
To build this program we use the command
- Question 2
```sh
g++ question2.cpp -o question2.exe
./question2.exe
```
## Expected result
- Question 2
We give 3 input:
    input->add('1');
    input->add('b');
    input->add('0');
So The output to the screen is: 10

[//]: # (These are reference links used in the body of this note and get stripped out when the markdown processor does its job. There is no need to format nicely because it shouldn't be seen. Thanks SO - http://stackoverflow.com/questions/4823468/store-comments-in-markdown-syntax)

   [dill]: <https://github.com/joemccann/dillinger>
   [git-repo-url]: <https://github.com/joemccann/dillinger.git>
   [john gruber]: <http://daringfireball.net>
   [df1]: <http://daringfireball.net/projects/markdown/>
   [markdown-it]: <https://github.com/markdown-it/markdown-it>
   [Ace Editor]: <http://ace.ajax.org>
   [node.js]: <http://nodejs.org>
   [Twitter Bootstrap]: <http://twitter.github.com/bootstrap/>
   [jQuery]: <http://jquery.com>
   [@tjholowaychuk]: <http://twitter.com/tjholowaychuk>
   [express]: <http://expressjs.com>
   [AngularJS]: <http://angularjs.org>
   [Gulp]: <http://gulpjs.com>

   [PlDb]: <https://github.com/joemccann/dillinger/tree/master/plugins/dropbox/README.md>
   [PlGh]: <https://github.com/joemccann/dillinger/tree/master/plugins/github/README.md>
   [PlGd]: <https://github.com/joemccann/dillinger/tree/master/plugins/googledrive/README.md>
   [PlOd]: <https://github.com/joemccann/dillinger/tree/master/plugins/onedrive/README.md>
   [PlMe]: <https://github.com/joemccann/dillinger/tree/master/plugins/medium/README.md>
   [PlGa]: <https://github.com/RahulHP/dillinger/blob/master/plugins/googleanalytics/README.md>
