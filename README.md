# Lab1
//ADMINISTRADOR
Usuario* admin= new Administrador("cristian","estructura",20,"cristian.nunez@alumnos.ucn.cl");

//NIÑOS
Usuario* n1= new Nino("Carlos","ucn",8);
Usuario* n2= new Nino("Eduardo","perro",12);
Usuario* n3= new Nino("vicente","patada",15);
Usuario* n4= new Nino("sossa","derrape",10);

//USUARIOS NORMALES
Usuario* normal1= new Normal("Maxi","simpson",21,"Maximpson@gmail.com");
Usuario* normal2= new Normal("Juan","JuaN123!",30,"juan.perez@email.com");
Usuario* normal3= new Normal("Maria","Mari@456",28,"maria.rodriguez@email.com");
Usuario* normal4= new Normal("Carlos","C@rlos789",35,"carlos.gonzalez@email.com");
Usuario* normal5= new Normal("Laura","L4ura#987",25,"laura.martinez@email.com");
Usuario* normal6= new Normal("Alejandro","Al3jandr0*",32,"alejandro.lopez@email.com");
Usuario* normal7= new Normal("Ana","An@2023",27,"ana.sanchez@email.com");
Usuario* normal8= new Normal("Sergio ","S3rgi0P@ss",40,"sergio.torres@email.com");
Usuario* normal9= new Normal("Andrea ","A#ndrea567",29,"andrea.ramirez@email.com");
Usuario* normal10= new Normal("David ","D@vid1234",33,"david.rodriguez@email.com");

//JUEGOS
Software* juego1=new Juego("Minecraft","notch","+18",18000,juegosGeneros[0]);
Software* juego2=new Juego("CyberSprint","Quantum","todas las edades",20000,juegosGeneros[0]);
Software* juego3=new Juego("Galactic","Starforge","todas las edades",15000,juegosGeneros[1]);
Software* juego4=new Juego("Mystic","Enchanted Realms Games","+18",12000,juegosGeneros[1]);
Software* juego5=new Juego("Ninja","Shadowstrike Studios","todas las edades",1000,juegosGeneros[2]);
Software* juego6=new Juego("Abyssal","Deepwater","todas las edades",30000,juegosGeneros[2]);
Software* juego7=new Juego("Timebenders","Temporal Nexus Games","todas las edades",19000,juegosGeneros[3]);
Software* juego8=new Juego("Pixels","RetroRevive Creations","todas las edades",18000,juegosGeneros[3]);
Software* juego9=new Juego("Elemental","Elemental Forge","todas las edades",5000,juegosGeneros[4]);
Software* juego10=new Juego("Skyborne","Cloudreach","todas las edades",18000,juegosGeneros[4]);
Software* juego11=new Juego("Forgotten","Lost Lore","todas las edades",18000,juegosGeneros[5]);
Software* juego12=new Juego("MechWarriors","MechTech","+18",25000,juegosGeneros[5]);
Software* juego13=new Juego("Dreamscape","Lucid Dreams","todas las edades",58000,juegosGeneros[6]);
Software* juego14=new Juego("Steampunk","Gearworks","todas las edades",13000,juegosGeneros[6]);
Software* juego15=new Juego("Shadowrunners","Midnight Syndicate","todas las edades",14000,juegosGeneros[7]);
Software* juego16=new Juego("Arcane","Mysticalchemy","+18",16000,juegosGeneros[7]);
Software* juego17=new Juego("Abyss","Abyssal Dominion Games","todas las edades",18000,juegosGeneros[8]);
Software* juego18=new Juego("BioTech","Genetix Innovations","todas las edades",8000,juegosGeneros[8]);
Software* juego19=new Juego("Drakoria","Dragonforge","todas las edades",10000,juegosGeneros[9]);
Software* juego20=new Juego("Alien","Extraterrestrial Games","+18",180000,juegosGeneros[9]);

//OFIMATICA
Software* of1=new Ofimatica("Excel","Oficce","todas las edades",2000,3);
Software* of2=new Ofimatica("PowerPoint","Oficce","todas las edades",5000,5);
Software* of3=new Ofimatica("OneNote","Oficce","todas las edades",10000,1);
Software* of4=new Ofimatica("Word","Oficce","todas las edades",2000,4);
Software* of5=new Ofimatica("Acces","Oficce","todas las edades",1000,7);

//PRODUCCION
Software* p1= new Produccion("Adobe","Adobe","+18",8000,"Video");
Software* p2= new Produccion("Avid","Avid Technology","+18",5000,"Video");
Software* p3= new Produccion("ProTools","Digidesign","+18",12000,"grabacion");
Software* p4= new Produccion("Autodesk","Autodesk","+18",8000,"Modelado 3D");

//NAVEGADOR
Software* nav1= new Navegador("Opera","Opera Software", "todas las edades",0,"Google","YouTube","Facebook","Amazon","Wikipedia","Twitter","Instagram","Netflix","LinkedIn","Yahoo");
Software* nav2= new Navegador("Chrome","Google", "todas las edades",0,"YouTube","Facebook","Amazon","Google","Instagram","Wikipedia","Twitter","Netflix","LinkedIn","Yahoo");

//SEGURIDAD
Software* seg1= new Seguridad("Defender","Microsoft ", "todas las edades",4000,seguridadGeneros[0]);
Software* seg2= new Seguridad("Norton","NortonLifeLock ", "todas las edades",5000,seguridadGeneros[1]);
Software* seg3= new Seguridad("McAfee","McAfee ", "todas las edades",2000,seguridadGeneros[2]);
Software* seg4= new Seguridad("Kaspersky","Kaspersky  ", "todas las edades",6000,seguridadGeneros[3]);
Software* seg5= new Seguridad("Bitdefender","Bitdefender ", "todas las edades",4000,seguridadGeneros[4]);
Software* seg6= new Seguridad("Avast","Avast", "todas las edades",9000,seguridadGeneros[5]);

//SOCIAL
Software* social1= new Social("Facebook", "mark", "todas las edades",0);
Software* social2= new Social("Tinder", "yo", "+18",0);
