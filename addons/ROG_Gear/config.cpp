#include "basicdefines_A3.hpp"
#define ARMOR_NIJ_1	8
#define ARMOR_NIJ_2	12
#define ARMOR_NIJ_3	22
#define ARMOR_NIJ_4	28

#define PASS_NIJ_1 	0.5
#define PASS_NIJ_2 	0.4
#define PASS_NIJ_3 	0.2
#define PASS_NIJ_4 	0.1

#define ARMOR_EQUIP		3
#define PASS_EQUIP		0.6
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgPatches
{
	class ROG_Gear
	{
		units[]= 
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
	
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 

class CfgVehicles
{
	//Backpacks
    class TFAR_Bag_Base;
    
    //Winter Long Ranges
    class tfw_ilbe_a_wd;
    
    class tfw_ilbe_a_gr:tfw_ilbe_a_wd{};
    class tfw_ilbe_gr:tfw_ilbe_a_wd{};
    class tfw_ilbe_blade_gr:tfw_ilbe_a_wd{};
    class tfw_ilbe_dd_gr:tfw_ilbe_a_wd{};
    
    class ROG_ILBE1 : tfw_ilbe_a_gr
	{
        scope = 2;
        displayName = "ILBE AP Winter ANT RT-1523G (ASIP)";
        picture = "";
        hiddenSelectionsTextures[] = {"ROG_Gear\textures\ilbe\ilbe_winter_co.paa"};
    };
    
    class ROG_ILBE2 : tfw_ilbe_gr
	{
        scope = 2;
        displayName = "ILBE AP Winter RT-1523G (ASIP)";
        picture = "";
        hiddenSelectionsTextures[] = {"ROG_Gear\textures\ilbe\ilbe_winter_co.paa"};
    };
    
    class ROG_ILBE3 : tfw_ilbe_blade_gr
	{
        scope = 2;
        displayName = "ILBE AP Winter VHF Blade Antenna";
        picture = "";
        hiddenSelectionsTextures[] = {"ROG_Gear\textures\ilbe\ilbe_winter_co.paa"};
    };
    
    class ROG_ILBE4 : tfw_ilbe_dd_gr
	{
        scope = 2;
        displayName = "ILBE AP Winter VHF Blade Antenna";
        picture = "";
        hiddenSelectionsTextures[] = {"ROG_Gear\textures\ilbe\ilbe_winter_co.paa"};
    };
    
    //Raven Backpacks
    class TFAR_anarc164: TFAR_Bag_Base{};
    
    class ROG_Raven1 : TFAR_anarc164
	{
        scope = 2;
        displayName = "ROG Raven Woodland";
        picture = "";
        hiddenSelectionsTextures[] = {"\z\tfar\addons\backpacks\models\data\camo\backpack_dpcu_co.paa"};
        	class UserActions
			{	
        		class UNPACKRAVENACTION
        		{
        		condition = "alive this";
        		displayName = "Assemble RQ-11 B Raven";
        		displayNameDefault = "";
        		onlyforplayer = "true";
        		position = "camo";
        		priority = 0;
        		radius = 5;
        		shortcut = "";
        		statement = "[this] execVM '\rhsusf\addons\rhsusf_c_uav\scripts\backpack_UnpackRaven.sqf'";
				};
			};
    };
    
    class TFAR_anarc210: TFAR_Bag_Base{};
    class ROG_Raven2 : TFAR_anarc210
	{
        scope = 2;
        displayName = "ROG Raven OCP";
        picture = "";
        hiddenSelectionsTextures[] = {"\z\tfar\addons\backpacks\models\data\camo\backpack_mcam_co.paa"};
        	class UserActions
			{	
        		class UNPACKRAVENACTION
        		{
        		condition = "alive this";
        		displayName = "Assemble RQ-11 B Raven";
        		displayNameDefault = "";
        		onlyforplayer = "true";
        		position = "camo";
        		priority = 0;
        		radius = 5;
        		shortcut = "";
        		statement = "[this] execVM '\rhsusf\addons\rhsusf_c_uav\scripts\backpack_UnpackRaven.sqf'";
				};
			};
    };
    //Winter Raven
    class ROG_Raven3 : tfw_ilbe_gr
	{
        scope = 2;
        displayName = "ROG Raven Winter";
        picture = "";
        hiddenSelectionsTextures[] = {"ROG_Gear\textures\ilbe\ilbe_winter_co.paa"};
            class UserActions
			{	
        		class UNPACKRAVENACTION
        		{
        		condition = "alive this";
        		displayName = "Assemble RQ-11 B Raven";
        		displayNameDefault = "";
        		onlyforplayer = "true";
        		position = "camo";
        		priority = 0;
        		radius = 5;
        		shortcut = "";
        		statement = "[this] execVM '\rhsusf\addons\rhsusf_c_uav\scripts\backpack_UnpackRaven.sqf'";
				};
			};
    };
    
    //UNITS??
    class B_Soldier_F; 
    
    class ROG_uniform: B_soldier_F {
        author = "Lord Shrek, Kieran"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Custom Soldier"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Custom_Faction";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
        uniformClass = "CADPAT_camo"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"ROG_Gear\textures\CADPAT\CADPATMale.paa"};
        hiddenSelectionsMaterials[] = {"ROG_Gear\textures\custom_camo.rvmat"};  
         weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"CUstom_Helmet1","Custom_Vest1","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"CUstom_Helmet1","Custom_Vest1","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    }; //CADPAT
    
    class ROG_uniform1: B_soldier_F {
        author = "Lord Shrek, Kieran"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Custom Soldier"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Custom_Faction";
        model = "\FEMAL3_Uniforms_v2\FEM_BDU_rolled.p3d"; 
        uniformClass = "CADPAT_camo2"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"ROG_Gear\textures\CADPAT\CADPATMale.paa"};
        hiddenSelectionsMaterials[] = {"ROG_Gear\textures\custom_camo.rvmat"};  
         weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"CUstom_Helmet1","Custom_Vest1","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"CUstom_Helmet1","Custom_Vest1","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    }; //CADPAT Female
    
    class ROG_uniform2: B_soldier_F {
        author = "Lord Shrek, Kieran"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Custom Soldier"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Custom_Faction";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        uniformClass = "Swedm90_camo"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"ROG_Gear\textures\SWEDM90\SWEDM90.paa"};
        hiddenSelectionsMaterials[] = {"ROG_Gear\textures\custom_camo.rvmat"};  
         weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"CUstom_Helmet1","Custom_Vest1","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"CUstom_Helmet1","Custom_Vest1","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    }; //SWEDM90
    
    class ROG_uniform3: B_soldier_F {
        author = "Kieran"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Custom Soldier"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Custom_Faction";
        model = "\FEMAL3_Uniforms_v2\FEM_BDU_rolled.p3d"; 
        uniformClass = "CADPAT_camo2"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"ROG_Gear\textures\FemaleWinter\FemaleWinter.paa"};
        hiddenSelectionsMaterials[] = {"ROG_Gear\textures\custom_camo.rvmat"};  
         weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"CUstom_Helmet1","Custom_Vest1","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"CUstom_Helmet1","Custom_Vest1","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    }; //Female Winter
    
    class ROG_uniform4: B_soldier_F {
        author = "Kieran"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Custom Soldier"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Custom_Faction";
        model = "\FEMAL3_Uniforms_v2\FEM_BDU_rolled.p3d"; 
        uniformClass = "Female_winter_camo2"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"ROG_Gear\textures\FemaleWinter\alpine1.paa"};
        hiddenSelectionsMaterials[] = {"ROG_Gear\textures\custom_camo.rvmat"};  
         weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"CUstom_Helmet1","Custom_Vest1","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"CUstom_Helmet1","Custom_Vest1","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    }; //Female Alpine
    
    class UK3CB_CHC_C_COACH{};
    class ROG_armoreduni1: UK3CB_CHC_C_COACH{
    uniformClass = "ROG_Trksuit_blk"; 
        author = "Kieran"; 
        scope = 2; 
		class ItemInfo
		{
		    hitPointName    = "HitBody";
		    armor           = 6; 
		    passThrough     = 0.1 
		};
    }; 

};

