# AI Collaboration Log
 
## Tools used
- Claude on the web
 
## A prompt that worked well
- How can I properly display items from my wardrobe with minimal and clean coding based on what I already have.
- Why it worked: I gave it the code I already haved and it prevented from more unnecessary code being created.
 
## A prompt that did not work
- Asking Claude to update my file, but I forgot to mention TODO should be commented out.
 
## Code I rejected
- I rejected having my display function as void because I wanted to be able to ensure that the correct messages were being displayed (so I made it into a string).
 
## What I'd do differently next time
- Deciding the return types of my functions before asking AI because I will then have to change it throughout multiple files.

## Fresh-conversation review
- Applied:
    - Added price to operator== in order to ensure that the items actually matched and had the exact same attributes for all.
    - Added price to printItem() because it was stored but not visible to the user.
    - getRandomItem() function was replaced with a runtime error for now until I implement it instead of having a ddefault item in order to prevent a crash.
    - Added do-while loops to my main.cpp file for the menu to ensure that an in-range value was chose for the enums.
    - Removed itemCount from wardrobe because items is a vector which already keeps track of size.
    - Changed the getItems() function to return const std::vector<ClothingItem>& to prevent copying of the whole vector on every call.
    - Changed removeItem() function to return bool.
- Rejected:
    - Initially had my display() function return a string but I decided to go back to void. I was then suggested to separate display() into two functions if I wanted to return a string which I is why I stuck with void. My printItem() also prints text which would make the function more confusing.
