// # Kids-Learning-Center
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int user,e,age;
    string name;
    cout<<"__________________________ELIGIBLITY CHECK__________________________\n\n"<<endl;
    cout<<"Tell us who you are?\n";
    do {
	getline (cin,name);
    if (name >= "a" && name <= "z" || name >= "A" && name <= "Z"  || name >= "z" || name >= "Z" )
    {
    cout<<endl<<name<<" what is your age?"<<endl;
    cin>>age;
    if (age < 18  && age > 0 )
    {
	cout<<"\n!_____________>>>WELCOME "<<name<<" TO THE KIDS LEARNING CENTER<<<_____________!"<<endl;
    
	cout<<"\nHi "<<name<<" We Are Here To Help You!!!\n\n\n"<<endl;
	do{
	cout<<"Type 1 to STUDY\nType 2 For MCQs Section\nType 3 to get help from MATHEMATICS\nType 4 to Play ROCK, PAPER, SCISSORS\nType 5 to EXIT!"<<endl;
    cin>>user;
    double a,b,c,d;
    
    switch (user)  
{
	case 1 :
		cout<<"                                                   LET's STUDY                                                   \n"<<endl;
		int study,science,computer;
		cout<<"\nSELECT 1 for Physics\nSELECT 2 for Chemistry\nSELECT 3 for Biology\nSELECT 4 for Computer Science\nSELECT 5 To Go Back"<<endl;
		cin>>study;
		switch(study)
	 { 
		
		case 1:
	 		{
			 cout<<"!__________________________________>>>PHYSICS<<<____________________________________!\n\n"<<endl;
			 
			cout<<"the branch of science concerned with the nature and properties of matter and energy. The subject matter of physics includes mechanics, heat, light and other radiation, sound, electricity, magnetism, and the structure of atoms."<<endl;
	 		cout<<"\n\nBRANCHES OF PHYSICS\nSELECT 1 FOR THERMODYNAMIC\nSELECT 2 Quantum mechanics\nSELECT 3 Nuclear physics\nSELECT 4 Optics\nSELECT 5 Electromagnetism\nSELECT 6 Mechanics\nSELECT 7 Geophysics\nSELECT 8 Atomic physics\nSELECT 9 To Go Back"<<endl;
	 		cin>>science;
	 			
				 switch(science)
		 				{ 
		 		case 1:
		 			{ cout<<"THERMODYNAMIC"<<endl;
		 			  cout<<"Thermodynamics is a branch of physics that deals with heat, work, and temperature, and their relation to energy, entropy, and the physical properties of matter and radiation."<<endl;
		 			 
					 } 
					 break;
				case 2:
					{ cout<<"Quantum mechanics"<<endl;
					   cout<<"It deals with the small particles and their behavior, such as neutrons, protons, and electrons."<<endl;
					  
					 
					}
					break;
				case 3:
					{ 
					cout<<"Nuclear physics"<<endl;
					cout<<"Nuclear physics is the field of physics that studies atomic nuclei and their constituents and interactions, in addition to the study of other forms of nuclear matter."<<endl;
						
					} 
					break;
				case 4:
					{ 
					  	cout<<"Optics"<<endl;
					  		cout<<"Optics is the branch of physics that studies the behaviour and properties of light, including its interactions with matter and the construction of instruments that use or detect it."<<endl;
					}
					break;
				case 5:
					 { 
					   cout<<"Electromagnetism"<<endl;
					   cout<<"Electromagnetism is a branch of physics involving the study of the electromagnetic force, a type of physical interaction that occurs between electrically charged particles."<<endl;
					 
					 }
					 break;
				case 6:
					 { 
					  cout<<"Mechanics"<<endl;
					  cout<<"Mechanics is the area of mathematics and physics concerned with the relationships between force, matter, and motion among physical objects"<<endl;
					 }
					  break;
				case 7:
					{ 
					cout<<"Geophysics"<<endl;
					cout<<"Geophysics is a subject of natural science concerned with the physical processes and physical properties of the Earth and its surrounding space environment, and the use of quantitative methods for their analysis."<<endl;
					}
					break;
				case 8:
					{ 
					cout<<"Atomic physics"<<endl;
					cout<<"Atomic physics is the field of physics that studies atoms as an isolated system of electrons and an atomic nucleus. Atomic physics typically refers to the study of atomic structure and the interaction between atoms."<<endl;
					}
					break;
			default: 
			break;
				
			 }
			 break;
		 }
		 
		 case 2:
		 	
			 
	 		cout<<"!__________________________________>>>CHEMISTRY<<<____________________________________!\n\n"<<endl;
	 		
	 		cout<<"the branch of science concerned with the substances of which matter is composed, the investigation of their properties and reactions, and the use of such reactions to form new substances.";
	 		cout<<"\n\nBRANCHES OF CHEMISTY"<<endl;
	 		cout<<"SELECT 1 FOR Organic chemistry"<<endl;
	 		cout<<"SELECT 2 FOR Analytical chemistry "<<endl;
	 		cout<<"SELECT 3 FOR Biochemistry "<<endl;
	 		cout<<"SELECT 4 FOR Inorganic chemistry\nSELECT 5 To Go Back "<<endl;
	 		cin>>science;
	 		switch(science)
	 		{ 
	 		  case 1:
	 		  	     { 
	 		  	     cout<<" Organic chemistry "<<endl;
	 		  	     cout<<"Organic chemistry is a subdiscipline within chemistry involving the scientific study of the structure, properties, and reactions of organic compounds and organic materials, i.e., matter in its various forms that contain carbon atoms."<<endl;
						}
						break;
				case 2:
					{ 
					 cout<<"Analytical chemistry"<<endl;
					 cout<<"Analytical chemistry studies and uses instruments and methods to separate, identify, and quantify matter. In practice, separation, identification or quantification may constitute the entire analysis or be combined with another method. Separation isolates analytes."<<endl;
					}
					break;
				case 3:
					{ 
					cout<<"Biochemistry"<<endl;
					cout<<"Biochemistry or biological chemistry is the study of chemical processes within and relating to living organisms. A sub-discipline of both chemistry and biology, biochemistry may be divided into three fields: structural biology, enzymology and metabolism."<<endl;
					}
					break;
				case 4:
					{ 
					cout<<"Inorganic chemistry"<<endl;
					cout<<"Inorganic chemistry deals with synthesis and behavior of inorganic and organometallic compounds."<<endl;
					}
					break;
				default: 
				break;
			 }
			 break;
		 
		case 3:
		 	{
			 
	 		cout<<"!__________________________________>>>BIOLOGY<<<____________________________________!\n\n"<<endl;
	 		cout<<"the study of living organisms, divided into many specialized fields that cover their morphology, physiology, anatomy, behaviour, origin, and distribution."<<endl;
	 		cout<<"\n\nBRANCHES OF BIOLOGY"<<endl;
	 		cout<<"SELECT 1 FOR Anatomy "<<endl;
	 		cout<<"SELECT 2 FOR Botany "<<endl;
	 		cout<<"SELECT 3 FOR Zoology\nSELECT 4 To Go Back "<<endl;
	 		cin>>science;
	 		switch(science)
	 		{ 
	 		 case 1:
	 		 	{ 
	 		 	cout<<"Anatomy"<<endl;
	 		    cout<<"Anatomy is the branch of biology concerned with the study of the structure of organisms and their parts. Anatomy is a branch of natural science that deals with the structural organization of living things. It is an old science, having its beginnings in prehistoric times."<<endl;
				  }
				  break;
			case 2:
				{ 
				 cout<<"Botany"<<endl;
				 cout<<"Botany, also called plant science, plant biology or phytology, is the science of plant life and a branch of biology. A botanist, plant scientist or phytologist is a scientist who specialises in this field."<<endl;
				}
				break;
			case 3:
				 { 
				  cout<<"Zoology"<<endl;
				  cout<<"Zoology is the branch of biology that studies the animal kingdom, including the structure, embryology, evolution, classification, habits, and distribution of all animals, both living and extinct, and how they interact with their ecosystems"<<endl;
				 }
				 break;
				 default: 
					break;
	 		 
			 }
			 break;
			
	 	}
	   break;
	 
	   case 4:
	 	{
	 		cout<<"!__________________________________>>>COMPUTER<<<____________________________________!\n\n"<<endl;
	 		cout<<"\n\nComputer is a digital electronic machine that can be programmed to carry out sequences of arithmetic or logical operations automatically."
			"\nModern computers can perform generic sets of operations known as programs. These programs enable computers to perform a wide range of tasks.\nThere are two main Components of Computer. Software and Hardware";
	 		cout<<"\n\nSELECT 1 for Software"<<endl;
	 		cout<<"SELECT 2 for Hardware\nSELECT 3 To Go Back"<<endl;
	 		cin>>computer;
	 		switch(computer)
	 		{ 
	 		 case 1:
	 		 	{ 
	 		 	cout<<"SOFTWARE"<<endl;
	 		 	
	 		 	cout<<"Software is a set of instructions, data or programs used to operate computers and execute specific tasks.";
	 		 	cout<<"\n\nTHREE MAIN TYPES OF SOFTWARE "<<endl;
	 		 	cout<<"select 1 for  System Software "<<endl;
	 	    	cout<<"select 2 for  Utility Software "<<endl;
	 	    	cout<<"select 3 for  Application Software\nSELECT 5 To Go Back "<<endl;
	 	    	cin>>computer;
	 	    	switch(computer)
	 	    	{ 
	 	    	 case 1:
	 	    	 	 { 
	 	    	 	  cout<<"system software"<<endl;
	 	    	      cout<<"System software is software designed to provide a platform for other software. Examples of system software include operating systems like macOS, Linux, Android and Microsoft Windows, computational science software, game engines, search engines, industrial automation, and software as a service applications."<<endl;
	 	    	 	  
					   }
					    break;
				case 2:
					{ 
					 cout<<"utility software"<<endl;
					 cout<<"Utility software is software designed to help analyze, configure, optimize or maintain a computer. It is used to support the computer infrastructure - in contrast to application software, which is aimed at directly performing tasks that benefit ordinary users."<<endl;
					}
					break;
				case 3:
					 { 
					  cout<<"application software"<<endl;
					  cout<<"application software is a computer program designed to carry out a specific task other than one relating to the operation of the computer itself, typically to be used by end-users. Word processors, media players, and accounting software are examples."<<endl;
					 }
					 break;
					 default: 
					 break;
	 	    	  
				 }
				  break;
				  }
				  break;
			case 2:
				{ 
				cout<<"HARDWARE"<<endl;
				
				cout<<"The computer's tangible components or delivery systems that store and run the written instructions provided by the software. "<<endl;
				cout<<"\n\nTWO TYPES OF HARDWARES "<<endl;
				cout<<"SELECT 1 FOR INTERNAL HARDWARE"<<endl;
				cout<<"SELECT 2 FOR EXTERNAL HARDWARE\nSELECT 3 To Go Back"<<endl;
				cin>>computer;
				switch(computer)
				{ 
				 case 1:
				 	{ 
				 	 cout<<"INTERNAL HARDWARE:the hardware inside the computer or is a device that is installed within the computer."<<endl;
				 	 cout<<"The internal hardware components are:Motherboard,Processor,RAM,Hard Disk Drive,CD-ROM Drive,Power supply,Power cable,Fan,Graphics Card,Solid State Drives"<<endl;
					 }
					 break;
				case 2:
					{ 
					  cout<<"EXTERNAL HARDWARE: those items that are often externally connected to the computer to control either input or output functions. "<<endl;
					  cout<<"Example of external hardware are keyboard, mouse, trackpad (or touchpad), touchscreen, joystick, microphone, light pen, webcam, speech input, etc."<<endl;
					}
					break; 
					default: 
					break;	 
				}
				
				}
				break;
			    default: 
				break;	  
			 }
		}
				break;
				default :
				break;
	}
	break;
	
	case 2 :
	int subjects,x,y,z;
	cout<<"\n                                                MCQs                                                \n"<<endl;
				cout<<"\n\nEnter 1 for ENGLISH\nEnter 2 for MATH\nEnter 3 for Science\nEnter 4 for Computer\nEnter 5 To go back"<<endl;
	cin>>subjects;
	switch (subjects)
	{
		case 1:	
				cout<<"!____________________________________>>>ENGLISH<<<____________________________________!\n";
				cout<<"\n\nTEST STARTED!\n\n"<<endl;
				cout<<"Qno1: Which one is vowel?\n1: K\n2: L\n3: M\n4: O"<<endl;
				cin>>x;
				if(x == 4)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 4))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno2: Identify noun in the following sentence: I live in germany. \n1: I\n2: live\n3: in\n4: germany."<<endl;
				cin>>x;
				if(x == 4)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 4))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno3: Identify pronoun in the following sentence: They were having dinner.\n1. They\n2. were \n3. having \n4. dinner"<<endl;
				cin>>x;
				if(x == 1)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 2)&&(x <= 5) && (x != 1))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno4: Identify verb in the following sentence: The monkey sat by the door..\n 1. The \n 2. Monkey \n 3. sat \n 4. by \n 5. door"<<endl;
				cin>>x;
				if(x == 3)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 3))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno5: Identify adverb in the following sentence: Marcus always arrives early. \n1. arrives \n2. always \n3. early \n4. Marcus"<<endl;
				cin>>x;
				if(x == 2)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 2))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Your MCQs Score: "<<z<<endl;
				
		break;
		
		case 2:
				cout<<"!____________________________________>>>MATH<<<____________________________________!\n";
				cout<<"\n\nTEST STARTED!\n\n"<<endl;
				cout<<"Qno1: What number follows 5? \n1. 3 \n2. 7 \n3. 5 \n4. 6"<<endl;
				cin>>x;
				if(x == 4)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 4))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno2: The answer of 2+2 = ? \n1. 3 \n2. 4 \n3. 7 \n4. 9"<<endl;
				cin>>x;
				if(x == 2)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 2))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno3: The answer of 2x5 = ? \n1. 5 \n2. 4 \n3. 11 \n4. 10"<<endl;
				cin>>x;
				if(x == 4)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 4))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno4: The answer of 34-2= ? \n1. 30 \n2. 40 \n3. 32 \n4. 19"<<endl;
				cin>>x;
				if(x == 3)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 3))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno5: Which number is greater 12,34,56 \n1. 12 \n2. 34 \n3. 56 "<<endl;
				cin>>x;
				if(x == 3)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 3))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Your MCQs Score: "<<z<<endl;
				
		break;
		
		case 3:
				cout<<"!____________________________________>>>SCIENCE<<<____________________________________!\n";
				cout<<"\n\nTEST STARTED!\n\n"<<endl;
				cout<<"Qno1: Which animal never drinks water? \n1. Kangaroo \n2. Hippopotamus \n3. Rat \n 4. Kangaroo Rat"<<endl;
				cin>>x;
				if(x == 4)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 4))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno2: The SI Unit of Speed is:? \n1. M/S \n2. Cm/kg \n3. Km/H \n4. none"<<endl;
				cin>>x;
				if(x == 4)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 4))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno3: The Largest Cell is? \n1. Nerve Cell \n2. Ovum \n3. The egg of an Ostrich \n4. none"<<endl;
				cin>>x;
				if(x == 3)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 3))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno4: How many planets are there in our solar system? \n1. 4 \n2. 9 \n3. 8 \n4. 10 "<<endl;
				cin>>x;
				if(x == 3)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 3))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno5: The Center of Atom is called? \n1. nucleus \n2. proton \n3. electron \n4. none"<<endl;
				cin>>x;
				if(x == 1)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x > 1)&&(x <= 5) && (x != 1))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Your MCQs Score: "<<z<<endl;
				
		break;
		
		case 4:
				cout<<"!____________________________________>>>COMPUTER<<<____________________________________!\n";
				cout<<"\n\nTEST STARTED!\n\n"<<endl;
				cout<<"Qno1: What is the brain of a computer system called? \n1. RAM \n2. CPU \n3. ROM \n4. GPU"<<endl;
				cin>>x;
				if(x == 2)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 2))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno2: What does ALU stand for in the context of computer? \n1. Array logic unit \n2. Application logic unit \n3. Arithematic logic unit \n4. Automatic logic unit"<<endl;
				cin>>x;
				if(x == 3)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 3))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno3: What is the role of computer port? \n1. Downloading file \n2. communicating with computer peripherals \n3. Linking to computer cpu \n4. none"<<endl;
				cin>>x;
				if(x == 2)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 2))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno4: What is known as temporary memory or volatile memory ? \n1. SSD \n2. HDD \n3. ROM \n4. RAM"<<endl;
				cin>>x;
				if(x == 4)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 4))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Qno5: Who is known as father of computer? \n1. Bill Gates \n2. James Gostling \n3. Charles Babbage \n4. Dennis Ritchie"<<endl;
				cin>>x;
				if(x == 3)
				{
					cout<<"Correct Answer!\n"<<endl;
					z++;
				}
				else if ((x >= 1)&&(x <= 5) && (x != 3))
				{
					cout<<"Incorrect Answer!\n"<<endl;
				}
				else
				{
					cout<<"INVALID INPUT!\n"<<endl;
				}
				cout<<"Your MCQs Score: "<<z<<endl;
		break;
		
		default :
		break;	
	}
	break;
	
    case 3 :
    	cout<<"\n                                                   MATH's WORLD!                                                    \n"<<endl;
    	cout<<"\n\nWhat is Math?\n\nMathematics is an area of knowledge that includes such topics as numbers, formulas and related structures, shapes and the spaces in which they are contained," 
		"and quantities and their changes.\nMost mathematical activity involves the discovery of properties of abstract objects and the use of pure reason to prove them.\n"
		"\nSelect 1 for MULTIPLICATION TABLE\nSelect 2 to use CALCULATOR\nSelect 3 to know BASIC FORMULAS\nSelect 4 To Go Back"<<endl; 
		cin>>e;
    	switch (e)
    	{
    	case 1 :
    		cout<<"!____________________________________>>>TABLES<<<____________________________________!\n";
    		cout<<"\n\nWhat are Mathermatical tables?\nMathematical tables are lists of numbers showing the results of a calculation with varying arguments.";
			cout<<"\n\nEnter Number: ";
			cin>>a;
			c = a;
			for(b = 1; b<=10;b++)
			{
				cout<<c<<" x "<<b<<" = "<<a*b<<endl;
			}
		break;
		
		case 2 :
			cout<<"!__________________________________>>>CALCULATOR<<<____________________________________!\n\n";
	 		char c;
			cout<<"Enter Number 1: ";
			cin>>a;
			cout<<"Enter Number 2: ";
			cin>>b;
			cout<<"Type Operator!\n* To do Multiplication of given numbers\n+ To do Addition of given Numbers\n/ To do Division of given numbers\n- To do Subtraction of given numbers"<<endl;
			cin>>c;
				switch (c)
				{
					case '+':
					cout<<"Addition of two Numbers is: "<<a+b;
					break;
					case '-':
					cout<<"Subtraction of two Numbers is: "<<a-b;
					break;
					case '*':
					cout<<"Multiplication of two Numbers is: "<<a*b;
					break;
					case '/':
					cout<<"Division of two Numbers is: "<<a/b;
					break;
					default:
					cout<<"Incorrect Operator Entered!";
				}
		break;
		
		case 3 :
			cout<<"!__________________________________>>>FORMULAS<<<____________________________________!\n";
			cout<<"\n\nWhat is Formula in Math?\nThe formula is a fact or a rule written with mathematical symbols."
			" It usually connects two or more quantities with an equal sign.\nWhen you know the value of one quantity, you can find the value of the other using the formula."<<endl;
		
			cout<<"\n\n1) Average Formula: Sum of values / Number of Terms\n   Example: (10 + 12 + 14 + 16) / 4 = 13"<<endl;
			cout<<"\n2) Quadratic Formula: x = -b +(or)- vb*vb-4ac/2a"<<endl;
			cout<<"\n3) Distance Formula: d=v(x1 – x2)*(x1 -x2) + (y1 – y2)*(y1 - y2)"<<endl;
			cout<<"\n4) (a+b) Whole Square Formula = a(a) + b(b) + 2 (a) (b)"<<endl;
			cout<<"\n5) (a-b) Whole Square Formula = a(a) + b(b) - 2 (a) (b)"<<endl;
			cout<<"\n6) (a+b) Cube Formula = a(a)(a) + b(b)(b) + 3 (a) (b) (a+b)"<<endl;
			cout<<"\n7) (a-b) Cube Formula = a(a)(a) + b(b)(b) - 3 (a) (b) (a+b)"<<endl;
			cout<<"\n8) (a+b+c) Whole Square Formula = a(a) + b(b) + c(c) + 2 (a) (b) + 2 (b) (c) + 2 (a) (c)"<<endl;
			
		break;
	}

    break;
    
		
	case 4 :
		cout<<"                                                   ROCK, PAPER, SCISSORS                                                   \n\n";
		
    		int player,player2;
    		string name2;
    		cout << "Hello Players, and welcome to Rock, Paper, Scissors!\nRules of the game are: \n\n1) Rock beats scissors\n2) Scissors beats paper\n3) Paper beats rock.\n";
    		cout<<"\nPlayer 2 Please Enter your name: "; cin>> name2;
    		if (name2 >= "a" && name2 <= "z" || name2 >= "A" && name2 <= "Z" || name >= "z" || name >= "Z" )
    		{cout <<"\n"<<name<<" Please make your choice: \n\nPick 0 for rock, 1 for paper and 2 for scissors." << endl;
    		cin >> player;
			cout <<name2<<" Please make your choice: \n\nPick 0 for rock, 1 for paper and 2 for scissors." << endl;
    		cin >> player2;
    		
			switch(player2)
			{
        case 0:
            if (player == 0)
            {
                cout << "\n"<<name<<" picked rock, and the "<<name2<<" picked rock. The game is tied!\n";
            }
            else if (player == 1)
            {
                cout << "\n"<<name<<" picked paper, and the "<<name2<<" picked rock. "<<name<<" wins!\n";
            }
            else if (player == 2)
            {
                cout << "\n"<<name<<" picked scissors, and the "<<name2<<" picked rock. "<<name2<<" wins!\n";
            }
            break;
        case 1:
            if (player == 0)
            {
                cout << "\n"<<name<<" picked rock, and the "<<name2<<" picked paper. "<<name2<<" wins!\n";
            }
            else if (player == 1)
            {
                cout << "\n"<<name<<" picked paper, and the "<<name2<<" picked paper. The game is tied!\n";
            }
            else if (player == 2)
            {
                cout << "\n"<<name<<" picked scissors, and the "<<name2<<" picked paper. "<<name<<" wins!\n";
            }
            break;
        case 2:
            if (player == 0)
            {
                cout << "\n"<<name<<" picked rock, and the "<<name2<<" picked scissors. "<<name<<" wins!\n";
            }
            else if (player == 1)
            {
                cout << "\n"<<name<<" picked paper, and the "<<name2<<" picked scissors. "<<name2<<" wins!\n";
            }
            else if (player == 2)
            {
                cout << "\n"<<name<<" picked scissors, and the "<<name2<<" picked scissors. The game is tied!\n";
            }
            break;
        default:
            cout << "Invalid number, try again" << endl;
            break;
}
}
		else 
		cout<<"Player 2's wrong Name Entered!";
		break;	
}
	if (user != 5)
	{
	cout<<"\n\n\nWelcome Back "<<name<<" !!!\n\n"<<endl;
	}
} 
	
	while (user != 5);
}
    else if (age > 17 && age < 110)
    {cout<<"Sorry "<<name<<" your age is not eligible for KIDS LEARNING CENTER!";}
    else
    cout<<"Wrong input!!!";
    break;

}

    cout<<"Wrong Name Entered, Enter your name again!"<<endl;
}
	while (true);
	
	cout<<"\nExiting...    Good Bye!";
   
   return 0;
}