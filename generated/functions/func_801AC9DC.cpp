#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AC9DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801AC9DC;

loc_801AC9DC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r3 = MemoryInline::FlatRead32((r13 + -25224));
    r12 = MemoryInline::FlatRead32((r3 + 1168));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801ACA00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801ACA0C;
    }
}

loc_801ACA04:
{
    ctr = r12;
    ctx->lr = 0x801ACA0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801ACA0C:
{
    r3 = MemoryInline::FlatRead32((r13 + -25224));
    r0 = MemoryInline::FlatRead32((r3 + 1160));
}

loc_801ACA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801ACA2C;
    }
}

loc_801ACA1C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8012406Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32((r13 + -25224));
    r0 = (r3 + -2147483648);
    MemoryInline::FlatWrite32((r4 + 1156), r0);
}

loc_801ACA2C:
{
    r3 = MemoryInline::FlatRead32((r13 + -25224));
    r0 = MemoryInline::FlatRead32((r3 + 1160));
}

loc_801ACA38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801ACA70;
    }
}

loc_801ACA3C:
{
    r3 = MemoryInline::FlatRead32((r3 + 1156));
    r4 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r4 = MemoryInline::FlatRead32((r13 + -25224));
    r3 = MemoryInline::FlatRead32((r4 + 1156));
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + 2);
    MemoryInline::FlatWrite16((r4 + 1164), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r4 + 1156), r3);
    r4 = MemoryInline::FlatRead32((r13 + -25224));
    r3 = MemoryInline::FlatRead32((r4 + 1156));
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r4 + 1166), static_cast<uint16_t>(r0));
}

loc_801ACA70:
{
    r3 = MemoryInline::FlatRead32((r13 + -25224));
    r0 = MemoryInline::FlatRead32((r3 + 1160));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801ACA7C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801ACB6C;
    }
}

loc_801ACA80:
{
    r0 = MemoryInline::FlatRead32((r3 + 1152));
    r0 = (r0 * 576);
    r31 = (r3 + r0);
    r30 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80124084u>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26240));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -26232));
    r5 = r29;
    r4 = 1127219200;
    goto loc_801ACB2C;
}

loc_801ACAAC:
{
    r3 = MemoryInline::FlatRead32((r13 + -25224));
    r5 = (r5 + -4);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0 = MemoryInline::FlatRead16((r3 + 1164));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -25224));
    r0 = MemoryInline::FlatRead16((r3 + 1166));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r30 = (r30 + 4);
    r3 = MemoryInline::FlatRead32((r13 + -25224));
    r0 = MemoryInline::FlatRead16((r3 + 1164));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16((r3 + 1164), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -25224));
    r0 = MemoryInline::FlatRead16((r3 + 1166));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16((r3 + 1166), static_cast<uint16_t>(r0));
}

loc_801ACB2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801ACB30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801ACAAC;
    }
}

loc_801ACB34:
{
    r3 = r31;
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r3 = r31;
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80123FCCu>(ctx);
    r4 = MemoryInline::FlatRead32((r13 + -25224));
    r3 = MemoryInline::FlatRead32((r4 + 1152));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1152), r0);
    r3 = MemoryInline::FlatRead32((r13 + -25224));
    r0 = MemoryInline::FlatRead32((r3 + 1152));
    r0 = (r0 & 1);
    MemoryInline::FlatWrite32((r3 + 1152), r0);
}

loc_801ACB6C:
{
    r4 = MemoryInline::FlatRead32((r13 + -25224));
    r3 = MemoryInline::FlatRead32((r4 + 1160));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1160), r0);
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AC9DC func_801AC9DC preserves=true fpr_mask=0x00000000
