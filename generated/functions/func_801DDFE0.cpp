#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DDFE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DDFE0;

loc_801DDFE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r6 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDFF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE000;
    }
}

loc_801DDFF8:
{
    r0 = (r6 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDFFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE008;
    }
}

loc_801DE000:
{
    r3 = -7;
    goto loc_801DE054;
}

loc_801DE008:
{
    r0 = MemoryInline::FlatRead32((r3 + 228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE01C;
    }
}

loc_801DE014:
{
    r3 = -6;
    goto loc_801DE054;
}

loc_801DE01C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(35));
}

loc_801DE020:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DE02C;
    }
}

loc_801DE024:
{
    r3 = -3;
    goto loc_801DE054;
}

loc_801DE02C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801DE030:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE03C;
    }
}

loc_801DE034:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801DE038:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DE044;
    }
}

loc_801DE03C:
{
    r3 = -5;
    goto loc_801DE054;
}

loc_801DE044:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r3 = (r3 + 224);
    // inline leaf 0x801DC9BC (3 guest instruction(s))
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    // end of inlined leaf 0x801DC9BC
    r3 = 0;
}

loc_801DE054:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000006B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DDFE0 func_801DDFE0 preserves=true fpr_mask=0x00000000
