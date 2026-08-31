#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070DE48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8070DE48;

loc_8070DE48:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 158u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 156u, (r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(701));
}

loc_8070DE50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DFF8;
    }
}

loc_8070DE54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070DED8;
    }
}

loc_8070DE58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(357));
}

loc_8070DE5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DFC0;
    }
}

loc_8070DE60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070DE9C;
    }
}

loc_8070DE64:
{
}

loc_8070DE68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(338))) {
        goto loc_8070DE84;
    }
}

loc_8070DE6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(321));
}

loc_8070DE70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DFA4;
    }
}

loc_8070DE74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070DE78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(320));
}

loc_8070DE7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070DF88;
    }
}

loc_8070DE80:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070DE84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(342));
}

loc_8070DE88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DF50;
    }
}

loc_8070DE8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070DE90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(340));
}

loc_8070DE94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070DF6C;
    }
}

loc_8070DE98:
{
    goto loc_8070DF50;
}

loc_8070DE9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(389));
}

loc_8070DEA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DFDC;
    }
}

loc_8070DEA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070DECC;
    }
}

loc_8070DEA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(385));
}

loc_8070DEAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8070DEB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070DEC0;
    }
}

loc_8070DEB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(384));
}

loc_8070DEB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070DF50;
    }
}

loc_8070DEBC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070DEC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(387));
}

loc_8070DEC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070DEC8:
{
    goto loc_8070DF50;
}

loc_8070DECC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(523));
}

loc_8070DED0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DFC0;
    }
}

loc_8070DED4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070DED8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(714));
}

loc_8070DEDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E114;
    }
}

loc_8070DEE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070DF18;
    }
}

loc_8070DEE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(710));
}

loc_8070DEE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E0DC;
    }
}

loc_8070DEEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070DF08;
    }
}

loc_8070DEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(707));
}

loc_8070DEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E090;
    }
}

loc_8070DEF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070DEFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(703));
}

loc_8070DF00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070DF04:
{
    goto loc_8070E044;
}

loc_8070DF08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(712));
}

loc_8070DF0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E0F8;
    }
}

loc_8070DF10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070DFDC;
    }
}

loc_8070DF14:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070DF18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(748));
}

loc_8070DF1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070E168;
    }
}

loc_8070DF20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070DF44;
    }
}

loc_8070DF24:
{
}

loc_8070DF28:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(734))) {
        goto loc_8070DF38;
    }
}

loc_8070DF2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(732));
}

loc_8070DF30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E130;
    }
}

loc_8070DF34:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070DF38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(747));
}

loc_8070DF3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070E14C;
    }
}

loc_8070DF40:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070DF44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10608));
}

loc_8070DF48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DFC0;
    }
}

loc_8070DF4C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8070DF50:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r5 = 0x808A0000u;
    r4 = 468;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 7416));
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070DF6C:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 469;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070DF88:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 851;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070DFA4:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 547;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070DFC0:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r5 = 0x808A0000u;
    r4 = 482;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 7416));
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070DFDC:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r5 = 0x808A0000u;
    r4 = 484;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 7416));
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070DFF8:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_8070E008:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070E028;
    }
}

loc_8070E00C:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 493;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070E028:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 488;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070E044:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_8070E054:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070E074;
    }
}

loc_8070E058:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 493;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070E074:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 489;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070E090:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_8070E0A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070E0C0;
    }
}

loc_8070E0A4:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 493;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070E0C0:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 487;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070E0DC:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 490;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070E0F8:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 491;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070E114:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 492;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070E130:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 493;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070E14C:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 486;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_8070E168:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 7416));
    r4 = 486;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFEF gpr_write=0x00001031 gpr_return=0x00000010 fpr_read=0xFFFFFFFD fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8070DE48 func_8070DE48 preserves=true fpr_mask=0x00000000