class cfgWeapons
{
	//Uniforms
    class ItemCore; 
    class UniformItem; 
    class Uniform_Base: ItemCore 
    { 
        class ItemInfo; 
    }; 
		//Hidden Vest
		class Vest_Camo_Base : ItemCore {
			class ItemInfo;
		};
	    
		class rhsusf_iotv_ocp_base: Vest_Camo_Base{};
		class rhsusf_plateframe_sapi: rhsusf_iotv_ocp_base{};
		class ROG_V_Hide : rhsusf_plateframe_sapi
		{
				scope = 2;
				scopecurator = 2;
				scopearsenal = 2;
				
			///! stringtable the name
			displayName = "@[ROG] Hidden Armor";
		
			model = "";
		
			hiddenSelectionsTextures[] =
			{
				"",
				"",
				"",
				"",
				"",
				"",
				"",
				""
			};
		
			descriptionShort = "Armor Level Yes";
			class ItemInfo: ItemInfo
			{
				hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
				uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi";
				containerClass = "Supply10";
				mass = 60;
		          class HitpointsProtectionInfo
					{
						class Neck
						{
							hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
							armor		= 8; // addition to armor of referenced hitpoint
							passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
						};
						class Arms
						{
							hitpointName	= "HitArms";
							armor		= 8;
							passThrough	= 0.5;
						};
						class Chest 
						{
							hitpointName	= "HitChest"; 
							armor		= 24; 
							passThrough	= 0.1; 
						};
						class Diaphragm
						{
							hitpointName	= "HitDiaphragm";
							armor		= 12;
							passThrough	= 0.1;
						};
						class Abdomen
						{
							hitpointName	= "HitAbdomen"; 
							armor		= 16;
							passThrough	= 0.1;
						};
						class Body
						{
							hitpointName	= "HitBody";
								passThrough	= 0.1;
		            	};
					};
			};
		};
    
