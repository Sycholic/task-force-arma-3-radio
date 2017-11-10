class ItemWatch;
class TFAR_microdagr: ItemWatch {
    author = "Raspu, Nkey";
    displayName = "$STR_TFAR_Veh_MicroDagr";
    descriptionShort = "$STR_TFAR_Veh_MicroDagr_Desc";
    scope = PUBLIC;
    scopeCurator = PUBLIC;
    picture = QPATHTOF(microdagr\ui\microdagr_icon.paa);
    model = QPATHTOF(microdagr\data\tfr_microdagr);
};
HIDDEN_CLASS(tf_microdagr : TFAR_microdagr); //#Deprecated dummy class for backwards compat
