#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string name;
string answer;
int Health = 100;
void start(), explore(), rest(), noise(), leave(), death(), groupstart(), lonerider(), alley(), safehouse(), mutantdog(), alleyrun(), intro(), restart(),safehouse1(), run(), gate(), overlord(), craterfight(), germany();
void godnap(), godclap(), godconvo(), train(), caveburst(), tokyo(), fly(), office(), beach(), drownd(), thrust(), powerswim(), showdown(), absorb(), dodge(), gutshot(), endgame(), teleport(), grouptrain(), greenscreen();

void start()
{
    cout << "Do you want to explore the area or rest inside the half destroyed building?" << endl;
    cout << "(explore/rest)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "explore"){
        explore();}
    if (answer == "rest"); {
        rest();}
}
void explore()
{
    cout << "You start walking through the street, looking for any signs of life. You pass by a church that's still standing and decide to check inside."
        << "As you open the door of the church you hear a loud noise coming from the back. Will you salvage some supplies and leave or check the noise? (leave/noise)" << endl;
    cin >> answer;
    system("CLS");
   if (answer == "leave"){
        leave();}
    if (answer == "noise");{
        noise();}
}
void noise()
{
    cout << "You walk to the back of the church and see a locked door. As you open the door a person jumps out at you. He starts attacking and biting you. Nobody is around" << endl;
    cout << "to hear you scream as the creature painfully ends your life" << endl;
    death();
    cin.get();
    return;
}
void rest()
{
 cout << "You sleep in the rubble for the night. As you try to sleep you hear weird sounds in the night. What happened to the world? Where is everyone? You" << endl << "ask yourself as you fall asleep." << endl;
 cout << " You awake in the morning and step outside. Only things are different. There is weird red mist in the air. You start walking down a street then suddenly, 3" << endl << "bright figures are falling from the sky. One of the figures starts falling" << endl << "towards you and you take a few steps back to avoid being hit." << endl;
 cout << "The object crashes into the ground. Once the dust clears up, you step up and" << endl << "observe the object. Something starts to move and a bright light is emitted. A" << endl << "goddess like figure emerges from a capsule. She looks straight at you and says 'You shouldn't be awake yet'. Everything starts to get very bright and then there is darkness." << endl;
 godnap();
 cin.get();
 return;
}
void godnap()
{
 cout << "You awake in an underground cave. A goddess is peacefully resting a few feet" << endl << "away. A magical sword is placed beside her. Will you pick up the sword and kill the goddess? or awaken her to speak?" << endl;
 cout << "(kill/talk)" << endl;
 cin >> answer;
 system("CLS");
 if (answer == "kill"){
    godclap();}
if (answer == "talk"){
    godconvo();}
}
void godclap()
{
  cout << "You pick up the sword and thrust it through the goddess. The light emitting from her turns from bright yellow to blood red. Suddenly you are not in a cave" << endl << "anymore, you are floating in space. The goddess who is now in a demon-like form, enrages, and is clearly not dead. She motions her arms towards you and your" << endl << "arms and legs are torn off. You manage to stay alive somehow but then the" << endl << "goddess disappears. You start to fall down and back onto earth. Your body is" << endl << "burnt up in the atmosphere." << endl;
    death();
  cin.get();
  return;
}
void godconvo()
{
    cout << "You awaken the goddess. 'How has a creature of the light awoken on its own?' she asks as you stare in confusion. 'One week ago, our race of intellectual super" << endl << "beings sent forth 6 terraforming capsules to earth. We had decided your species" << endl << "was overdue for mass extinction. These capsules were meant to reshape earth so" << endl << "that a new life form may rise. But we underestimated you. You're United Nations, as you call it, recognized the 6 capsules as threating objects and launched 6" << endl << "nuclear missiles into each capsule as they entered the atmosphere." << endl;
    cout << "The nuclear chemicals mixed with the terraforming capsules creating a" << endl << "supernova-like event. The explosion in the atmosphere rained hell on earth," << endl << "setting buildings on fire and causing catastrophic natural disasters. Our" << endl << "original thought was that the collision painfully killed all beings on earth," << endl << "but we were wrong. Days after the event, we spotted life, human, animal, and" << endl << "some new mutant creature. These creatures seemed to be just mutated forms of all original beings, only they were constantly enraged and carried an unknown" << endl << "energy trait. You," << name << ", are one of these mutated beings.'" << endl;
    cout << "You collapse to the floor in shock of everything you just heard. 'They sent 3 of us to observe the situation, that is why I am here. But I am most concerned" << endl << "with you. You manage to keep your sanity yet you posses the mutation. You have" << endl << "power within you and I am here to help you control it, and possibly fix the" << endl << "current situation of earth' she says." << endl;
    cout << "Will you train with the goddess? or leave on your own path? (train/leave)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "train"){
        train();}
    if (answer == "leave"){
        caveburst();}
}
void train()
{
    cout << "You decide to train with the goddess. 'Good, let's start right away, you have" << endl << "much to learn' she says as both of you teleport to the top of the empire state" << endl << "building. How is this building still standing? you ask. She explains 'The" << endl << "building was originally destroyed in the event. I created a simulation in your" << endl << "mind to help you focus.'" << endl;
    cout << "The goddess disappears but her voice can still be heard saying 'Use your power to climb down the building.' You try to focus  and emit anything that can help you, but nothing happens. Then out of frustration you kick the floor which causes your foot to create a red floating platform. You jump onto it and it starts moving down the side of the building. Suddenly the platform fades out of existence and you start falling. Will you free fall to the bottem or attempt to grip the side of the building?" << endl;
    cout << "(fall/building)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "fall"){
        fly();}
    if (answer == "building"){
        office();}
}
void fly()
{
    cout << "You push your arms to your sides, look straight down and fall. You don't know if you'll kill yourself or do some crazy space magic but at this point, you really don't care. You keep falling and falling. Right as you're about to hit the" << endl << "ground, your body stops. Blue aura is radiating out of you as you float a few" << endl << "feet above the ground. 'Well that's one way to do it, good job' you hear the" << endl << "goddess say as your mental simulation changes from desolate New York, to a" << endl << "calming beach." << endl;
    beach();
    cin.get();
    return;
}
void beach()
{
 cout << "Your lie down on the beach and attempt to take a nap. The goddess appears and" << endl << "throws you into the water. 'The world is in peril and you want to nap? Get" << endl << "yourself ready' she says as you walk out of the water soaking wet. You try to" << endl << "concentrate on drying yourself off but nothing happens. 'The next lesson is now. I'm going to thrust your body into the ocean. You are going to find a way out." << endl << "Good luck.' she says as she disappears. Your body starts to float over the water. Once you're a few miles out, you stop and are thrown deep into the ocean." << endl;
 cout << "You open your eyes and look around. You start to think how should you get out?" << endl << "Will you form an air bubble around yourself? Use your feet as thrusters and fly" << endl << "up? or casually swim to the top?" << endl;
 cout << "(bubble/thrust/swim)" << endl;
 cin >> answer;
 system("CLS");
 if (answer == "bubble"){
    drownd();}
if (answer == "thrust"){
    thrust();}
if (answer == "swim"){
    powerswim();}
}
void drownd()
{
    cout << "You fail at making an air bubble. Nice job, you're an idiot." << endl;
    death();
    cin.get();
    return;
}
void thrust()
{
    cout << "You feel your body moving towards the surface, but not because of your feet. A" << endl << "group of dolphins has noticed your struggles and lifts you to the surface. 'I" << endl << "don't know if you can speak to animals or if they just thought you were stupid," << endl << "but you're alive' The goddess says as you swim to shore." << endl;
    cout << "You have completed the training for this game!" << endl;
    endgame();
    cin.get();
    return;
}
void powerswim()
{
    cout << "You start moving your arms and legs in panic, when suddenly your body glows" << endl << "purple and you shoot through the water, into the air, and land on the beach." << endl << "'Good that's what i like to see, progress' The goddess says as you lay in the" << endl << "sun to dry." << endl;
    cout << "You have completed the training for this game!" << endl;
    endgame();
    cin.get();
    return;
}
void office()
{
 cout << "You try to reach for the side of the building as you fall. Your hand manages to" << endl << "scrape the side and as it does, your body glows green, thrusting you into the" << endl << "side, through the wall, and into a room of offices inside the building. You" << endl << "stand up in the room and the green aura disappears. From there, you take the" << endl << "stairs all the way to the bottom and are exhausted when you hit ground level." << endl << "'Not what I had in mind but i never gave specifics, next lesson' you hear the" << endl << "goddess say as you try to catch your breath." << endl;
 beach();
 cin.get();
 return;
}
void caveburst()
{
 cout << "No! you scream at the goddess. You decide that you won't join her on her mission and attempt to leave the cave. she tries to stop you but then your whole body" << endl << "emits black aura and you teleport out of the cave. You land in the center of" << endl << "Tokyo, Japan. Alone and confused." << endl;
 tokyo();
 cin.get();
 return;
}
void tokyo()
{
    cout << "You look around the area, and from the writing on some old signs, you realize" << endl << "you're in Tokyo. You start walking forward and stop when you notice a red laser" << endl << "on your chest. Five more lasers appear but you can't seem to tell where they are coming from. You start to think of options and notice a subway entrance, an open building, and a fire escape leading to a roof." << endl;
    cout << "Which will you run for? (subway, building, escape)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "escape"){
        cout << "You sprint towards the fire escape and jump onto the ladder. As you are climbing up, the lasers target your back and shots are taken at you. You fall off the" << endl << "ladder and onto the floor, full of bullets, and bleeding out." << endl;

        death();}
    if (answer == "building"){
        cout << "You sprint towards the opening in the building and hide behind some crates. You" << endl << "notice a staircase leading upstairs and downstairs. Which one will you take?" << endl << "(up/down)" << endl;
       cin >> answer;
       if (answer == "down"){
        cout << "You run down the stairs and enter a large, dark room. Your hand lights up and" << endl << "illuminates the room, but all you see is blood and guts. Filled with fear, you" << endl << "turn to run out of the room but a tall, black figure gets in your way. Its hand" << endl << "phases into your body and pulls out your beating heart." << endl;
        death();}
       if (answer == "up"){
        cout << "You run up the stairs all the way to the roof. You quietly open the door and" << endl << "notice that one of the shooters is up here. But he doesn't notice you. You find" << endl << "a gun on the floor and slowly walk up to the gunman. Will you push him to his" << endl << "death? or fire a bullet into his head? (push/shoot)" << endl;
        cin >> answer;
        system("CLS");
            if (answer == "push"){
                cout << "You walk up behind the gunman and grab his arm. As you startle him, he grabs on" << endl << "you and looses his footing. You both go falling off the roof." << endl;
                death();}
            if (answer == "shoot"){
                cout << "You point the gun, that you just found, at the gunman, and fire. The bullet" << endl << "spirals towards him, and just before it hits, time stops. Everything around you" << endl << "is frozen, but you can still move. Suddenly, your body turns green and you start fading away." << endl;
                greenscreen();}}}
    if (answer == "subway"){
        cout << "You sprint towards the subway entrance, and run down the stairs and to the" << endl << "loading station. Suddenly you hear a noise. The subway is still active somehow" << endl << "as it pulls up at your station. Realizing you have no other options, you get" << endl << "inside and it moves on, disappearing into darkness." << endl;
    germany();}
}
void greenscreen()
{
    cout << "To be continued in the next game." << endl;
    endgame();
    cin.get();
    return;
}
void germany()
{
    cout << "The subway takes you above ground, after a long trip, and stops in a random" << endl << "city. You walk outside and look around. As you look up to the roof tops, you" << endl << "spot a group of 4 men, all hooded and cloaked. They disappear as you spot them" << endl << "and suddenly, you are being chained down and dragged out of the city. Your cries forever lost." << endl;
    cout << "To be continued in the next game." << endl;
    endgame();
    cin.get();
    return;
}
void leave()
{
    cout << "You grab a backpack and a few cans of soup that were lying in the church and" << endl << "right as you start to leave, you spot a dead body in the corner of the room. You walk over to the body and notice a loaded pistol with a few extra mags on the" << endl << "floor. You pick up the gun and quickly run out of the church." << endl;
     cout << "As you burst through the door, you trip and fall outside. You look up to see a" << endl << "group of 4 people around you, 3 men and a women. One of the men points his gun" << endl << "at you,'Give me your name and a reason not to shoot you'" << endl;
    cout << "My name is " << name << ", I don't know what's going on! Please don't shoot me!" << endl;
    cout << "Tell ya what, we need the firepower, so i suggest you join us, otherwise you're gonna die out there. what's it gonna be? (join/alone)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "join"){
        groupstart();}
    if (answer == "alone"); {
        lonerider();}
}
void groupstart()
{
    cout << "You decide to join the group. The man helps you off the ground and says 'My name is Simon, that awkward fellow is jojo, that's Frank, and the lady is Kris." << endl << "welcome " << name << ", don't get yourself killed'" << endl;
    cout << "You follow the group. During your walk to the safe house, you pass by an alley" << endl << "and hear a loud bang! Will you continue to the safehouse, or stop the group and" << endl << "check the sound?" << endl;
    cout << "(safehouse/alley)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "safehouse") {
        safehouse(); }
    if (answer == "alley") {
        alley();}
}
void lonerider()
{
    cout << "You deny the group's offer, but before leaving, one of the men leaves an assault rifle on the floor next to you. 'Good luck' he says as they leave the area. You " << endl << "put the gun on your back and walk down a different road. As you continue, you" << endl << "encounter a mutant creature." << endl;
    cout << "Shoot it or walk up to it? (shoot/walk)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "shoot"){
        showdown(); }
    if (answer == "walk"){
        absorb(); }
}
void showdown()
{
    cout << "You take up an offensive stance, pull out your assault rifle, and fire 3 bullets into the creature. The first 2 appear to do nothing, but the third hits a mark" << endl << "on the creatures body. It starts screeching in pain and glowing red, then it" << endl << "runs towards you. The creature pounces on you." << endl;
    cout << "dodge it or attack? (dodge/attack)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "dodge"){
        dodge(); }
    if (answer == "attack"){
        gutshot(); }
}
void dodge()
{
    Health = 75;
    cout << "You try to get out of the creatures way but as you do, its arm hits your" << endl << "shoulder, causing immense pain but not breaking any skin." << endl;
    cout << "Health: " << Health << endl;
    cout << "The creature prepares to attack again. Do you wish to run away to get to safety? or attack the creature?" << endl;
    cout << "(run/attack)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "run"){
        run();}
    if (answer == "attack"){
        gutshot();}
}
void run()
{
    cout << "You turn and run down the street when suddenly, the group you ran into earlier" << endl << "cuts you off. One of them says 'Well since you're not capable of living, we'll" << endl << "take our gun back'. They snatch the gun from your hands, then break your leg so" << endl << "you can't run. The creature catches up to you and starts eating away at your" << endl << "body. Your are in too much pain to even scream." << endl;
    death();
    cin.get();
    return;
}
void gutshot()
{
    cout << "The creature pounces at you and right before it hits you, you grab its legs," << endl << "slam it into the ground. Then you throw it up, shove the barrel of your rifle" << endl << "into the mark on its back, and fire the rest of your clip. The creature is torn" << endl << "in half, blood splatters everywhere, and a smirk appears on your face. You" << endl << "continue walking down the street, ready to fire at anything." << endl;
    endgame();
    cin.get();
    return;
}
void absorb()
{
    cout << "You walk up to the creature to examine it. It doesn't seem to notice you. You" << endl << "get close enough to touch it and as soon as you do, your arm emits a white light that extends into the creature. the light begins to absorb the creature and" << endl << "after a few seconds, it's gone. You have absorbed the creature somehow. But your body feels exhausted and you begin to black out." << endl;
    cout << "While you are passed out, 3 bright figures fall down to earth. One lands next to you and a creature appears. It hovers over your body." << endl;
    godnap();
    cin.get();
    return;
}
void safehouse()
{
    cout << "You and the group reach the safehouse. There are huge walls put up and a gate to keep others out. Simon walks up to the gate and whistles a tune, must be a" << endl << "password. The gate is opened as you all walk inside. 'Ill take you to the boss'" << endl << "says Simon. You follow him into a building and approach someone in a chair." << endl << "Simon leaves as the chair turns around. The man in the chair stares into your" << endl << "eyes and screams 'He's one of them! Get him out of here' and a group of guards grab you" << endl << "outside and throw you outside the wall.'Walk away or we shoot' a guard says" << endl << "while pointing his gun at you. Out of anger you walk up to the gate and punch it. Your body starts to heat up, the guard says 'I warned you' and fires at your" << endl << "head. But the bullets bounce off. Red aura starts emitting from your body, your eyes turn" << endl << "black as you look up into the eyes of the guards. They start to disintegrate and turn to dust." << endl;
    cout << "Will you Destroy the gate? or unleash your hatred?" << endl;
    cout << "(gate/hate)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "gate"){
        gate();}
    if (answer == "hate"){
        overlord();}
}
void gate()
{
    cout << "You place both hands on the gate and it turns red, then burns away. Most of the" << endl << "survivors were waiting for you and have now opened fire, but none of the bullets do any damage. You place your hands on the ground and the red aura starts to" << endl << "cover the entire area. The survivors look confused as they don't know what's" << endl << "happening. You hold one hand out, and the aura turns black, consuming every" << endl << "living being in its path." << endl;
    endgame();
    cin.get();
    return;
}
void overlord()
{
    cout << "You start to float, and rise upwards over the safehouse. You gather red aura in" << endl << "your hand, which then starts to turn dark orange, and release it down below. The ground starts to shake as a hole forms and expands, swallowing the safehaven and its survivors. The building that the boss sits in is still standing. You pull" << endl << "him outside and lift him to your height. You then rip his neck open and drink" << endl << "his blood and as you do so, your eyes glow bright white. Your power has made you god-like and you ascend into space, searching for your fate." << endl;
    cout << "You have ascended past the boarders of the game. You have won...for now" << endl;
    endgame();
    cin.get();
    return;
}
void alley()
{
    cout << "'wait a second guys!' you say as you run towards the dark alley. You walk deep" << endl << "into the alley, holding your pistol out in front of you. Suddenly you sense" << endl << "something behind you and quickly turn and shoot your gun at what appears to be" << endl << "some weird mutant dog" << endl;
    cout << "The bullets phase through the creature and it starts running towards you with an instinct to kill. Jump above the trash cans in hopes to be out of reach? or run down the alley?" << endl;
    cout << "(jump/run)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "jump") {
        mutantdog();}
    if (answer == "run"){
        alleyrun();}
}
void mutantdog()
{
    cout << "You jump above a few trashcans and onto a huge dumpster, then look down at the" << endl << "creature and smile. Suddenly its feet start glowing blue and the creature" << endl << "manages to walk up the wall and reach you. Being in too much shock to move, you" << endl << "freeze in place as the creature pounces on you. Your screams are heard by the" << endl << "group who then proceed to run." << endl;
    death();
    cin.get();
    return;
}
void alleyrun()
{
    cout << " You run down the alley, picking up speed you didn't know you had." << endl << "You reach a fence and quickly jump onto the top bar of the fence. You somehow" << endl << "have complete" << endl << "balance on the bar and sprint across it. As this" << endl << "happens, you notice your feet are feeling stronger. The creature jumps onto the" << endl << "beam and follows you across." << endl;
    cout << " You start to think of alternative solutions and, out of instinct, jump off the" << endl << "bar and onto the wall of a building next to you. Your feet start glowing red but you're too scared to notice and you climb up the building and to the roof. The" << endl << "creature seems to have lost you and you pass out from exhaustion." << endl;
    safehouse1();
    cin.get();
    return;
}
void safehouse1()
{
    system("CLS");
    cout << "You awake tied to a pole at the safehaven. Simon walks up to you and says 'We" << endl << "saw what you did, you're one of them. I talked to the boss, he said to kill you" << endl << "or use you. what's it gonna be?" << endl;
    cout << "(kill/use)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "kill"){
        tokyo();}
    if (answer == "use"){
        grouptrain();}
}
void grouptrain()
{
    cout << "You agree to use your powers to help the survivors. Two men take you outside the walls of the camp. You walk up to an empty field and one of the men presses on a pressure plate. The ground below you starts to move as you take a few steps back. Suddenly there is a huge crater in the ground. You look down and it is filled" << endl << "with a few dozen mutant creatures. One of the men says 'you're only of use to us if you can control  your power' and he pushes you into the hole. You stumble to" << endl << "your feet and look around as all the mutants move towards you. " << endl;
    cout << "Will you raise your arms in a defensive position? Spread your arms out in hopes" << endl << "of triggering something? or raise your fists and fight?" << endl;
    cout << "(defense/arms/fight)" << endl;
    cin >> answer;
    system("CLS");
    if (answer == "defense"){
        cout << "You block a few of the attack but are overwhelmed as no power activates within" << endl << "you" << endl;
        death();}
    if (answer == "arms"){
        cout << "You stick your arms out in hopes of some laser shooting out but nothing happens" << endl << "and you are viciously mauled." << endl;
        death();}
    if (answer == "fight"){
        craterfight();}
}
void craterfight()
{
 cout << "You raise your fists and prepare for battle. Your hands start to glow blue as" << endl << "the mutants run towards you. The first one jumps at you and you punch right" << endl << "through it, sending blood and guts flying back. You take a step back, realizing" << endl << "what power you have, and charge the mutants." << endl << "The men from before" << endl << "approach the crater. They see you sitting on top of a pile of dismembered bodies. 'Well then, I guess we can use you.' one of them says as they pull you out of" << endl << "the crater. You walk into the camp, ready to train, ready to find your purpose." << endl;
    endgame();
    cin.get();
    return;
}
void death()
{
    cout << "You have been killed. Game Over" << endl;
    restart();
   cin.get();
   return;
}
void endgame()
{
 cout << "Congratulations on not dying a horrible death! Your chosen story is now over." << endl;
 restart();
 cin.get();
 return;
}
int main()
{
    cout << "This game requires you to input a choice given in parenthesis at certain points. Only those inputs are valid" << endl;
    cout << " " << endl;
    intro();
    cin.get();
    return 0;
}
  void intro()
  {
    cout << " " << endl;
    cout << "New Game, Welcome!" << endl;
    cout << "Enter character name: " << endl;
    cin >> name;
    cout << " " << endl;
    cout << "Health: " << Health << endl;
    cout << " " << endl;
   cout << "You awake covered in rubble. Slowly pushing it all off and standing up, you" << endl;
   cout <<  "realize you have no memory as to where you are or what happened. As you walk out of the destroyed building, you notice that the entire city has been destroyed. You look around for any survivors but the area seems to be desolate." << endl;

   start();
   cin.get();
   return;
  }
void restart()
{
    cout << "Enter 'restart' to start over." << endl;
    cin >> answer;
    system("CLS");
    if (answer == "restart"){
        intro();}
}
