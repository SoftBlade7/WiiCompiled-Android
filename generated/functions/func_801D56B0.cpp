#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D56B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801D56B0;

loc_801D56B0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_801D56B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D56CC;
    }
}

loc_801D56BC:
{
    r0 = 43;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801D56CC:
{
}

loc_801D56D0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(48))) {
        goto loc_801D56DC;
    }
}

loc_801D56D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(57));
}

loc_801D56D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D5704;
    }
}

loc_801D56DC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_801D56E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(65))) {
        goto loc_801D56F0;
    }
}

loc_801D56E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_801D56EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D5704;
    }
}

loc_801D56F0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_801D56F8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(97))) {
        goto loc_801D5710;
    }
}

loc_801D56FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(122));
}

loc_801D5700:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801D5710;
    }
}

loc_801D5704:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801D5710:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r5 = (r5_rot_0 & 15);
    r0 = 37;
}

loc_801D571C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r4 = (r4 & 15);
    r0 = (r5 + 55);
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(10))) {
        goto loc_801D5730;
    }
}

loc_801D572C:
{
    r0 = (r5 + 48);
}

loc_801D5730:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(10));
}

loc_801D5734:
{
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = (r4 + 55);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D5744;
    }
}

loc_801D5740:
{
    r0 = (r4 + 48);
}

loc_801D5744:
{
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D56B0 func_801D56B0 preserves=true fpr_mask=0x00000000
