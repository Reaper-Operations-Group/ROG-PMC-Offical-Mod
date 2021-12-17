#define private 0
#define protected 1
#define public 2
class CfgPatches
{
	class ROG_MERLIN_A3 //Original Pbo name attached to your pbo
	{
		units[]= 
		{
		"ROG_MERLIN_BLK" , 
		"ROG_MERLIN_BLK_Unmarked",
		"ROG_MH6_BLK",
		"ROG_MH6_BLK_UM",
		"ROG_EC135_Gunmetalgrey" , 
		"ROG_EC135_Gunmetalgrey_Unmarked" , 
		"ROG_EC135_Gunmetalgrey_Medevac" ,
		"ROG_EC135_Gunmetalgrey_Medevac_Unmarked",
		"ROG_MELB_Gunmetalgrey" ,
		"ROG_MELB_Gunmetalgrey_Marked",
		"ROG_MELB_OD_Unmarked" ,
		"ROG_MELB_OD_Marked",
		"ROG_UH1H_Unmarked",
		"ROG_UH1H_Marked",
		"ROG_MI24_Gunmetalgrey",
		"ROG_MI24_Gunmetalgrey_unmarked"
		};//class names
		weapons[]={};
		magazines[] = {};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
}

class CfgEditorCategories
{
	class ROG
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
	// Helicopters
	//Base Defines
	class Helicopter_Base_H;
	class I_Heli_Transport_02_F;
	class B_Heli_Light_01_F;
	
    class EC135Unarmedlu;
    class EC135ADlu;
    class ECXlu_base_F: Helicopter_Base_H
    {
    	scope = private;
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
    
    class RHS_MELB_MH6M;
    class ROG_MELB_Base : RHS_MELB_MH6M
    {
    	scope = private;
		editorCategory="ROG";
		editorSubcategory="HELO";
		author = "RHS Team, Kieranator-5050";
	}
	
	class rhs_uh1h_hidf;
	class ROG_UH1H_Base : rhs_uh1h_hidf
	{
		scope = private;
		editorCategory="ROG";
		editorSubcategory="HELO";
		author = "RHS Team, Kieranator-5050";
		side = 1;
		weapons[]={"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		countermeasureActivationRadius = 10000;
		flareVelocity = 100;
		gunnerHasFlares = 1;
		class Components
		{
			class TransportCountermeasuresComponent{};
		}
		
        ace_fastroping_enabled = 2;
        ace_fastroping_friesType = "ACE_friesAnchorBar"; 
        ace_fastroping_friesAttachmentPoint[] = {0, 1, -0.4};
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
	}
	
	class RHS_Mi24V_vvs;
	class ROG_Mi24V_Base : RHS_Mi24V_vvs
	{
		scope = private;
		side = 1;
		author = "RHS TEAM, Kieranator-5050";
		editorCategory="ROG";
		editorSubcategory="HELO";
	}
	//-------------------------------------------------------------------------------------------------
	//Vanilla Helicopters-----------------------------------------------
	class ROG_MERLIN_BLK : I_Heli_Transport_02_F 
	{
		scope = public;
		editorCategory="ROG";
		editorSubcategory="HELO";
		side = 1;
		displayName = "Merlin(ROG)";
		author = "Kieranator-5050";
		hiddenSelectionsTextures[] = 
		{
		"ROG_HELO\textures\MERLIN\Marked\mer1.paa",
		"ROG_HELO\textures\MERLIN\Marked\mer2.paa",
		"ROG_HELO\textures\MERLIN\Marked\mer3.paa",
		"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};	
	};
	
	class ROG_MERLIN_BLK_Unmarked : ROG_MERLIN_BLK //Unmarked Version of the above skin
	{
		scope = public;
		displayName = "Merlin[Unmarked](ROG)";
		hiddenSelectionsTextures[] = 
		{
		"ROG_HELO\textures\MERLIN\Marked\mer1.paa",
		"ROG_HELO\textures\MERLIN\Unmarked\mer2um.paa",
		"ROG_HELO\textures\MERLIN\Marked\mer3.paa",
		"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};	
	};
	
	class ROG_MH6_BLK : B_Heli_Light_01_F
	{
		scope = public;
		editorCategory="ROG";
		editorSubcategory="HELO";
		displayName = "MH6[Marked](ROG)";
		author = "Kieranator-5050";
		hiddenSelectionsTextures[] = 
		{
		"ROG_HELO\textures\MH-6\hummingbird1.paa"
		};
	};

	class ROG_MH6_BLK_UM : ROG_MH6_BLK
	{
		scope = public;
		displayName = "MH6[Unmarked](ROG)";
		hiddenSelectionsTextures[] = 
		{
		"ROG_HELO\textures\MH-6\hummingbird1UM.paa"
		};
	};
	//----------------------------------------------------------------------------
	
	//EC135s
	class ROG_EC135_Gunmetalgrey : EC135Unarmedlu //class name of your skin with the original class name base
	{
		scope = public;
		editorCategory="ROG";
		editorSubcategory="HELO";
		displayName = "EC635(ROG)";
		author = "[FR]Charlieco89, Jaqi[Luke], Kieranator-5050";
		hiddenSelectionsTextures[] = 
		{
		"ROG_HELO\textures\marked\camo1.paa",
		"ROG_HELO\textures\marked\camo2.paa",
		"ROG_HELO\textures\marked\camo3.paa",
		"ROG_HELO\textures\marked\camo4.paa",
		"",
		""
		};
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
	
