#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80659D58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80659D58;

loc_80659D58:
{
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r5 + 8016));
}

loc_80659D64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80659E80;
    }
}

loc_80659D68:
{
    r3 = 0x809C0000u;
    r0 = 2;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r7 = 0;
    r3 = 0;
    r6 = (r5 + 40);
    ctr = r0;
}

loc_80659D84:
{
    r0 = (r3 & 255);
    r0 = (r0 * 240);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_80659D98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80659DA8;
    }
}

loc_80659D9C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80659DA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80659DA4:
{
    r7 = (r7 + 1);
}

loc_80659DA8:
{
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r0 = (r0 * 240);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_80659DC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80659DD0;
    }
}

loc_80659DC4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80659DC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80659DCC:
{
    r7 = (r7 + 1);
}

loc_80659DD0:
{
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r0 = (r0 * 240);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_80659DE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80659DF8;
    }
}

loc_80659DEC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80659DF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80659DF4:
{
    r7 = (r7 + 1);
}

loc_80659DF8:
{
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r0 = (r0 * 240);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_80659E10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80659E20;
    }
}

loc_80659E14:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80659E18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80659E1C:
{
    r7 = (r7 + 1);
}

loc_80659E20:
{
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r0 = (r0 * 240);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_80659E38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80659E48;
    }
}

loc_80659E3C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80659E40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80659E44:
{
    r7 = (r7 + 1);
}

loc_80659E48:
{
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r0 = (r0 * 240);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80659E60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80659E70;
    }
}

loc_80659E64:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80659E68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80659E6C:
{
    r7 = (r7 + 1);
}

loc_80659E70:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80659D84;
    }
}

loc_80659E78:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80659E80:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r0 = (r0 * 88);
    r6 = (r3 + r0);
    r8 = MemoryInline::FlatRead8((r6 + 89));
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r0 = (r5 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80659F9C;
    }
}

loc_80659EA4:
{
    r0 = 2;
    r7 = -1;
    r6 = 0;
    ctr = r0;
}

loc_80659EB4:
{
    r5 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r5 + 10528));
}

loc_80659EC0:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r0))) {
        goto loc_80659ED4;
    }
}

loc_80659EC4:
{
    r7 = (r7 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80659ECC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80659ED4;
    }
}

loc_80659ED0:
{
    goto loc_80659F94;
}

loc_80659ED4:
{
    r6 = (r6 + 1);
    r5 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r5 + 10528));
}

loc_80659EE4:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r0))) {
        goto loc_80659EF8;
    }
}

loc_80659EE8:
{
    r7 = (r7 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80659EF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80659EF8;
    }
}

loc_80659EF4:
{
    goto loc_80659F94;
}

loc_80659EF8:
{
    r6 = (r6 + 1);
    r5 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r5 + 10528));
}

loc_80659F08:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r0))) {
        goto loc_80659F1C;
    }
}

loc_80659F0C:
{
    r7 = (r7 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80659F14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80659F1C;
    }
}

loc_80659F18:
{
    goto loc_80659F94;
}

loc_80659F1C:
{
    r6 = (r6 + 1);
    r5 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r5 + 10528));
}

loc_80659F2C:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r0))) {
        goto loc_80659F40;
    }
}

loc_80659F30:
{
    r7 = (r7 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80659F38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80659F40;
    }
}

loc_80659F3C:
{
    goto loc_80659F94;
}

loc_80659F40:
{
    r6 = (r6 + 1);
    r5 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r5 + 10528));
}

loc_80659F50:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r0))) {
        goto loc_80659F64;
    }
}

loc_80659F54:
{
    r7 = (r7 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80659F5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80659F64;
    }
}

loc_80659F60:
{
    goto loc_80659F94;
}

loc_80659F64:
{
    r6 = (r6 + 1);
    r5 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r5 + 10528));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_80659F74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80659F88;
    }
}

loc_80659F78:
{
    r7 = (r7 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80659F80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80659F88;
    }
}

loc_80659F84:
{
    goto loc_80659F94;
}

loc_80659F88:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80659EB4;
    }
}

loc_80659F90:
{
    r6 = -1;
}

loc_80659F94:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80659F9C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80659D58 func_80659D58 preserves=true fpr_mask=0x00000000
