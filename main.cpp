#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        choir
//  action 1:    the choir sings
choir.sing();
//  action 2:    the choir rehearses
choir.rehearse();
//  action 3:    the choir performs
choir.perform();

//  2)           
//  Noun:        artist
//  action 1:    the artist composes
artist.makeMusic();    
//  action 2:    the artist plays their instrument(s)
artist.playInstrument();
//  action 3:    the artist releases music on Spotify, Apple Music, etc.
artist.releaseMusic();

//  3)
//  Noun:        water
//  action 1:    water freezes
water.freeze();
//  action 2:    water evaporates
water.evaporate();
//  action 3:    water flows
water.flow();

//  4)
//  Noun:        sun
//  action 1:    the sun rises
sun.rise();
//  action 2:    the sun sets
sun.set();
//  action 3:    the sun warms the earth
sun.warmEarth();

//  5)
//  Noun:        plant
//  action 1:    plant grows
plant.grow();
//  action 2:    plant absorbs water
plant.absorbWater();
//  action 3:    plant performs photosynthesis
plant.performPhotosynthesis();

//  6)
//  Noun:        clock
//  action 1:    clock ticks
clock.tick()
//  action 2:    clock chimes
clock.chime();
//  action 3:    clock displays time 
clock.displayTime();

//  7)
//  Noun:        student
//  action 1:    student learns
student.learn();
//  action 2:    student takes exams
student.takeExams();
//  action 3:    student attends classes
student.attendClasses();

//  8)
//  Noun:        baby
//  action 1:    baby cries
baby.cry();
//  action 2:    baby sleeps
baby.sleep();
//  action 3:    baby crawls
baby.crawl();

//  9)
//  Noun:        car battery
//  action 1:    A car battery stores energy 
carBattery.storeEnergy();
//  action 2:    A car battery starts the engine
carBattery.startEngine();
//  action 3:    A car battery powers the car's electrical system
carBattery.powerElectronics();

//  10)
//  Noun:        job
//  action 1:    job pays the bills
job.payBills();
//  action 2:    job provides a sense of purpose
job.providePurpose();
//  action 3:    job leads to career growth
job.leadToCareerGrowth();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
