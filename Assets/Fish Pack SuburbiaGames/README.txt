--------------------------------
ASSET:   Fish Pack SuburbiaGames
AUTHOR:   Suburbia Games
VERSION: 1.0
EMAIL:   hello@suburbiagames.com
--------------------------------
INTRODUCTION:

First of all we want to appreciate that you have purchased our package from the Unity Asset Store. We hope
you find it useful and if you have any problems with this package you can contact us through the email that
you'll find it in the first lines of this file.

----------------------------------------------------------------
PURPOSE OF THIS PACK:

Our purpose when we did this package was make available the behavior of a fish. In addition, we add an animated
model if you don't have anyone.

Also we add 5 different textures, however the model has its own UV done, if you want to create your own texture.

Everything is meant for you to simply drag the prefab of the fish to your scene.

The behavior of the fish has been coded to be used for quiet and relaxed scenes, like a pond. Also you can use
it in rivers or the sea.

Each fish has an individual behavior. Doesn't take into account the movement of another fishes to make its own movement. 

----------------------------------------------------------------
WHAT YOU CAN FIND IN THE PACKAGE:

- The behavior of the fish scripted in C#.
- A fish model (Faces: 745, Tris: 1.484) with its own UV done, so you can add your own texture if you want.
- 5 different textures with a cartoon style.
- Basic scene with a simply pond and some configured fishes, so you can see in movement.

You can use all the elements together or separate in your own scenes, models, animations or textures.

----------------------------------------------------------------
FOLDER STRUCTURE:

The pack consists of the following folder structure:

/Example: contains a predefined scene with a lowpoly simply pond and some configured fishes.
/Models: contains the modeled fish, the textures and the materials.
/Prefabs: contains the prefabs of all fishes. To add a fish in you scene, drag one of the prefabs in the scenario.
/Scripts: contains the file with the behavior of the fishes. The code of the file has been coded in C#.

----------------------------------------------------------------
GUIDE TO USING THE PACK:

1. Drag one of the prefabs that you can find inside of the 'Prefabs' folder to your scene.
2. Select the fish object of your scene and in the 'Inspector' window configure the fish in the following way:
      - The 'Transform' component you can change the measurement of the fish modifying the 'Scale' value. Remember that
        the X, Y, and Z fields must have the same value.
      - The 'Fish movement' component you can configure the behavior of the fish.
            - Max velocity: is the maximum speed the fish can reach.
            - Movement probability: is the probability that the fish will move in each iteration.
            - Rotation probability: is the probability that the fish will rotate in each iteration.
            - Max Top Position: is the maximum position on the Y axis that the fish can reach. Use this variable to mark
                                the water limit.
            - Min Distance Bottom: is the minimum distance that the fish must maintain with the bottom of the water. Use
                                   this variable to control the depth at which the fish should move.

----------------------------------------------------------------
