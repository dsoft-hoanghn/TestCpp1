# dsoft-hoanghn
# CppTestOnline_Test1
link reposity:  https://github.com/dsoft-hoanghn/TestCpp1.git
## Question 1
Implement the unique names method. When passed two vectors of names, It will return a vector containing the names that appear in either or both vectors. The returned vector should have no duplicates.
For example, calling unique names{std:vector<std:string "Ava", "Emma", Olivia"}, std::vector std:string ("Olivia", "Sophia "Emma)) should return a vector containing Ava, Emma Olivia, and Sophia in any order.

## Solution
- Creates a result vector containing the output names in one or both vectors.
- Put the first vector elements into the result vector
- useing 2 nested loops, traverse 2 vector elements to check if the name element in two vectors is the same, if the same is ignored.
- Put the rest of the elements in the result vector.
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
- Question 1
```sh
g++ question1.cpp -o question1.exe
./question1.exe
```

## Expected result
- Question 1
We give 2 input vectors: vector<std:string "Ava", "Emma", Olivia"} and vector std:string ("Olivia", "Sophia "Emma)
So The output to the screen is: " Ava Emma Olivia Sophi".

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
