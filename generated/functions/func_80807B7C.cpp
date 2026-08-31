#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80807B7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80807B7C;

loc_80807B7C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    ctx->lr = 0x80807B9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8080761Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808D0000u;
    r0 = 1127219200;
    r3 = (r3 + 21552);
    MemoryInline::FlatWrite32(r31, r3);
    r4 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32(r30);
    r3 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead16((r5 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 344), static_cast<uint16_t>(r0));
    f2.d = MemoryInline::FlatReadFloat64((r4 + -20520));
    r4 = MemoryInline::FlatRead32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -20500));
    r0 = MemoryInline::FlatRead16((r4 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 346), static_cast<uint16_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80807BDC:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 348), f0.d);
    r3 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead16((r3 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 352), static_cast<uint16_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80807C14;
    }
}

loc_80807C0C:
{
    r0 = 2;
    MemoryInline::FlatWrite16((r31 + 346), static_cast<uint16_t>(r0));
}

loc_80807C14:
{
    r0 = MemoryInline::FlatRead16((r31 + 346));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = 1127219200;
    r6 = 0x808B0000u;
    r4 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead16((r31 + 352));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    f5.d = MemoryInline::FlatReadFloat64((r6 + -20520));
    r0 = (r0 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -20508));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 264));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 272));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 268));
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 332), f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 340), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    MemoryInline::FlatWriteFloat32((r31 + 356), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 336), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80807B7C func_80807B7C preserves=true fpr_mask=0x00000000
