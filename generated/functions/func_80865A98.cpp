#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80865A98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80865A98;

loc_80865A98:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + -1200);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 1740));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1764));
}

loc_80865AC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80865ADC;
    }
}

loc_80865AC8:
{
}

loc_80865ACC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80865AE8;
    }
}

loc_80865AD0:
{
}

loc_80865AD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80865AF4;
    }
}

loc_80865AD8:
{
    goto loc_80865AFC;
}

loc_80865ADC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1036));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80865AFC;
}

loc_80865AE8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1052));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80865AFC;
}

loc_80865AF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1044));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_80865AFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1096));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80865B04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80865B10;
    }
}

loc_80865B08:
{
    f1.d = f0.d;
    goto loc_80865B20;
}

loc_80865B10:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1112));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80865B18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80865B20;
    }
}

loc_80865B1C:
{
    f1.d = f0.d;
}

loc_80865B20:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_80865B28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80865B30;
    }
}

loc_80865B2C:
{
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
}

loc_80865B30:
{
    r0 = MemoryInline::FlatRead32((r30 + 1740));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80865B38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865B48;
    }
}

loc_80865B3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80865B40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865B84;
    }
}

loc_80865B44:
{
    goto loc_80865BBC;
}

loc_80865B48:
{
    r3 = MemoryInline::FlatRead32((r30 + 312));
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1036));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 1764));
    r12 = MemoryInline::FlatRead32((r3 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1040));
    r12 = MemoryInline::FlatRead32((r12 + 20));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctr = r12;
    ctx->lr = 0x80865B74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 1776), r0);
    MemoryInline::FlatWrite32((r30 + 1780), r0);
    goto loc_80865BBC;
}

loc_80865B84:
{
    r3 = MemoryInline::FlatRead32((r30 + 312));
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1044));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 1764));
    r12 = MemoryInline::FlatRead32((r3 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1048));
    r12 = MemoryInline::FlatRead32((r12 + 20));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctr = r12;
    ctx->lr = 0x80865BB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 1776), r0);
    MemoryInline::FlatWrite32((r30 + 1780), r0);
}

loc_80865BBC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80865A98 func_80865A98 preserves=true fpr_mask=0x00000000
