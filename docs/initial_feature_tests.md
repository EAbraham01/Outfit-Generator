# Initial Feature Test Cases
 
## Feature: Adding/Removing Clothing Items
 
### Test 1: Normal Operation
- What it tests: Adding a clothing item to a wardrobe object
- Expected result: Item is created and then added to a wardrobe with the correct attributes
- Result: Pass
 
### Test 2: Edge Case
- What it tests: Testing if wardrobe is empty when no items added (ensuring item count is 0)
- Expected result: Item count of wardrobe should be 0
- Result: Pass
 
### Test 3: Removing Item
- What it tests: Adding an item and then removing it from the wardrobe
- Expected result: Wardrobe item count should be 0
- Result: Pass
 
### CTest Output
UpdateCTestConfiguration  from :/Users/emi/Desktop/Outfit-Generator/build/DartConfiguration.tcl
Test project /Users/emi/Desktop/Outfit-Generator/build
Constructing a list of tests
Done constructing a list of tests
Updating test list for fixtures
Added 0 tests to meet fixture requirements
Checking test dependency graph...
Checking test dependency graph end
test 1
    Start 1: OutfitTests

1: Test command: /Users/emi/Desktop/Outfit-Generator/build/tests
1: Working Directory: /Users/emi/Desktop/Outfit-Generator/build
1: Test timeout computed to be: 10000000
1: Running tests...
1: Normal Operation...
1: PASSED
1: Testing empty wardrobe
1: PASSED
1: 
1: All tests completed.
1/1 Test #1: OutfitTests ......................   Passed    0.23 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.23 sec
