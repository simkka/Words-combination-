<h1>Programming project - C</h1>
<h2>Words combination</h2>
<h2>Description</h2>

In the text entered from the keyboard, find a word that can be composed of letters from one of the other words in the same text, just put together in a different order, case sensitive.

<br />
<h2>Algorithm Description</h2>

Enter text, copy it to an array. Split the entire text into an array with individual words. Using loops, we go through the array. Copy the word with which we are comparing to a separate array using the strcpy function. Determine the length of the word, and until the number of letters is over, look for the same letters in the word. If we find identical tokens, we increase the counter a by 1 (the counter of identical letters) and cross out the letter we found. Do the same for all other letters. When the word is finished, check that the number of letters found and the number of letters in the word is the same. Print the word. Check the rest of the words in the same way.

<br />

<h2>Block diagram of the algorithm:</h2>
<img width="358" alt="Снимок экрана 2023-02-20 в 22 13 02" src="https://user-images.githubusercontent.com/87941256/220205894-cf11fbd8-6106-44db-b07d-fb7df81d49f1.png">

<h2>Example of the program result:</h2>
<img width="366" alt="Снимок экрана 2023-02-20 в 22 19 19" src="https://user-images.githubusercontent.com/87941256/220206512-86577888-2327-40cd-9129-38f9790178e4.png">

