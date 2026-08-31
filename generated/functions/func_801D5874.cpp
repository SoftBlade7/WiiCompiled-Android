#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D5874(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D5874;

loc_801D5874:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(10));
}

loc_801D5878:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D5884;
    }
}

loc_801D587C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801D5884:
{
    r5 = 0;
    r6 = 0;
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801D5894:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D590C;
    }
}

loc_801D5898:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801D58A0:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801D58B8;
    }
}

loc_801D58A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_801D58AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D590C;
    }
}

loc_801D58B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801D58B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D590C;
    }
}

loc_801D58B8:
{
}

loc_801D58BC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801D58C8;
    }
}

loc_801D58C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_801D58C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D5904;
    }
}

loc_801D58C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(48));
}

loc_801D58CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801D58D8;
    }
}

loc_801D58D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(57));
}

loc_801D58D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D58E0;
    }
}

loc_801D58D8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801D58E0:
{
    r0 = (r5 * 10);
    r7 = r5;
    r6 = 1;
    r4 = (r4 + r0);
    r5 = (r4 + -48);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r5));
}

loc_801D58F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D5904;
    }
}

loc_801D58FC:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801D5904:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D5898;
    }
}

loc_801D590C:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D5874 func_801D5874 preserves=true fpr_mask=0x00000000
