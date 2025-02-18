#include "fticeclimber.h"


void ftIceClimber_OnItemPickup(HSD_GObj* fighterObj, BOOL bool) {
    Fighter_OnItemPickup(fighterObj, bool, 1, 1);
}

void ftIceClimber_OnItemInvisible(HSD_GObj* fighterObj) {
    Fighter_OnItemInvisible(fighterObj, 1);
}

void ftIceClimber_OnItemVisible(HSD_GObj *fighterObj) {
    Fighter_OnItemVisible(fighterObj, 1);
}

void ftIceClimber_OnItemDrop(HSD_GObj* gobj, BOOL bool1)
{
    Fighter_OnItemDrop(gobj, bool1, 1, 1);
}

void ftIceClimber_OnLoadForNana(Fighter* fighter) {
    PUSH_ATTRS(fighter, ftIceClimberAttributes);
}

void ftIceClimber_OnLoad(HSD_GObj* fighterObj) {

    s32 unused;
    Fighter* fighter = fighterObj->user_data;
    void** item_list = fighter->x10C_ftData->x48_items;
    fighter->x2222_flag.bits.b5 = 1; 
    
    PUSH_ATTRS(fighter, ftIceClimberAttributes);

    {
        ftIceClimberAttributes* attr = fighter->x2D4_specialAttributes;
        fighter->x40 = attr->x0;
        func_8026B3F8(item_list[0], 0x6AU);
        func_8026B3F8(item_list[1], 0x6BU);
        func_8026B3F8(item_list[2], 0x71U);
    }

}

void ftIceClimber_OnDeath(HSD_GObj* fighterObj) {
    Fighter* fighter = fighterObj->user_data;
    ftIceClimberAttributes* attr = fighter->x2D4_specialAttributes;
    func_80074A4C(fighterObj, 0U, 0);
    func_80074A4C(fighterObj, 1U, 0);
    fighter->sa.nana.x2234 = 0;
    fighter->sa.nana.x222C = 0;
    fighter->sa.nana.x2230.bits.b0 = 0;
    fighter->sa.nana.x2238 = 0;
    fighter->sa.nana.x224C = 0;
    fighter->sa.nana.x2250 = 0.0f;
}

void ftIceClimber_8011F060(HSD_GObj* fighterObj) {
    func_8011F190(fighterObj);
    func_80122898(fighterObj);
    func_80121164(fighterObj);
    func_8011F68C(fighterObj);
}

void ftIceClimber_LoadSpecialAttrs(HSD_GObj* fighterObj) {
    COPY_ATTRS(fighterObj, ftIceClimberAttributes);
}

void ftIceClimber_OnKnockbackEnter(HSD_GObj* fighterObj) {
    Fighter_OnKnockbackEnter(fighterObj, 1);
}

void ftIceClimber_OnKnockbackExit(HSD_GObj* fighterObj) {
    Fighter_OnKnockbackExit(fighterObj, 1);
}
