# TCTD-Pump
Files for the Infusion Pump Prototype created at TCTD

<b>Downloading Libraries:</b>
1) AccelStepper Library - Sketch --> Include Library --> Manage Library --> Search "AccelStepper" --> Install

<b>Working with CAD:</b>
The casing was created on Fusion 360. It is made up of 4 bodies - Left casing, right casing, stepper motor and shaft. The latter two are just there for referencing purposes and aren't supposed to be printed. The uploaded files are in 2 formats, .f3d for fusion and .step to open in solidworks. 

<b>Printing the Casing:</b>
ABS was used in order to print the two halves of the design, it is the recommened material due to its strength but PET-G can be explored too. Linear or Tree supports would be needed in order to print. Infill of 20-30% is sufficient. Rest settings were kept as default in the slicer.
Use Flashprint for printing in Flashforge and use Cura for other printers. 

<b>Assembly:</b>
<b>Making the Camshaft:</b>
The camshaft comprises of a rod with a 6mm diameter and 10 circular acrylic cams of a 6mm thickness (change according to casing). The .dxf files for the cams is attached. The cams are circular with an eccentric circular hole where the shaft would fit. The placement of the hole (distance from centre) will determine how big or small the wave will be. If too close to centre, the wave would be small, and vice versa. The cams also have an additional marking to signify the angle difference between 2 consecutive cams. Each cam is rotated by 40 degrees while placing so that when 10 cams are places, the first and last are in phase. 
While laser cutting the cams, make an engraving in the small additional marking, and cut the rest 2 circles. For assembly, insert the 10 cams in the shaft, make sure that they are at the 40 degree offset using the engraving reference, and then use chlorofoam to stick them.

<img src="https://user-images.githubusercontent.com/24414678/189589895-688c5311-7beb-4792-b372-eb4b0affb708.png" width="400">         <img src="https://user-images.githubusercontent.com/24414678/189589966-d29c4af0-81ef-47f1-8f1d-efcac967869d.png" height = "370">

<b>Cam Followers: </b>
The cams in the camshaft go inside cam followers, the part that pushes the tube to make the flow possible. The cam followers are also laser cut pieces of acrylic. No engraving is needed for this piece. The thickness of each cam should be 3mm (spacing given in the casing). The slot shape cut in the cam follower is according to the movement of the camshaft. the vertical height is the diameter of one cam, and the horizontal distance is the maximum horizontal displacement by a cam during one rotation. 

<b>With Casing:</b>
Once everything is printed and laser cut, put the cam followers inside the camshaft, piece by piece till the 10 cams have their 10 respective followers.

<img src="https://user-images.githubusercontent.com/24414678/189591664-75b767f0-efa2-4446-b4b7-3fb9e36aca94.png" width = "400">

Then put the cam followers in one half of the casing in their respective slots. Make sure each cam follower is free to move vertically. Put the upper half of the casing and insert the cam followers on the other side of slots. Check if they create the waveform when the shaft is rotated. If not, the cam followers aren't perfectly fit in their slots. 
Once that is achieved, use M3 screws to fasten the two halves. 

<img src= "https://user-images.githubusercontent.com/24414678/189592749-636e21a2-2840-492d-9f83-7fcab8be20b0.png" width="400">

Connect the hinge with the 3 screws on one of the halves with the provision provided. Fasten another acrylic block with the other side of the hinge which will act as the door which the tube will press against. Create a sliding lock by taking a 12mm acrylic block and milling it in the middle vertically.

<img src="https://user-images.githubusercontent.com/24414678/189592564-488afa43-d034-4ba3-899f-a1477000ba7f.png" width="400">

<b>Connecting the stepper motor:</b>
Take a coupler which attaches the camshaft on one side and the shaft of the stepper motor on the other side and connect the two. Using 4 m3 screws, connect the casing to the stepper motor.

<img src="https://user-images.githubusercontent.com/24414678/189592842-cda25b64-9fc2-442a-8cff-3dda812fe57d.png" width="400">

<b>Using:</b>
Insert the tube inside the bubble sensor firmly. Insert the remaining tube between the two clamps on the casing and close the door mechanism to press it against the cam followers. 
