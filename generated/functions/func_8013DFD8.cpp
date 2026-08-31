#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013DFD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8013DFD8;

loc_8013DFD8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80330000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 25208);
    r0 = MemoryInline::FlatRead8((r4 + 1380));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8013DFF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013E078;
    }
}

loc_8013DFF8:
{
    r0 = (r0 * 34);
}

loc_8013E000:
{
    r5 = (r4 + r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8013E018;
    }
}

loc_8013E008:
{
    r0 = 4;
    r4 = 4;
    MemoryInline::FlatWrite8((r5 + 1260), static_cast<uint8_t>(r0));
    goto loc_8013E01C;
}

loc_8013E018:
{
    r4 = 5;
}

loc_8013E01C:
{
    r7 = 0x80330000u;
    r7 = (r7 + 25208);
    r0 = MemoryInline::FlatRead8((r7 + 1381));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(128));
}

loc_8013E02C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013E068;
    }
}

loc_8013E030:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 2040);
    r5 = (r7 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 1368));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013E040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013E068;
    }
}

loc_8013E044:
{
    r0 = MemoryInline::FlatRead8((r7 + 1380));
    r6 = r3;
    r12 = MemoryInline::FlatRead32((r5 + 1364));
    r5 = 0;
    r0 = (r0 * 284);
    r3 = (r7 + r0);
    r3 = (r3 + 60);
    ctr = r12;
    ctx->lr = 0x8013E068u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8013E068:
{
    r3 = 0x80330000u;
    r0 = 4;
    r3 = (r3 + 25208);
    MemoryInline::FlatWriteRam8((r3 + 1380), static_cast<uint8_t>(r0));
}

loc_8013E078:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013DFD8 func_8013DFD8 preserves=true fpr_mask=0x00000000
