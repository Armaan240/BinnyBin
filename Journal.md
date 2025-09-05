# JOURNAL

| Title | Binny The Smart Bin|
|-------|---------------------|
| Author | ARMAAN SONI  |
| Slack Id | U091M21518T (@AMU)|
| Description | Binny is a Smart Dustbin ,Clean your Dustbin on your desk ,Get Your Recyle bin deleted by it  |
| Created  | 2025-08-28 |
| Last Updated  | 2025-09-5 |
| Total Time Till date| 11 Hours|
## **28 AUG 2025 (Idea and Research and Development)**

### *(8AM-10AM)(70-75min -> RND ,35-40 min -> Test Code)*
the Idea of binny was not orignally mine ,it was brainstromed by Someone (if you know you know), but yah i started reseraching and seeing some videos for inspirtation 
and Decided that i can make such dustbin by ardiuno nano and ultrasonic sensor thus i saved sime datasheets for ultrasonic sensor to read later and finalized the circuit but before that I needed 
to confirm that how could I control Action and Delete Files From Recycle Bin , Hmm after understanding and taking some help from my Sister (She is A software Developer) I decided to make 
a test Script For Arduino Nano To just Pass (Triger) to serial out put which would be read by Python script running at the background, I used serial library and Tested The Functioning ,uhh i 
don't why it happens to me only I forgot to write code in my laptop to track coding time but though I making a journal so keeping an acurtae track of everything

### *(4PM-4:30PM)(Debuging)*
The code Which i Wrote Before Had Some Compiling issues so i look out some of errors and corrected them ,as i was writing arduino code after a long times so mistake happened but now it was fully working ,so the logic of the code is that if press the rest buuton on nano it runs the code and the as toldabove the python scripts read the trigger command running at the background
Here Is the Test Code And a Video
![](https://github.com/Armaan240/BinnyBin/blob/main/Images/Screenshot%20(171).png)
![](https://github.com/Armaan240/BinnyBin/blob/main/Images/Screenshot%20(172).png)

https://github.com/user-attachments/assets/c9c88c73-746b-45f9-b7a5-462e45f7a41d

### *(8PM-9:30PM)(Final Circuit)*
As i had Tested the Nano Functionality with recycle bin in windows now it was time to make the Final Circuit with ultrasonic sensor i went to a local shop and bought a cheap ultrasonic sensor worth $1 and went through many youtube tutorials to learn more about ultrasonic sensors and read the saved datasheet ,and connected the eco , trig, vcc , gnd to nano and now only final code was left to 
,but before that i had to make a work flow and a reference of the circuit and logic, hmm after many thoughts  I decided to the make a single standalone device which can be installed on any dust bin. 
the logic will be that i will add the empty depth of the dustbin and then write a simple but effective code that if the height of the bin is equal to readings made by ultrasonic sensor (empty case) it Sends Trigger Command to python script then the same script clear the recyle bin but if the empty height is not equal to what ultrasonic senor could read it would SenD a command that currently dustbins is filled 
I would make a python app which could be run in any device and shows real status of the bin , also in future I would add lights and more sensors to this device but for now i am only doing a straight forward process
![](Images/IMG_2245.jpeg)
![](Images/IMG_2238.jpeg)
![](Images/IMG_2248.jpeg) 

## **29 AUG 2025 (Dustbin Design And Movement)**

### *(10AM-12:PM)(Choosing A Right Dustbin)*
hmm so i today i had to go for urgent work but dont wanted to delay my project so i decided to complete the most inportant and main part on which the whole functionig depends so firstly i made a lid for the dustbin which would be operated by a servo motor and a ir sensor thus opening the lid with using hands also as it was to be kept on the desk so i dont wanted to make my desk look ugly with a big dustbin , hmm therefore choose a small box and hand sawed a lid made of wood , yah i know it looks ugly right now but later on i would spray black paint on it , after making the lid made a movement system for the bin , just for prtotyping i am using an ugly thread but would use a more effcient way to move the lid in the final project , i always try to test out raw things first before final touches

These are some ugly images of ugly looking dustbin but dont judge a book by its cover 
![IMG_2251](https://github.com/user-attachments/assets/6ebcb633-54cb-4d2e-ba84-09f06baeb89d)
![IMG_2252](https://github.com/user-attachments/assets/8550d0a4-c3a1-4639-8858-b8acb496aebd)
Also Here Is The Movement Of The Lid With Servo 

https://github.com/user-attachments/assets/dbe1fd5e-33a9-43f6-a742-9a5f070c3bb9


## **4 Sep 2025 (Dustbin Design And Movement ReWork)**

### *(8AM-9AM)(Painting)*
uhh i had to go to a family trip which was pretty good but also boring as i was away from my all techs ands my fav dustbin project ,so i came back home yesterday and started reworking on the design and movement of the lid yeah i made concept of moment of the lid which quite good but not for long term use as it would clutter my lifemorewith a ugly dustbin with complicated thread moving so after taking reviews from my cousions and uncle i decided to first change the look so i decided ti first paint my dustbin which my bad idea as i choose for a gloss finish of black , with 0 exp of spray paint i painted it very bad and ruined the bin ,hmm i forget to click a pic of that but yeah it was really bad after that i saw some tourials on yt and end up with a nice bin and waited for few hour to let it dry

### *(4pm-6PM)(Servo Position And Wiring)*
this task seem to be easy at first but it got hard with the time as i made the lid of the dustbin of a ply wood wich was pretty heavy and i had a very bad servo with less torque hmm so after many hit and trials i decide to place the servo at the top with a long head which will be able to open through a sufficient height ,now it was time to cut the the bin which i did very easily with a hot knife add installed the servo ,after that i decided to make final circuit asap aslo ,so i added a ir sesor for detecting hand and ultrasonic senor and wired them ,also i add a extra usb for powering servo which takes 5v so that current does not get lowered for ir and ultrasonic sensor ,all this to be installed at the back of the dustbin here is the pic of the wiring for testing the movement a added a simple ir and servo code 
![](https://github.com/Armaan240/BinnyBin/blob/main/Images/wire.jpeg)
![](https://github.com/Armaan240/BinnyBin/blob/main/Images/pait.jpeg)

https://github.com/user-attachments/assets/e278a5c3-3d17-4bac-a73d-da7dd03f8dd6

### *(9pm-:10:30PM)(Final Code)*
now it was time for the final code as i gained some exp from my sister i tried to code myself but yeah took some help from google and yt and my loving sister i finesh the coding part of the bin the logic which i made was a result of test my old fashoined ultrasonic senor as the bin was made up of plastic so ther were some noise reading also,so i made a logic that ultrasoinc senorwould take 3-4 reading out which if 3 readings are of the dustbin hieght or equivalent (16cm-14cm) so it will send trigger else if height is (0-5) cm means it is empty and all other readings will be taken as uncertain ,the ir sensor would recognize hand movement and send command to servo here is the pic of the code
![](https://github.com/Armaan240/BinnyBin/blob/main/Images/Screenshot%20(173).png)
![](https://github.com/Armaan240/BinnyBin/blob/main/Images/Screenshot%20(174).png)
## **5 Sep 2025 (Final Assembly)**
### *(7AM-7:40AM)(Assembly)*
Now it was time to put all the electronic to the cutie bin thus it took me just roughly 30-40min to assemble the bin and fully test the code ,i used a black trashbag with some waste materials and cloth pieces and add to the bin and when i take the bag out of it yahhh the dustbin worked i made a video and here its the final looks

https://github.com/user-attachments/assets/892ee61a-c399-4a6b-b97d-b40f4853741f

