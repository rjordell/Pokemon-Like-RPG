[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=8913306&assignment_repo_type=AssignmentRepo)
 
 # Untitled Pokemon-like RPG
 [Jordell Rodrigues](https://github.com/rjordell)
 [Kristin Chang](https://github.com/itskristnn)
 [Alessia Phang](https://github.com/aphan079)
 [Julian Ramos](https://github.com/jramo165)

## Project Description
 We all enjoy RPG games, and we wanted to make something Pokemon-inspired and fun since we all grew up with the series.
 We are planning only to use C++.
 Input will be text or characters and output will be text on the command line.
 Features include...
 -A short, linear story
 -Type advantages similar to Pokemon (water is strong against fire, etc.)
 -5 different monsters to collect, train, and battle with
 -naming your battle partner
 -naming your character
 -pokemon level system

## Class Diagram
 ```mermaid
classDiagram
    class Pokemon {
    Pokemon : -String ownerName
    Pokemon : -String name
    Pokemon : -Enum type
    Pokemon : -int experience
    Pokemon : -int health
    Pokemon : +attack(enemy) void
    Pokemon : +levelUp() void
    Pokemon : +addExp() void
    Pokemon : +changeHealth(int difference) void
    Pokemon : +setPokemonName() void
    Pokemon : +getPokemonName() void
}
    class Person {
    Person : -String name
    Person : -Vector~Pokemon~ team
    Person : +Person(string name)
<<<<<<< HEAD
    Person : Person()
    Person : Person()~
    Person  : setPersonName() void
    Person : getPersonName() void
=======
    Person : +Person()
    Person : +Person()~
    Person : +setPersonName() void
    Person : +getPersonName() void
>>>>>>> 23c5b277d4e0c9eca65ce54f895cbbbddcc67389
}
    class Player {
    Player : +catchPokemon() void
    Player : +addToTeam() void
    Player : +commandPokemon(Pokemon actionPokemon) void
}
    class NPC {
    NPC : +commandPokemon(Pokemon actionPokemon) void
    NPC : +startFight() void
}

Person<|--Player
Person<|--NPC
Pokemon "0..5" --> Player
Pokemon "0..5" --> NPC

```
The Pokemon class has various stats that can change as it is attacked, levels up, etc. The Player and NPC classes inherit from the Person class. Both players and NPCs can have up to 5 Pokemon on a team. Players can catch Pokemon and add them to the team. Both Players and NPCs can command Pokemon to perform moves. Pokemon can attack each other, gain experience, level up, lose and gain health, and have a custom name. Only NPCs can start battles with the player character.
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase I.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
