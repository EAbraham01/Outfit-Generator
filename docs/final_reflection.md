# Final Reflection

### Done
- **Feature 1: Adding Clothing Item** — User can enter clothing item details which are added to the wardrobe and confirmed.
- **Feature 2: Display Wardrobe** — Loops through all wardrobe items and prints each one, or displays an empty message if none exist.

### Stubbed
- **Feature 3: Generate Full Outfit** — Planned to generate a full outfit from a CSV file of pre-built outfits based on user preferences.
- **Feature 4: Generate Outfit From Item** — Planned to take a user-provided item and generate the rest of the outfit around it.
- **Feature 5: Suggest Outfit Improvement** — Planned to take a full outfit and recommend better items based on style attributes.
- **Feature 6: Recommend Brands** — Planned to ask for a budget and recommend matching brands.
- **Feature 7: Update Preferences** — Planned to let the user update their style and outfit preferences.
- **Feature 8: Save/Load** — Planned to read and write wardrobe items from a CSV file on startup and exit.

### Cut
- None

### Commited Features for This Implementation
- **Feature 8: Save/Load** — First priority because persistent data is required before Feature 3 can be built. Will read clothing items from a CSV file into the wardrobe on startup and write them back on exit.
- **Feature 3: Generate Full Outfit** — Second priority. Will use a CSV of pre-built outfits and match them to user preferences.

### Prompt 1: Plan vs. Reality
As of right now I have completed three features: adding an item to a wardrobe, displaying my waardrobe, and then generating a full outfit. I'm still deciding whether I want to do more about my third feature of generating a full outfit because I want it to be taking into account for more than just style and budget, so that the outfit is perfect for the user. One feature that turned out more differently than I thought is definitely my third feature of generating a full outfit. At first, I thought that I'd have to keep adding items to the user's wardrobe and then generate items based on that. Then, after I was suggested to use a CSV file to ensure that the third feature works, I had to understand how to parse a CSV file using fstream and stringstream. I was already familiar with fstream so it was not too much of a problem, but I was definitely not used to stringstream so it took a bit of time to learn, but I then finally understood its function and usefulness for my project. I thought it would be a simple loop of going through each item, but there was way more involved than just that. I had to separate the different boxes into strings which I'd then allocate to certain variables. I also had to learn how to separate the attributes of the clothing items into a long string which was separated by commas.

## Prompt 2: Design Decisions You Would Change
One of the main design decisions that I would change would have to do with my User class. In my main.cpp file, I create a user object with defaults and then I change the attributes of the user after the user types in their actual preferences. I also had a serious mistake of missing some parts of the function which I will definitely fix later, and created a huge gap in the success of my third feature. My third feature seemed to be working, but when I tried a different input, I was still being given the same output because I forgot to implement my user functions which basically change the preference of style and budget for the user. If I had started my project all over again, I would probably add parameters into my generateOutfit function or at least ensure that my setter functions were properly working before I had started the main menu.

## Prompt 3: What You Learned (some of these were learned through chatting with AI and asking how they help me before implementing)
Technical: One major thing I learned during this project was CSV parsing using fstream and sstream. I was already familiar with fstream as it was something we practiced in class, but sstream was something a bit new to me. I would use getline function to get the whole line and then have to wrap it in a stringstream. Then it would allow me to use getline again and then separate the different columns with commas. Another tricky part was the fact that all the text on the CSV file was technically strings, so whenever it was the price column, I'd have to use the stod function in order to convert the prices into a double. I also learned from AI on how to use a operator that was specific to a class, which allowed me to check whether certain items were equal in order for me to be able to remove items. This was something that I did not know, but I think I've gotten much more used to it.

Design: Another major thing I learned during this process was preventing my code from repeating itself. I had created an itemCount variable for my wardrobe, but this was not needed because my wardrobe already had a vector. A vector already accounts for the size of it and how many items there are so I just removed the itemCount variable.

Process: Writing the spec for my second feature was something very new to me, but I definitely learned a lot. It made it way easier for me to direct the AI to helping me with the project rather than the AI directing me. The implementation became way easier and faster because I already had my plans laid out, so it just became a matter of putting my words into code.

### Prompt 4: What's Left to Finish
1. Feature 4: Generating Outfit From a Single Item - This one is important because its one of the main functions I want for my program as it allows you to create an outfit based on what you already have so it makes it much more interactive and realistic.
2. Feature 5: Suggesting Outfit - This one is also very important because I want my outfit generator to be more immersive where users actually feel like the program can create a difference in their everyday lives and suggest an outfit that helps them improve their style.
3. Feature 6: Recommend Brands - Sometimes finding brands can be hard based on budget, so being able to have a program that quickly suggest brands would be extremely helpful to others and save them a lot of time.
4. Feature 7: Update User Preference - This is something I'm still figuring out because I'm not sure how it will work once I update the user's preferneces because my generate outfit feature already asks for some of the attributes of the outfit. I may have to add another feature that complements this feature like a generate outfit feature that doesn't need any input and simply generates based on the information it has from the user.

### Prompt 5: Workflow Reflection
The part of the workflow that has become natural for me right now is creating a feature branch, and then following it with small commits and then eventually pushing. I've also gotten used to going back to the main branch. These parts of the workflow are much easier for me now that I have done the third feature.
Some parts that still feel awkward/slow for me right now is the part where I have to review the pull request. I'm still getting used to it, and getting better at understanding how to properly review all the code that has been changed (through the color codes like green and red). I'm also still trying to get better used to writing a proper PR description as I have to keep looking back at the components of the description that make a good one.
If I were working with another developer on this project, the reviewing part would definitely matter much more in this project. Right now, it feels hard to make it super realistic because I am reviewing my own code, rather than someone else with a different perspective who may have more advice to give.

### Prompt 6: AI Use
AI definitely helped me a lot throughout this project, especially for the learning process. I learned a lot of new things like creating operator functions that were specifically for objects of a certain class and I also learned how to use a new library (sstream), allowing me to treat strings as streams. It helped a lot for debugging especially when there would be sometimes where I didn't quite understand the error I was receiving, so then I'd ask AI and it make it much simpler. This would help me better understand why I'm being flagged for an error and made it easier to do simple fixes on my project. It also helped me with actually using the CSV file because I was not very familiar with how to actually implement it in my project. It gave me a snippet of code to paste into my CMake file allowing me to actually extract the data that was in the CSV file. There was one instance, where I was going to return a string for my display function for wardrobe, and it helped me do that by splitting it into two functions. I then decided to reject it because I only wanted to return a string for my display function because I wanted to have more tests for my test_main.cpp file, but I realized that the most important part was preventing an unnecessary amount of code and also making it clean.

