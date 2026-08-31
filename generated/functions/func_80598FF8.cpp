#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80598FF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80598FF8;

loc_80598FF8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059901C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80599108;
    }
}

loc_80599020:
{
    r4 = MemoryInline::FlatRead32((r3 + 144));
    r6 = MemoryInline::FlatRead32((r4 + 20));
    r5 = MemoryInline::FlatRead32((r6 + 32));
    r4 = MemoryInline::FlatRead32((r6 + 36));
    r0 = MemoryInline::FlatRead32((r6 + 40));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    // inline leaf 0x8059069C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8059069C
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 596), 0, 44u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 596));
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 28), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r29 + 28), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 600));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r29 + 32), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 604));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r29 + 36), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 608));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r29 + 40), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 612));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r29 + 44), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 616));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r29 + 48), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 620));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r29 + 52), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 624));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r29 + 56), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 628));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r29 + 60), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 632));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r29 + 64), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 636));
    r3 = r29;
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r29 + 68), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r29 + 40), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r29 + 56), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r29 + 72), f0.d);
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 124));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805990D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = MemoryInline::FlatRead32((r29 + 124));
    r31 = 0;
}

loc_805990DC:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805990E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805990F8;
    }
}

loc_805990EC:
{
    r5 = (r29 + 28);
    r4 = 0;
    ctx->lr = 0x805990F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_805990F8:
{
    r31 = (r31 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_80599104:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805990DC;
    }
}

loc_80599108:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80598FF8 func_80598FF8 preserves=true fpr_mask=0x00000000