    class CADPAT_camo: Uniform_Base 
    { 
        scope = 2; 
        displayName = "CADPAT Male"; 
        picture = "-"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "ROG_uniform"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    };//CADPAT 
    
    class CADPAT_camo2: Uniform_Base 
    { 
        scope = 2; 
        displayName = "CADPAT Female"; 
        picture = "-"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "ROG_uniform1"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    };//CADPAT
    
    class Swedm90_camo: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Swedish M90"; 
        picture = "-"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "ROG_uniform2"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    };//SWEDM90
    
    class Female_winter_camo: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Winter Female"; 
        picture = "-"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "ROG_uniform3"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    };//Female Winter
    
    class Female_winter_camo2: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Winter Female Alpine"; 
        picture = "-"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "ROG_uniform4"; 
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };    
    
// HELMETS & Facewear
	class H_HelmetB : ItemCore 
		{
		class ItemInfo;
		};

	class rhsusf_opscore_bk_pelt{};
	class Alpine_opscore{};
	class ROG_H_Guardian_Blk : rhsusf_opscore_bk_pelt
	{

		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "@![ROG] Guardian General Helmet";
		hiddenSelectionsTextures[] =
		{
			"ROG_Gear\textures\CustomHelmets\Basic\guardianGeneralBlackout.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa"
		};
	};//Guardian Helmet
	
	class ROG_H_Titan_Blk : rhsusf_opscore_bk_pelt
	{

		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "@![ROG] Titan General Helmet";
		hiddenSelectionsTextures[] =
		{
			"ROG_Gear\textures\CustomHelmets\Basic\titanGeneralBlackout.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa"
		};
	};//Titan Helmet

	class ROG_H_Hammer_Blk : rhsusf_opscore_bk_pelt
	{

		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "@![ROG] Hammer General Helmet";
		hiddenSelectionsTextures[] =
		{
			"ROG_Gear\textures\CustomHelmets\Basic\hammerGeneralBlackout.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa"
		};
	};//Hammer Helmet
	
	class ROG_H_ReaperGeneral_OD : Alpine_opscore
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@![ROG]Reaper General Helmet(OD)";
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Basic\reaperGeneral.paa",
			"",
			"",
			""
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Guardian Alpine Helmet
	
	class ROG_H_Guardian_White : Alpine_opscore
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@![ROG]Guardian General Helmet(Winter)";
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Basic\guardianGeneralSnow.paa",
			"",
			"",
			""
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Guardian Alpine Helmet
		class ROG_H_Guardian_OD : rhsusf_opscore_bk_pelt
		{
			scope = 2;
			scopecurator = 2;
			scopearsenal = 2;
			displayName="@![ROG]Guardian General Helmet(OD)";
			model="\VSM_Helmets\models\VSM_ops";
			hiddenSelectionsTextures[]=
			{
				"ROG_Gear\textures\CustomHelmets\Basic\guardianGeneralOD.paa",
				"",
				"",
				""
			};
			ace_hearing_protection = 0.75;
	        ace_hearing_lowerVolume = 0;
		};//Guardian OD Helmet
	
	class ROG_H_Hammer_White : Alpine_opscore
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@![ROG]Hammer General Helmet(Winter)";
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Basic\hammerGeneralSnow.paa",
			"",
			"",
			""
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Hammer Alpine Helmet
		class ROG_H_Hammer_OD : Alpine_opscore
		{
			scope = 2;
			scopecurator = 2;
			scopearsenal = 2;
			displayName="@![ROG]Hammer General Helmet(OD)";
			model="\VSM_Helmets\models\VSM_ops";
			hiddenSelectionsTextures[]=
			{
				"ROG_Gear\textures\CustomHelmets\Basic\hammerGenerallOD.paa",
				"",
				"",
				""
			};
			ace_hearing_protection = 0.75;
	        ace_hearing_lowerVolume = 0;
		};//Hammer OD Helmet
	
	class ROG_H_Titan_White : Alpine_opscore
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@![ROG]Titan General Helmet(Winter)";
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Basic\titanGeneralSnow.paa",
			"",
			"",
			""
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Titan Alpine Helmet
		class ROG_H_titan_OD : Alpine_opscore
		{
			scope = 2;
			scopecurator = 2;
			scopearsenal = 2;
			displayName="@![ROG]Titan General Helmet(OD)";
			model="\VSM_Helmets\models\VSM_ops";
			hiddenSelectionsTextures[]=
			{
				"ROG_Gear\textures\CustomHelmets\Basic\titanGeneralOD.paa",
				"",
				"",
				""
			};
			ace_hearing_protection = 0.75;
	        ace_hearing_lowerVolume = 0;
		};//Titan OD Helmet

	class ROG_H_Guardian_Tan : rhsusf_opscore_bk_pelt
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@![ROG]Guardian General Helmet(Tan)";
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Basic\guardianGeneralTan.paa",
			"",
			"",
			""
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Guardian Tan Helmet
	
	class ROG_H_Hammer_Tan : rhsusf_opscore_bk_pelt
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@![ROG]Hammer General Helmet(Tan)";
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Basic\hammerGeneralTan.paa",
			"",
			"",
			""
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Hammer Tan Helmet
	
	class ROG_H_Titan_Tan : rhsusf_opscore_bk_pelt
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@![ROG]Titan General Helmet(Tan)";
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Basic\titanGeneralTan.paa",
			"",
			"",
			""
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Titan Tan Helmet

	class rhsusf_opscore_mar_ut_pelt{};
	class ROG_H_Mourn : rhsusf_opscore_mar_ut_pelt
	{

		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
		displayName = "@[ROG] Mourn Helmet OPSCORE";
		hiddenSelectionsTextures[] =
		{
			"ROG_Gear\textures\CustomHelmets\Mourn\mourntest13.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\tan2_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa"
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Mourn Helm Opscore + Headset		
		class ROG_H_MournWinter : Alpine_opscore
		{
			scope = 2;
			scopecurator = 2;
			scopearsenal = 2;
			displayName="@[ROG]Mourn Helmet(Winter)";
			model="\VSM_Helmets\models\VSM_ops";
			hiddenSelectionsTextures[]=
			{
				"ROG_Gear\textures\CustomHelmets\Mourn\mournWinterHelmet.paa",
				"Alpine_Vests\Data\Helmets\vsm_helmet_pouch.paa",
				"Alpine_Vests\Data\Helmets\secco2.paa",
				"Alpine_Vests\Data\Helmets\headset_co.paa"
			};
			ace_hearing_protection = 0.75;
	        ace_hearing_lowerVolume = 0;
		};//Mourn Alpine Helmet
			class ROG_H_MournTan : Alpine_opscore
			{
				scope = 2;
				scopecurator = 2;
				scopearsenal = 2;
				displayName="@[ROG]Mourn Helmet(Tan)";
				model="\VSM_Helmets\models\VSM_ops";
				hiddenSelectionsTextures[]=
				{
					"ROG_Gear\textures\CustomHelmets\Mourn\mournWinterHelmettan.paa",
					"Arid_Vests\Data\Helmets\vsm_helmet_pouch.paa",
					"Arid_Vests\Data\Helmets\secco2.paa",
					"Arid_Vests\Data\Helmets\headset_co.paa"
				};
				ace_hearing_protection = 0.75;
		        ace_hearing_lowerVolume = 0;
			};//Mourn Tan Helmet
					class ROG_H_MournOD : Alpine_opscore
					{
						scope = 2;
						scopecurator = 2;
						scopearsenal = 2;
						displayName="@[ROG]Mourn Helmet(OD)";
						model="\VSM_Helmets\models\VSM_ops";
						hiddenSelectionsTextures[]=
						{
							"ROG_Gear\textures\CustomHelmets\Mourn\MournOD.paa",
							"Arid_Vests\Data\Helmets\vsm_helmet_pouch.paa",
							"Arid_Vests\Data\Helmets\secco2.paa",
							"Arid_Vests\Data\Helmets\headset_co.paa"
						};
						ace_hearing_protection = 0.75;
				        ace_hearing_lowerVolume = 0;
					};//Mourn OD Helmet
					
					class ROG_H_ToyOD : Alpine_opscore
					{
						scope = 2;
						scopecurator = 2;
						scopearsenal = 2;
						displayName="@[ROG]Toga Helmet(OD)";
						model="\VSM_Helmets\models\VSM_ops";
						hiddenSelectionsTextures[]=
						{
							"ROG_Gear\textures\CustomHelmets\Toy\TogaOD.paa",
							"",
							"",
							"Arid_Vests\Data\Helmets\headset_co.paa"
						};
						ace_hearing_protection = 0.75;
				        ace_hearing_lowerVolume = 0;
					};//Toga OD Helmet
					
					class ROG_H_PewOD : Alpine_opscore
					{
						scope = 2;
						scopecurator = 2;
						scopearsenal = 2;
						displayName="@[ROG]Pew Helmet(OD)";
						model="\VSM_Helmets\models\VSM_ops";
						hiddenSelectionsTextures[]=
						{
							"ROG_Gear\textures\CustomHelmets\Pew\PewOD.paa",
							"",
							"",
							"Arid_Vests\Data\Helmets\headset_co.paa"
						};
						ace_hearing_protection = 0.75;
				        ace_hearing_lowerVolume = 0;
					};//Pew OD Helmet

					class ROG_H_RaineOD : Alpine_opscore
					{
						scope = 2;
						scopecurator = 2;
						scopearsenal = 2;
						displayName="@[ROG]Raine Helmet(OD)";
						model="\VSM_Helmets\models\VSM_ops";
						hiddenSelectionsTextures[]=
						{
							"ROG_Gear\textures\CustomHelmets\Raine\RaineOD.paa",
							"",
							"",
							"Arid_Vests\Data\Helmets\headset_co.paa"
						};
						ace_hearing_protection = 0.75;
				        ace_hearing_lowerVolume = 0;
					};//Raine OD Helmet
					
					class ROG_H_LapisOD : Alpine_opscore
					{
						scope = 2;
						scopecurator = 2;
						scopearsenal = 2;
						displayName="@[ROG]Lapis Helmet(OD)";
						model="\VSM_Helmets\models\VSM_ops";
						hiddenSelectionsTextures[]=
						{
							"ROG_Gear\textures\CustomHelmets\Lapis\LapisOD.paa",
							"",
							"",
							"Arid_Vests\Data\Helmets\headset_co.paa"
						};
						ace_hearing_protection = 0.75;
				        ace_hearing_lowerVolume = 0;
					};//Lapis OD Helmet
	
	
	class rhs_tsh4_ess{};
	class ROG_H_Kieran : rhs_tsh4_ess
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "@[ROG] Kieran Hat?";
	
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess";
		
		//hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ROG_Gear\textures\CustomHelmets\Kieran\Kieran.paa"};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
		armor = 15;		
	};//Kieran Hat Tsh4 ESS

	class rhs_altyn_visordown{};
	class ROG_H_Sign : rhs_altyn_visordown
	{
		//INVENTORY_PICTURE(rhs_altyn_visordown)
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "@[ROG] Sign Atlyn";
	
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
		
			//hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"ROG_Gear\textures\CustomHelmets\Sign\signtest1.paa"};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Sign Atyln(Visor Down)
	
	class ROG_H_Miggy : rhs_altyn_visordown
	{
		//INVENTORY_PICTURE(rhs_altyn_visordown)
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "@[ROG] I. Opelario Altyn";
	
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
		
			//hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"ROG_Gear\textures\CustomHelmets\Miggy\miggy.paa"};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Sign Atyln(Visor Down)
	
	class rhsusf_bowman_cap{};
	class ROG_H_Waterloo : rhsusf_bowman_cap
	{
		//AUTHOR_MACRO_DLC
		//INVENTORY_PICTURE(rhsusf_bowman_cap)
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "@[ROG] Waterloo Cap(Green)";
		ace_hearing_protection = 0.5;
        ace_hearing_lowerVolume = 0;	
 		ace_hasReserveParachute = 1;
        ace_reserveParachute = "ACE_ReserveParachute";
		armor = 6; 
		passThrough	= 0.5;
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_bowman_cap";
		hiddenSelectionsTextures[] = {"ROG_Gear\textures\CustomHelmets\Waterloo\fuckyouprimal.paa", "ROG_Gear\textures\CustomHelmets\Waterloo\waterloohatfinal.paa"};

	};//Waterloo Bowman Cap
	
		class ROG_H_Waterloo2 : rhsusf_bowman_cap
		{
			//AUTHOR_MACRO_DLC
			//INVENTORY_PICTURE(rhsusf_bowman_cap)
			scope = 2;
			scopecurator = 2;
			scopearsenal = 2;
			displayName = "@[ROG] Waterloo Cap (Black)(Also Winter?)";
			ace_hearing_protection = 0.5;
	        ace_hearing_lowerVolume = 0;
	 		ace_hasReserveParachute = 1;
	        ace_reserveParachute = "ACE_ReserveParachute";
			armor = 6; 
			passThrough	= 0.5;	
			model = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_bowman_cap";
			hiddenSelectionsTextures[] = {"ROG_Gear\textures\CustomHelmets\Waterloo\fuckyouprimal.paa", "ROG_Gear\textures\CustomHelmets\Waterloo\waterloohatfinalblk.paa"};
		};//Waterloo Bowman Cap Black
	
	class ROG_H_Shrek : Alpine_opscore
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@[ROG]Shrek Helmet(Winter)";
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Shrek\SHREKREALSAVEWINTERNEWNEWYES.paa",
			"Alpine_Vests\Data\Helmets\vsm_helmet_pouch.paa",
			"Alpine_Vests\Data\Helmets\secco2.paa",
			"Alpine_Vests\Data\Helmets\headset_co.paa"
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Shrek Alpine Helmet
			class ROG_H_ShrekTan : Alpine_opscore
			{
				scope = 2;
				scopecurator = 2;
				scopearsenal = 2;
				displayName="@[ROG]Shrek Helmet(Tan)";
				model="\VSM_Helmets\models\VSM_ops";
				hiddenSelectionsTextures[]=
				{
					"ROG_Gear\textures\CustomHelmets\Shrek\SHREKREALSAVEWINTERNEWNEWYEStan.paa",
					"Arid_Vests\Data\Helmets\vsm_helmet_pouch.paa",
					"Arid_Vests\Data\Helmets\secco2.paa",
					"Arid_Vests\Data\Helmets\headset_co.paa"
				};
				ace_hearing_protection = 0.75;
		        ace_hearing_lowerVolume = 0;
			};//Shrek Tan Helmet
					class ROG_H_ShrekOD : Alpine_opscore
					{
						scope = 2;
						scopecurator = 2;
						scopearsenal = 2;
						displayName="@[ROG]Shrek Helmet(OD)";
						model="\VSM_Helmets\models\VSM_ops";
						hiddenSelectionsTextures[]=
						{
							"ROG_Gear\textures\CustomHelmets\Shrek\ShrekOD.paa",
							"Arid_Vests\Data\Helmets\vsm_helmet_pouch.paa",
							"Arid_Vests\Data\Helmets\secco2.paa",
							"Arid_Vests\Data\Helmets\headset_co.paa"
						};
						ace_hearing_protection = 0.75;
				        ace_hearing_lowerVolume = 0;
					};//Shrek OD Helmet	
			
	class ROG_H_Boomer : Alpine_opscore
	{
		
		
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@[ROG]Boomer Helmet(Winter)";
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Boomer\Boomer.paa",
			"",
			"Alpine_Vests\Data\Helmets\secco2.paa",
			"Alpine_Vests\Data\Helmets\headset_co.paa"
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Boomer Alpine Helmet
			class ROG_H_BoomerTan : Alpine_opscore
			{
				scope = 2;
				scopecurator = 2;
				scopearsenal = 2;
				displayName="@[ROG]Boomer Helmet(Tan)";
				model="\VSM_Helmets\models\VSM_ops";
				hiddenSelectionsTextures[]=
				{
					"ROG_Gear\textures\CustomHelmets\Boomer\Boomertan.paa",
					"",
					"Arid_Vests\Data\Helmets\secco2.paa",
					"Arid_Vests\Data\Helmets\headset_co.paa"
				};
				ace_hearing_protection = 0.75;
		        ace_hearing_lowerVolume = 0;
			};//Boomer Tan Helmet
					class ROG_H_BoomerOD : Alpine_opscore
					{
						scope = 2;
						scopecurator = 2;
						scopearsenal = 2;
						displayName="@[ROG]Boomer Helmet(OD)";
						model="\VSM_Helmets\models\VSM_ops";
						hiddenSelectionsTextures[]=
						{
							"ROG_Gear\textures\CustomHelmets\Boomer\BoomerOD.paa",
							"",
							"Arid_Vests\Data\Helmets\secco2.paa",
							"Arid_Vests\Data\Helmets\headset_co.paa"
						};
						ace_hearing_protection = 0.75;
				        ace_hearing_lowerVolume = 0;
					};//Boomer OD Helmet
					class VSM_Bowman_cap_Black;
					class ROG_H_Boomer_cap : VSM_Bowman_cap_Black
					{
						scope = 2;
						scopecurator = 2;
						scopearsenal = 2;
						displayName="@[ROG]Boomer Bowman Cap";
						hiddenSelectionsTextures[] = 
						{
						"\VSM_Bowman\data\Bowman_Base_co.paa",
						"ROG_Gear\textures\CustomHelmets\Boomer\ROG_Bowman_Black_Boomer.paa"
						};
					}

	class ROG_H_Chaos : Alpine_opscore
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@[ROG]Chaos Helmet(Winter)";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Chaos\Chaos.paa",
			"Alpine_Vests\Data\Helmets\vsm_helmet_pouch.paa",
			"Alpine_Vests\Data\Helmets\secco2.paa",
			"Alpine_Vests\Data\Helmets\headset_co.paa"
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Chaos Alpine Helmet
			class ROG_H_ChaosTan : Alpine_opscore
			{
				scope = 2;
				scopecurator = 2;
				scopearsenal = 2;
				displayName="@[ROG]Chaos Helmet(Tan)";
				model="\VSM_Helmets\models\VSM_ops";
				hiddenSelectionsTextures[]=
				{
					"ROG_Gear\textures\CustomHelmets\Chaos\Chaostan.paa",
					"",
					"Arid_Vests\Data\Helmets\secco2.paa",
					"Arid_Vests\Data\Helmets\headset_co.paa"
				};
				ace_hearing_protection = 0.75;
		        ace_hearing_lowerVolume = 0;
			};//Chaos Tan Helmet
					class ROG_H_ChaosOD : Alpine_opscore
					{
						scope = 2;
						scopecurator = 2;
						scopearsenal = 2;
						displayName="@[ROG]Chaos Helmet(OD)";
						model="\VSM_Helmets\models\VSM_ops";
						hiddenSelectionsTextures[]=
						{
							"ROG_Gear\textures\CustomHelmets\Chaos\ChaosOD.paa",
							"",
							"Arid_Vests\Data\Helmets\secco2.paa",
							"Arid_Vests\Data\Helmets\headset_co.paa"
						};
						ace_hearing_protection = 0.75;
				        ace_hearing_lowerVolume = 0;
					};//Chaos Tan Helmet
	
	class ROG_H_Beef : Alpine_opscore
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@[ROG]Beef Helmet(Winter)";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Beef\BEEF.paa",
			"",
			"Alpine_Vests\Data\Helmets\secco2.paa",
			"ROG_Gear\textures\CustomHelmets\Beef\beefcoms.paa"
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Beef Alpine Helmet
			class ROG_H_BeefTan : Alpine_opscore
			{
				scope = 2;
				scopecurator = 2;
				scopearsenal = 2;
				displayName="@[ROG]Beef Helmet(Tan)";
				model="\VSM_Helmets\models\VSM_ops";
				hiddenSelectionsTextures[]=
				{
					"ROG_Gear\textures\CustomHelmets\Beef\BEEFtan.paa",
					"",
					"Arid_Vests\Data\Helmets\secco2.paa",
					"ROG_Gear\textures\CustomHelmets\Beef\beefcomstan.paa"
				};
				ace_hearing_protection = 0.75;
		        ace_hearing_lowerVolume = 0;
			};//Beef Tan Helmet
					class ROG_H_BeefOD : Alpine_opscore
					{
						scope = 2;
						scopecurator = 2;
						scopearsenal = 2;
						displayName="@[ROG]Beef Helmet(OD)";
						model="\VSM_Helmets\models\VSM_ops";
						hiddenSelectionsTextures[]=
						{
							"ROG_Gear\textures\CustomHelmets\Beef\BEEFOD.paa",
							"",
							"Arid_Vests\Data\Helmets\secco2.paa",
							"ROG_Gear\textures\CustomHelmets\Beef\beefcomstan.paa"
						};
						ace_hearing_protection = 0.75;
				        ace_hearing_lowerVolume = 0;
					};//Beef OD Helmet
	
	class ROG_H_Keegan : Alpine_opscore
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@[ROG]Keegan Helmet(Winter)";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Keegan\keeganWinterTest1.paa",
			"Alpine_Vests\Data\Helmets\vsm_helmet_pouch.paa",
			"Alpine_Vests\Data\Helmets\secco2.paa",
			"Alpine_Vests\Data\Helmets\headset_co.paa"
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Keegan Alpine Helmet
			class ROG_H_KeeganTan : Alpine_opscore
			{
				scope = 2;
				scopecurator = 2;
				scopearsenal = 2;
				displayName="@[ROG]Keegan Helmet(Tan)";
				model="\VSM_Helmets\models\VSM_ops";
				hiddenSelectionsTextures[]=
				{
					"ROG_Gear\textures\CustomHelmets\Keegan\keeganWinterTest1tan.paa",
					"Arid_Vests\Data\Helmets\vsm_helmet_pouch.paa",
					"Arid_Vests\Data\Helmets\secco2.paa",
					"Arid_Vests\Data\Helmets\headset_co.paa"
				};
				ace_hearing_protection = 0.75;
		        ace_hearing_lowerVolume = 0;
			};//Keegan Tan Helmet
					class ROG_H_KeeganOD : Alpine_opscore
					{
						scope = 2;
						scopecurator = 2;
						scopearsenal = 2;
						displayName="@[ROG]Keegan Helmet(OD)";
						model="\VSM_Helmets\models\VSM_ops";
						hiddenSelectionsTextures[]=
						{
							"ROG_Gear\textures\CustomHelmets\Keegan\KeeganOD.paa",
							"Arid_Vests\Data\Helmets\vsm_helmet_pouch.paa",
							"Arid_Vests\Data\Helmets\secco2.paa",
							"Arid_Vests\Data\Helmets\headset_co.paa"
						};
						ace_hearing_protection = 0.75;
				        ace_hearing_lowerVolume = 0;
					};//Keegan OD 
					class M40_Gas_mask_nbc_green_k4_d{};
					class ROG_F_KeeganM40 : M40_Gas_mask_nbc_green_k4_d
					{
						scope=2;
						displayName="@[ROG]Keegan M40";	
						hiddenSelectionsTextures[]=
						{
							"US_M40_Masck_NBC\data\M40_mask_green_co.paa",
							"US_M40_Masck_NBC\data\M40_linsDark_co.paa"
						};
					};
			
	class ROG_H_Navarro : Alpine_opscore
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@[ROG]Navarro Helmet(Winter)";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Navarro\navarroHelmetWinterFinal.paa",
			"Alpine_Vests\Data\Helmets\vsm_helmet_pouch.paa",
			"Alpine_Vests\Data\Helmets\secco2.paa",
			"Alpine_Vests\Data\Helmets\headset_co.paa"
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Navarro Alpine Helmet
			class ROG_H_NavarroTan : Alpine_opscore
			{
				scope = 2;
				scopecurator = 2;
				scopearsenal = 2;
				displayName="@[ROG]Navarro Helmet(Tan)";
				model="\VSM_Helmets\models\VSM_ops";
				hiddenSelectionsTextures[]=
				{
					"ROG_Gear\textures\CustomHelmets\Navarro\navarroHelmetWinterFinaltan.paa",
					"Arid_Vests\Data\Helmets\vsm_helmet_pouch.paa",
					"Arid_Vests\Data\Helmets\secco2.paa",
					"Arid_Vests\Data\Helmets\headset_co.paa"
				};
				ace_hearing_protection = 0.75;
		        ace_hearing_lowerVolume = 0;
			};//Navarro Tan Helmet
					class ROG_H_NavarroOD : Alpine_opscore
					{
						scope = 2;
						scopecurator = 2;
						scopearsenal = 2;
						displayName="@[ROG]Navarro Helmet(OD)";
						model="\VSM_Helmets\models\VSM_ops";
						hiddenSelectionsTextures[]=
						{
							"ROG_Gear\textures\CustomHelmets\Navarro\NavarroOD.paa",
							"Arid_Vests\Data\Helmets\vsm_helmet_pouch.paa",
							"Arid_Vests\Data\Helmets\secco2.paa",
							"Arid_Vests\Data\Helmets\headset_co.paa"
						};
						ace_hearing_protection = 0.75;
				        ace_hearing_lowerVolume = 0;
					};//Navarro OD Helmet
	
	class ROG_H_WarrenOps : Alpine_opscore
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@[ROG]Warren Helmet(Winter#1)";
		hiddenSelectionsTextures[]=
		{
			"ROG_Gear\textures\CustomHelmets\Warren\warrenHelmetWinter.paa",
			"Alpine_Vests\Data\Helmets\vsm_helmet_pouch.paa",
			"Alpine_Vests\Data\Helmets\secco2.paa",
			"ROG_Gear\textures\CustomHelmets\Warren\warrenHeadsetWinter.paa"
		};
		ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
	};//Warren Alpine Helmet
	class Alpine_opscore_2{};
	class ROG_H_WarrenOps2 : Alpine_opscore_2
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName="@[ROG]Warren Helmet(Winter#2)";
		hiddenSelectionsTextures[]=
		{
			"Alpine_Vests\Data\Helmets\VSM_ops.paa",
			"ROG_Gear\textures\CustomHelmets\Warren\Opscore2\2.paa",
			"ROG_Gear\textures\CustomHelmets\Warren\Opscore2\3.paa",
			"Alpine_Vests\Data\Helmets\headset_co.paa"
		};
	};
	
	
		class rhsusf_hgu56p_visor_mask_black{};
		class ROG_H_Warren_Pilot : rhsusf_hgu56p_visor_mask_black
		{
	
			displayName = "@[ROG] Warren Pilot Helmet";
			armor = 6;
			hiddenSelectionsTextures[] =
			{
				"ROG_Gear\textures\CustomHelmets\Warren\warrenPilotHelmetYes.paa",
				"ROG_Gear\textures\CustomHelmets\Warren\warrenPatches.paa"
			};
		};//Warren Helmets
	
	class ROG_H_Misc_Yankee : rhsusf_bowman_cap
	{
		//AUTHOR_MACRO_DLC
		//INVENTORY_PICTURE(rhsusf_bowman_cap)
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "@[ROG] Shrek Cap(Yeske)";
		ace_hearing_protection = 0.5;
        ace_hearing_lowerVolume = 0;	
 		ace_hasReserveParachute = 1;
        ace_reserveParachute = "ACE_ReserveParachute";
		armor = 6; 
		passThrough	= 0.1;
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_bowman_cap";
		hiddenSelectionsTextures[] = {"", "ROG_Gear\textures\CustomHelmets\Misc\yankeeWitNoBrim.paa"};

	};//Shrek Bowman Cap
	
};
