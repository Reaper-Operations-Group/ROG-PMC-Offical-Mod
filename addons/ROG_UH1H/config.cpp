#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgPatches
{
	class ROG_UH1H_rhsgref_air 
	{
		units[]= 
		{
		"ROG_UH1H_Unmarked" ,
		"ROG_UH1H_Marked"
		};
		weapons[]={};
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
	
	class rhs_uh1h_base;
	class rhs_uh1h_hidf : rhs_uh1h_base{};
	class ROG_UH1H_Unmarked : rhs_uh1h_hidf 
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_UH1H\textures\editor\preview.paa";
		picture="ROG_UH1H\textures\ROG_Logo.paa";
		Icon="ROG_UH1H\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "UH-1H[Unmarked](ROG)";
		author = "RHS Team, Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_UH1H\textures\ROG_UH1H_unmarked(0).paa", "ROG_UH1H\textures\ROG_UH1H_unmarked(1).paa", "ROG_UH1H\textures\ROG_UH1H_unmarked(2).paa", "ROG_UH1H\textures\ROG_UH1H_unmarked(3).paa"};
		
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
		
	};
	
	class ROG_UH1H_Marked : rhs_uh1h_hidf 
	{
		editorCategory="ION";
		editorSubcategory="HELO";
		editorPreview="ROG_UH1H\textures\editor\preview.paa";
		picture="ROG_UH1H\textures\ROG_Logo.paa";
		Icon="ROG_UH1H\textures\ROG_Logo.paa";
		scope = public;
		crew = "B_CTRG_soldier_engineer_exp_F";
		side = 1;
		faction = "BLU_G_F";
		displayName = "UH-1H[Marked](ROG)";
		author = "RHS Team, Kieranator-5050";
		hiddenSelectionsTextures[] = {"ROG_UH1H\textures\ROG_UH1H_marked(0).paa", "ROG_UH1H\textures\ROG_UH1H_marked(1).paa", "ROG_UH1H\textures\ROG_UH1H_marked(2).paa", "ROG_UH1H\textures\ROG_UH1H_marked(3).paa"};
		
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
        ace_fastroping_friesAttachmentPoint[] = {0, 1.1, -0.4};
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
	
};
