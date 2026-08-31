#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DE470(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DE470;

loc_801DE470:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
}

loc_801DE474:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DE484;
    }
}

loc_801DE478:
{
    r0 = MemoryInline::FlatRead8((r3 + 201));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801DE480:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DE48C;
    }
}

loc_801DE484:
{
    r3 = -3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_801DE48C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 128));
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE4A0:
{
    MemoryInline::FlatWrite32(r5, r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE4E4;
    }
}

loc_801DE4A8:
{
    r0 = (r4 & 4096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE4AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DE4E4;
    }
}

loc_801DE4B0:
{
    r0 = (r3 + -65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_801DE4B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE4E4;
    }
}

loc_801DE4BC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801DE4C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE4E4;
    }
}

loc_801DE4C4:
{
    r0 = (r3 + -131072);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_801DE4CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE4E4;
    }
}

loc_801DE4D0:
{
    r0 = (r3 + -196608);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_801DE4D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE4E4;
    }
}

loc_801DE4DC:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
}

loc_801DE4E4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DE470 func_801DE470 preserves=true fpr_mask=0x00000000
