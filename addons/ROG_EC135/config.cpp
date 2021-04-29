#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgPatches
{
	class ROG_EC135_Luke_ECX //Original Pbo name attached to your pbo
	{
		units[]= 
		{
		"ROG_EC135_Gunmetalgrey" , 
		"ROG_EC135_Gunmetalgrey_Unmarked" , 
		"ROG_EC135_Gunmetalgrey_Medevac" ,
		"ROG_EC135_Gunmetalgrey_Medevac_Unmarked" 
		};//class names
		weapons[]={};
		magazines[] = {};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
}

class CfgEditorCategories
{
	class ION
	{
		displayName="Reaper Operations Group[ROG]";
	};
};
class CfgEditorSubcategories
{
	class HELO
	{
		displayName="Helicopter";
	};
};

class CfgVehicles
{
	
	class Helicopter_Base_H;
    class ECXlu_base_F: Helicopter_Base_H
    {
        ace_fastroping_enabled = 2;
        ace_fastroping_friesType = "ACE_friesAnchorBar";
        ace_fastroping_friesAttachmentPoint[] = {0, 1.7, 0.40};
        ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
        ace_fastroping_onPrepare = "ace_fastroping_fnc_onPrepareCommon";
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
        class Attributes
        {
            class ace_fastroping_equipFRIES
            {
                property = "ace_fastroping_equipFRIES";
                control = "Checkbox";
                displayName = "$STR_ace_fastroping_Eden_equipFRIES";
                tooltip = "$STR_ace_fastroping_Eden_equipFRIES_Tooltip";
                expression = "if (_value) then {[_this] call ace_fastroping_fnc_equipFRIES}";
                typeName = "BOOL";
                condition = "objectVehicle";
                defaultValue = "(false)";
            };
        };
    };
	
	class EC135GNlu;//basic class name in the config.cpp of the org pbo
	class EC135Unarmedlu : EC135GNlu{};
	class ROG_EC135_Gunmetalgrey : EC135Unarmedlu //class name of your skin with the original class name base
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_EC135\textures\editor\preview.paa";
		picture="ROG_EC135\textures\ROG_Logo.paa";
		Icon="ROG_EC135\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "EC635(ROG)";
		author = "[FR]Charlieco89, Jaqi[Luke], Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_EC135\textures\marked\camo1.paa", "ROG_EC135\textures\marked\camo2.paa", "ROG_EC135\textures\marked\camo3.paa", "ROG_EC135\textures\marked\camo4.paa", "", ""};//Texture path (change the name of the folder "My_Skin" to whatever you want, don't forget to put _ for spaces)
		
		weapons[]={"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		countermeasureActivationRadius = 10000;
		flareVelocity = 100;
		gunnerHasFlares = 1;
		class Components
		{
			class TransportCountermeasuresComponent{};
		}
		
	};
	
	class ROG_EC135_Gunmetalgrey_Unmarked : EC135Unarmedlu //Unmarked Version of the above skin
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_EC135\textures\editor\preview.paa";
		picture="ROG_EC135\textures\ROG_Logo.paa";
		Icon="ROG_EC135\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "EC635[Unmarked](ROG)";
		author = "[FR]Charlieco89, Jaqi[Luke], Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_EC135\textures\marked\camo1.paa", "ROG_EC135\textures\marked\camo2.paa", "ROG_EC135\textures\unmarked\um_camo3.paa", "ROG_EC135\textures\marked\camo4.paa", "", ""};
		
		weapons[]={"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		countermeasureActivationRadius = 10000;
		flareVelocity = 100;
		gunnerHasFlares = 1;
		class Components
		{
			class TransportCountermeasuresComponent{};
		}
		
	};
	
	class EC135Rlu;
	class EC135ADlu : EC135Rlu{};
	class ROG_EC135_Gunmetalgrey_Medevac : EC135ADlu//Medevac Varient
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_EC135\textures\editor\preview.paa";
		picture="ROG_EC135\textures\ROG_Logo.paa";
		Icon="ROG_EC135\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "EC635 Medevac(ROG)";
		author = "[FR]Charlieco89, Jaqi[Luke], Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_EC135\textures\marked\m_camo1.paa", "ROG_EC135\textures\marked\m_camo2.paa", "ROG_EC135\textures\marked\m_camo3.paa", "ROG_EC135\textures\marked\m_camo4.paa", "", "ROG_EC135\textures\marked\m_camo6.paa"};
		
		weapons[]={"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		countermeasureActivationRadius = 10000;
		flareVelocity = 100;
		gunnerHasFlares = 1;
		class Components
		{
			class TransportCountermeasuresComponent{};
		}
		
	};
	
	class ROG_EC135_Gunmetalgrey_Medevac_Unmarked : EC135ADlu//Medevac Unmarked Varient
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_EC135\textures\editor\preview.paa";
		picture="ROG_EC135\textures\ROG_Logo.paa";
		Icon="ROG_EC135\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "EC635 Medevac[Unmarked](ROG)";
		author = "[FR]Charlieco89, Jaqi[Luke], Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_EC135\textures\marked\m_camo1.paa", "ROG_EC135\textures\marked\m_camo2.paa", "ROG_EC135\textures\unmarked\m_um_camo3.paa", "ROG_EC135\textures\marked\m_camo4.paa", "", "ROG_EC135\textures\marked\m_camo6.paa"};
		
		weapons[]={"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		countermeasureActivationRadius = 10000;
		flareVelocity = 100;
		gunnerHasFlares = 1;
		class Components
		{
			class TransportCountermeasuresComponent{};
		}
		
	};
};
