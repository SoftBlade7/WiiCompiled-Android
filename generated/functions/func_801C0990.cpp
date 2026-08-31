#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C0990(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801C0990;

loc_801C0990:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80350000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r5 + 2352);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r5_addr_0 = (r5 + r0);
    r31 = MemoryInline::FlatRead32(r5_addr_0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C09C0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801C09CC;
    }
}

loc_801C09C4:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
    MemoryInline::FlatWrite32(r30, r0);
}

loc_801C09CC:
{
    r30 = MemoryInline::FlatRead32((r31 + 2236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(-1));
}

loc_801C09D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C09FC;
    }
}

loc_801C09D8:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(253));
}

loc_801C09E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C09EC;
    }
}

loc_801C09E4:
{
    r30 = -1;
    goto loc_801C09FC;
}

loc_801C09EC:
{
    r0 = MemoryInline::FlatRead32((r31 + 2268));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C09F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C09FC;
    }
}

loc_801C09F8:
{
    r30 = -2;
}

loc_801C09FC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001B gpr_write=0xC000002B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801C0990 func_801C0990 preserves=true fpr_mask=0x00000000
