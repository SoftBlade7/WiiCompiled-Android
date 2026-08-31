#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FB8B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800FB8B0;

loc_800FB8B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FB8BC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FB8D0;
    }
}

loc_800FB8C4:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FB8CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FB8D8;
    }
}

loc_800FB8D0:
{
    r3 = 2;
    goto loc_800FB910;
}

loc_800FB8D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800FB8DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FB8E8;
    }
}

loc_800FB8E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(9));
}

loc_800FB8E4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FB8FC;
    }
}

loc_800FB8E8:
{
    r4 = 0x80280000u;
    r4 = (r4 + -20712);
    ctx->lr = 0x800FB8F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80109380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 2;
    goto loc_800FB910;
}

loc_800FB8FC:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & -8);
    r3 = 0;
    r4 = (r0 + r4);
    MemoryInline::FlatWrite32((r4 + 424), r5);
    MemoryInline::FlatWrite32((r4 + 428), r6);
}

loc_800FB910:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FB8B0 func_800FB8B0 preserves=true fpr_mask=0x00000000