	class ROG_EC135_Gunmetalgrey_Unmarked : ROG_EC135_Gunmetalgrey //Unmarked Version of the above skin
	{
		scope = public;
		displayName = "EC635[Unmarked](ROG)";
		hiddenSelectionsTextures[] = 
		{
		"ROG_HELO\textures\marked\camo1.paa", 
		"ROG_HELO\textures\marked\camo2.paa", 
		"ROG_HELO\textures\unmarked\um_camo3.paa", 
		"ROG_HELO\textures\marked\camo4.paa", 
		"", 
		""
		};	
	};
	
	class ROG_EC135_Gunmetalgrey_Medevac : EC135ADlu//Medevac Varient
	{
		scope = public;
		editorCategory="ROG";
		editorSubcategory="HELO";
		displayName = "EC635 Medevac(ROG)";
		author = "[FR]Charlieco89, Jaqi[Luke], Kieranator-5050";
		side = 1;
		hiddenSelectionsTextures[] = 
		{
		"ROG_HELO\textures\marked\m_camo1.paa", 
		"ROG_HELO\textures\marked\m_camo2.paa", 
		"ROG_HELO\textures\marked\m_camo3.paa", 
		"ROG_HELO\textures\marked\m_camo4.paa", 
		"", 
		"ROG_HELO\textures\marked\m_camo6.paa"
		};
		
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
	
	class ROG_EC135_Gunmetalgrey_Medevac_Unmarked : ROG_EC135_Gunmetalgrey_Medevac//Medevac Unmarked Varient
	{
		scope = public;
		displayName = "EC635 Medevac[Unmarked](ROG)";
		hiddenSelectionsTextures[] = 
		{
		"ROG_HELO\textures\marked\m_camo1.paa", 
		"ROG_HELO\textures\marked\m_camo2.paa", 
		"ROG_HELO\textures\unmarked\m_um_camo3.paa", 
		"ROG_HELO\textures\marked\m_camo4.paa", 
		"", 
		"ROG_HELO\textures\marked\m_camo6.paa"
		};
	};
	//------------------------------------------------------------------------------------------
	
	//RHS MELB
	class ROG_MELB_Gunmetalgrey : ROG_MELB_Base
	{
		scope = public;
		displayName = "MH-6M[Unmarked](ROG)";
		hiddenSelectionsTextures[] = {"ROG_HELO\textures\rog_melb_unmarked.paa", ""};
	};
	
	class ROG_MELB_Gunmetalgrey_Marked : ROG_MELB_Base
	{
		scope = public;
		displayName = "MH-6M[Marked](ROG)";
		hiddenSelectionsTextures[] = {"ROG_HELO\textures\rog_melb_marked.paa", ""};
	};
	
	class ROG_MELB_OD_Unmarked : ROG_MELB_Base
	{
		scope = public;
		displayName = "MH-6M{OD}[Unmarked](ROG)";
		hiddenSelectionsTextures[] = {"ROG_HELO\textures\rog_melb_unmarked(OD).paa", ""};
	};
	
	class ROG_MELB_OD_Marked : ROG_MELB_Base
	{
		scope = public;
		displayName = "MH-6M{OD}[Marked](ROG)";
		hiddenSelectionsTextures[] = {"ROG_HELO\textures\rog_melb_marked(OD).paa", ""};
	};
	
	class ROG_UH1H_Unmarked : ROG_UH1H_Base 
	{
		scope = public;
		displayName = "UH-1H[Unmarked](ROG)";
		hiddenSelectionsTextures[] = 
		{
		"ROG_HELO\textures\ROG_UH1H_unmarked(0).paa", 
		"ROG_HELO\textures\ROG_UH1H_unmarked(1).paa", 
		"ROG_HELO\textures\ROG_UH1H_unmarked(2).paa", 
		"ROG_HELO\textures\ROG_UH1H_unmarked(3).paa"
		};
	};
	
	class ROG_UH1H_Marked : ROG_UH1H_Unmarked 
	{
		scope = public;
		displayName = "UH-1H[Marked](ROG)";
		hiddenSelectionsTextures[] = 
		{
		"ROG_HELO\textures\ROG_UH1H_marked(0).paa", 
		"ROG_HELO\textures\ROG_UH1H_marked(1).paa", 
		"ROG_HELO\textures\ROG_UH1H_marked(2).paa", 
		"ROG_HELO\textures\ROG_UH1H_marked(3).paa"
		};
	};
	
	class ROG_MI24_Gunmetalgrey : ROG_Mi24V_Base //class name of your skin with the original class name base
	{
		scope = public;
		displayName = "[ROG]MI-24V(Marked)";
		hiddenSelectionsTextures[] = {
		"ROG_HELO\textures\marked\0.paa",
		"ROG_HELO\textures\marked\1.paa",
		"",
		"ROG_HELO\textures\marked\3.paa"
		};
		 	
	};
	class ROG_MI24_Gunmetalgrey_unmarked : ROG_MI24_Gunmetalgrey
	{
		scope = public;
		displayName = "[ROG]MI-24V(UnMarked)";
		hiddenSelectionsTextures[] = {
		"ROG_HELO\textures\unmarked\0um.paa",
		"ROG_HELO\textures\marked\1.paa", 
		"",
		"ROG_HELO\textures\marked\3.paa"
		};	
	};
	
};
