#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E546C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806E546C;

loc_806E546C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_806E5478:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808C0000u;
    r31 = (r31 + 28760);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_806E54B8;
    }
}

loc_806E549C:
{
}

loc_806E54A0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_806E5534;
    }
}

loc_806E54A4:
{
}

loc_806E54A8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_806E55B0;
    }
}

loc_806E54AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(6));
}

loc_806E54B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E562C;
    }
}

loc_806E54B4:
{
    goto loc_806E56A4;
}

loc_806E54B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 1272));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806E54C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E56A4;
    }
}

loc_806E54C4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806E54D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x808A0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2164));
    r3 = 0x808A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 1272), 0, 33u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r29 + 1272), r0);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 2236));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r29 + 1276), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 288));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r29 + 1280), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 292));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 152));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 296));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r29 + 1288), f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 156));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r29 + 1292), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r29 + 1296), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r29 + 1300), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r29 + 1304), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r29 + 1284), f3.d);
    goto loc_806E56A4;
}

loc_806E5534:
{
    r0 = MemoryInline::FlatRead32((r3 + 1272));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806E553C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E56A4;
    }
}

loc_806E5540:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806E5550u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x808A0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2164));
    r3 = 0x808A0000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 1272), 0, 33u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r29 + 1272), r0);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 2236));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r29 + 1276), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 288));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r29 + 1280), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 292));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 152));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 296));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r29 + 1288), f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 156));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r29 + 1292), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r29 + 1296), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r29 + 1300), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r29 + 1304), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r29 + 1284), f3.d);
    goto loc_806E56A4;
}

loc_806E55B0:
{
    r0 = MemoryInline::FlatRead32((r3 + 1272));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806E55B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E56A4;
    }
}

loc_806E55BC:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806E55CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x808A0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2164));
    r3 = 0x808A0000u;
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 1272), 0, 33u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r29 + 1272), r0);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 2236));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r29 + 1276), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 288));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r29 + 1280), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 292));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 152));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 296));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r29 + 1288), f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 156));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r29 + 1292), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r29 + 1296), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r29 + 1300), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 32u, (r29 + 1304), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r29 + 1284), f3.d);
    goto loc_806E56A4;
}

loc_806E562C:
{
    r0 = MemoryInline::FlatRead32((r3 + 1272));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806E5634:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E56A4;
    }
}

loc_806E5638:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x806E5648u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x808A0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2164));
    r3 = 0x808A0000u;
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 1272), 0, 33u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r29 + 1272), r0);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 2236));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r29 + 1276), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 288));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r29 + 1280), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 292));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 152));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 296));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r29 + 1288), f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 156));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r29 + 1292), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r29 + 1296), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r29 + 1300), f0.d);
    MemoryInline::WriteResolved8(guest_range_3, 32u, (r29 + 1304), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r29 + 1284), f3.d);
}

loc_806E56A4:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806E546C func_806E546C preserves=true fpr_mask=0x00000000
