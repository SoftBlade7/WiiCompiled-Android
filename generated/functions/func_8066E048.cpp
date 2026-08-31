#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066E048(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8066E048;

loc_8066E048:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066E064:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066E0AC;
    }
}

loc_8066E068:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r3 = MemoryInline::FlatRead32((r3 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8066E084u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066E088:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066E098;
    }
}

loc_8066E08C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 32), static_cast<uint8_t>(r0));
    goto loc_8066E0AC;
}

loc_8066E098:
{
    r3 = MemoryInline::FlatRead32((r31 + 30092));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r31 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_8066E0B0;
}

loc_8066E0AC:
{
    r3 = 0;
}

loc_8066E0B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066E0B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066E0C8;
    }
}

loc_8066E0B8:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r31 + 30076), r3);
    MemoryInline::FlatWrite32((r31 + 20), r0);
    goto loc_8066E110;
}

loc_8066E0C8:
{
    r5 = MemoryInline::FlatRead32((r31 + 16896));
    r3 = r31;
    r6 = MemoryInline::FlatRead32((r31 + 16900));
    r7 = (r31 + 16932);
    r8 = (r31 + 16904);
    ctx->lr = 0x8066E0E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066E160u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8066E0E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066E0F8;
    }
}

loc_8066E0E8:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r31 + 30076), r3);
    MemoryInline::FlatWrite32((r31 + 20), r0);
    goto loc_8066E110;
}

loc_8066E0F8:
{
    r4 = (r31 + 65536);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r4 + -30284));
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + -30284), r0);
}

loc_8066E110:
{
    r0 = MemoryInline::FlatRead8((r31 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066E118:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066E14C;
    }
}

loc_8066E11C:
{
    r3 = MemoryInline::FlatRead32((r31 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8066E130u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066E134:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066E144;
    }
}

loc_8066E138:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 32), static_cast<uint8_t>(r0));
    goto loc_8066E14C;
}

loc_8066E144:
{
    r3 = MemoryInline::FlatRead32((r31 + 30092));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8066E14C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066E048 func_8066E048 preserves=true fpr_mask=0x00000000
